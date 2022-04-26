/*
 * list.c
 *
 *  Created on: Apr 15, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
/*define Node used in list*/
typedef struct{
	int		last;
	int		next;
	int		root;
	char 	*name;
} Node;

static	Node NodePool[MAX_LIST_NODE];
/*================================================================*/
/*Make a Node Is a Root In Queue */
static	void  QueueNode(int item);
static	void  QueueNode(int item)
{
  Node   *itemptr;

  itemptr =&(NodePool[item]);
  itemptr->next=item;
  itemptr->last=item;
  itemptr->root=item;

}

/*------------------------------------*/
/*Put a Node after one Node*/
static	void  AppendNode(int last,int item);
static	void  AppendNode(int last,int item)
{
  int  next,root;
  Node   *lastptr;
  Node   *itemptr;
  Node   *nextptr;
  lastptr =&(NodePool[last]);
  root=lastptr->root;
  next=lastptr->next;
  lastptr->next=item;

  itemptr =&(NodePool[item]);
  itemptr->next=next;
  itemptr->last=last;
  itemptr->root=root;

  nextptr =&(NodePool[next]);
  nextptr->last=item;
}
/*------------------------------------*/
/*Put a Node Befor one Node*/
static	void  BeforeNode(int next,int item);
static	void  BeforeNode(int next,int item)
{
  int  last,root;
  Node   *nextptr;
  Node   *itemptr;
  Node   *lastptr;

  nextptr =&(NodePool[next]);
  root=nextptr->root;
  last=nextptr->last;
  nextptr->last=item;

  itemptr =&(NodePool[item]);
  itemptr->next=next;
  itemptr->last=last;
  itemptr->root=root;

  lastptr =&(NodePool[last]);
  lastptr->next=item;

}
/*------------------------------------*/
/*Delete a Node From Queue */
static	void  DeleteNode(int item);
static	void  DeleteNode(int item)
{
  int last,next;
  Node   *itemptr;
  Node   *lastptr;
  Node   *nextptr;

  itemptr =&(NodePool[item]);
  next=itemptr->next;
  if(next == item)	 return;
  last=itemptr->last;
  itemptr->last=item;
  next=itemptr->next;
  itemptr->next=item;
  itemptr->root=item;

  lastptr =&(NodePool[last]);
  lastptr->next=next;

  nextptr =&(NodePool[next]);
  nextptr->last=last;

}
/*------------------------------------*/
/*Find a Node In A Queue */
static	int  LocateNode(int root,int item);
static	int  LocateNode(int root,int item)
{
  int next;
  next=NodePool[root].next;
  for(;;)
  {
    if(next == root)	return(root);	/*no find*/
	if(next == item)	return(item);	/*find the node*/
    next=NodePool[next].next;
  }
  return root;
}


/*------------------------------------*/
/*Browse a Node In Queue */
static	int  BrowseNode(int root);
static	int  BrowseNode(int root)
{
  int next,size;
  size=0;
  next=NodePool[root].next;
  for(;;)
  {
    if(next == root) break;
    next=NodePool[next].next;
	size++;
  }
  return(size);
}

/*------------------------------------*/
#define  get_node_next(node)	NodePool[(node)].next
#define  get_node_last(node)	NodePool[(node)].last
#define  get_node_root(node)	NodePool[(node)].root

/*================================================================*/
#define   IDLE_LIST    0
/*------------------------------------*/
/*initiate all node for future use */
void  list_ini_list(void);
void  list_ini_list(void)
{
  int ii;
  QueueNode(IDLE_LIST);
  for(ii=IDLE_LIST+1;ii<MAX_LIST_NODE;ii++)
  {
	QueueNode(ii);
	BeforeNode(IDLE_LIST,ii);
	NodePool[ii].name = NULL;
  }
  BrowseNode(IDLE_LIST);
  ii = LocateNode(IDLE_LIST,3);
}

static	int need_ini = 0;
int list_new_list(void);
int list_new_list()
{
	int list;
	if(need_ini == 0)
	{
		need_ini = 0x1234;
		list_ini_list();
	}

	list = get_node_next(IDLE_LIST);
	if(list == IDLE_LIST)
	{
		os_panic("no enough node\n");
		return IDLE_LIST;
	}
	DeleteNode(list);
	QueueNode(list);
	return list;
}

void list_free_list(int list);
void list_free_list(int list)
{
	if(list == 0)
		return;
	if(list < MAX_LIST_NODE)
	{
		DeleteNode(list);
		AppendNode(IDLE_LIST,list);
		return;
	}
	os_alarm("List wrong! %d \n",list);
}
/*================================================================*/
int list_alloc_list_node(int list);
int list_alloc_list_node(int list)
{
	int node;
	node = get_node_next(IDLE_LIST);
	if(node == IDLE_LIST)
	{
		os_panic("no enough node\n");
		return IDLE_LIST;
	}
	DeleteNode(node);
	AppendNode(list,node);
	return node;
}

int list_free_list_node(int list);
int list_free_list_node(int list)
{
	int node;
	node = NodePool[list].next;
	if( node == list)
		return node;

	DeleteNode(node);
	AppendNode(IDLE_LIST,node);
	return node;
}

int list_free_this_node(int node);
int list_free_this_node(int node)
{
	if( node == IDLE_LIST)
		return node;

	DeleteNode(node);
	AppendNode(IDLE_LIST,node);
	return node;
}

int list_get_next(int list);
int list_get_next(int list)
{
	return get_node_next(list);
}
/*================================================================*/
char *list_get_name(int node);
char *list_get_name(int node)
{
	return NodePool[node].name;
}

void list_set_name(int node,char *name);
void list_set_name(int node,char *name)
{
	NodePool[node].name=name;
}
/*================================================================*/
/* end of list.c */
