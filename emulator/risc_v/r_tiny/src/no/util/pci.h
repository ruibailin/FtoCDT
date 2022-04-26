
/*------------------------------------
 * pci.h
 * Create:  2021-03-05
 * Author:  Steve Rui
 *------------------------------------
 * Record:
 *
 *
 *
 *
 *------------------------------------
 */


#include "../0ctr.h"
#ifndef NO_UTIL_PCI_H_
#define NO_UTIL_PCI_H_
/*================================================================*/
#include "iomem.h"

typedef struct PCIBus PCIBus;
typedef struct PCIDevice PCIDevice;

/* bar type */
#define PCI_ADDRESS_SPACE_MEM		0x00
#define PCI_ADDRESS_SPACE_IO		0x01
#define PCI_ADDRESS_SPACE_MEM_PREFETCH	0x08

#define PCI_ROM_SLOT 6
#define PCI_NUM_REGIONS 7

/* PCI config addresses */
#define PCI_VENDOR_ID		0x00	/* 16 bits */
#define PCI_DEVICE_ID		0x02	/* 16 bits */
#define PCI_COMMAND		0x04	/* 16 bits */
#define PCI_COMMAND_IO		(1 << 0)
#define PCI_COMMAND_MEMORY	(1 << 1)
#define PCI_STATUS		0x06	/* 16 bits */
#define  PCI_STATUS_CAP_LIST	(1 << 4)
#define PCI_CLASS_PROG		0x09
#define PCI_SUBSYSTEM_VENDOR_ID	0x2c    /* 16 bits */
#define PCI_SUBSYSTEM_ID	0x2e    /* 16 bits */
#define PCI_CAPABILITY_LIST	0x34    /* 8 bits */
#define PCI_INTERRUPT_LINE	0x3c    /* 8 bits */
#define PCI_INTERRUPT_PIN	0x3d    /* 8 bits */

typedef void PCIBarSetFunc(void *opaque, int bar_num, uint32_t addr,
                           BOOL enabled);

PCIDevice *pci_register_device(PCIBus *b, const char *name, int devfn,
                               uint16_t vendor_id, uint16_t device_id,
                               uint8_t revision, uint16_t class_id);
PhysMemoryMap *pci_device_get_mem_map(PCIDevice *d);
PhysMemoryMap *pci_device_get_port_map(PCIDevice *d);
void pci_register_bar(PCIDevice *d, unsigned int bar_num,
                      uint32_t size, int type,
                      void *opaque, PCIBarSetFunc *bar_set);
IRQSignal *pci_device_get_irq(PCIDevice *d, unsigned int irq_num);
uint8_t *pci_device_get_dma_ptr(PCIDevice *d, uint64_t addr, BOOL is_rw);
void pci_device_set_config8(PCIDevice *d, uint8_t addr, uint8_t val);
void pci_device_set_config16(PCIDevice *d, uint8_t addr, uint16_t val);
int pci_device_get_devfn(PCIDevice *d);
int pci_add_capability(PCIDevice *d, const uint8_t *buf, int size);

typedef struct I440FXState I440FXState;

I440FXState *i440fx_init(PCIBus **pbus, int *ppiix3_devfn,
                         PhysMemoryMap *mem_map, PhysMemoryMap *port_map,
                         IRQSignal *pic_irqs);
void i440fx_map_interrupts(I440FXState *s, uint8_t *elcr,
                           const uint8_t *pci_irqs);


/*================================================================*/
#endif 
/* end of pci.h */
