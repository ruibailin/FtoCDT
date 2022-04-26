
/*------------------------------------
 * ide.h
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


#include "0ctr.h"
#ifndef NO_UTIL_IDE_H_
#define NO_UTIL_IDE_H_
/*================================================================*/
#include "../vm/virtio.h"
#include "iomem.h"
#include "pci.h"

typedef struct IDEIFState IDEIFState;

IDEIFState *ide_init(PhysMemoryMap *port_map, uint32_t addr, uint32_t addr2,
                     IRQSignal *irq, BlockDevice **tab_bs);
PCIDevice *piix3_ide_init(PCIBus *pci_bus, int devfn);


/*================================================================*/
#endif 
/* end of ide.h */
