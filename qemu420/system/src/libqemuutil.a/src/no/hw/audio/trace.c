/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace.h"

uint16_t _TRACE_CS4231_MEM_READL_DREG_DSTATE;
uint16_t _TRACE_CS4231_MEM_READL_REG_DSTATE;
uint16_t _TRACE_CS4231_MEM_WRITEL_REG_DSTATE;
uint16_t _TRACE_CS4231_MEM_WRITEL_DREG_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_MEMORY_READ_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_MEMORY_WRITE_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_IN_CB_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_OUT_CB_DSTATE;
uint16_t _TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_DSTATE;
uint16_t _TRACE_HDA_AUDIO_RUNNING_DSTATE;
uint16_t _TRACE_HDA_AUDIO_FORMAT_DSTATE;
uint16_t _TRACE_HDA_AUDIO_ADJUST_DSTATE;
uint16_t _TRACE_HDA_AUDIO_OVERRUN_DSTATE;
TraceEvent _TRACE_CS4231_MEM_READL_DREG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_readl_dreg",
    .sstate = TRACE_CS4231_MEM_READL_DREG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_READL_DREG_DSTATE 
};
TraceEvent _TRACE_CS4231_MEM_READL_REG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_readl_reg",
    .sstate = TRACE_CS4231_MEM_READL_REG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_READL_REG_DSTATE 
};
TraceEvent _TRACE_CS4231_MEM_WRITEL_REG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_writel_reg",
    .sstate = TRACE_CS4231_MEM_WRITEL_REG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_WRITEL_REG_DSTATE 
};
TraceEvent _TRACE_CS4231_MEM_WRITEL_DREG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_writel_dreg",
    .sstate = TRACE_CS4231_MEM_WRITEL_DREG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_WRITEL_DREG_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_MEMORY_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_memory_read",
    .sstate = TRACE_MILKYMIST_AC97_MEMORY_READ_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_MEMORY_READ_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_MEMORY_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_memory_write",
    .sstate = TRACE_MILKYMIST_AC97_MEMORY_WRITE_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_MEMORY_WRITE_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_pulse_irq_crrequest",
    .sstate = TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_pulse_irq_crreply",
    .sstate = TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_pulse_irq_dmaw",
    .sstate = TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_pulse_irq_dmar",
    .sstate = TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_IN_CB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_in_cb",
    .sstate = TRACE_MILKYMIST_AC97_IN_CB_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_IN_CB_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_in_cb_transferred",
    .sstate = TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_OUT_CB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_out_cb",
    .sstate = TRACE_MILKYMIST_AC97_OUT_CB_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_OUT_CB_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_ac97_out_cb_transferred",
    .sstate = TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_ENABLED,
    .dstate = &_TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_RUNNING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_running",
    .sstate = TRACE_HDA_AUDIO_RUNNING_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_RUNNING_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_FORMAT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_format",
    .sstate = TRACE_HDA_AUDIO_FORMAT_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_FORMAT_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_ADJUST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_adjust",
    .sstate = TRACE_HDA_AUDIO_ADJUST_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_ADJUST_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_OVERRUN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_overrun",
    .sstate = TRACE_HDA_AUDIO_OVERRUN_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_OVERRUN_DSTATE 
};
TraceEvent *hw_audio_trace_events[] = {
    &_TRACE_CS4231_MEM_READL_DREG_EVENT,
    &_TRACE_CS4231_MEM_READL_REG_EVENT,
    &_TRACE_CS4231_MEM_WRITEL_REG_EVENT,
    &_TRACE_CS4231_MEM_WRITEL_DREG_EVENT,
    &_TRACE_MILKYMIST_AC97_MEMORY_READ_EVENT,
    &_TRACE_MILKYMIST_AC97_MEMORY_WRITE_EVENT,
    &_TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREQUEST_EVENT,
    &_TRACE_MILKYMIST_AC97_PULSE_IRQ_CRREPLY_EVENT,
    &_TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAW_EVENT,
    &_TRACE_MILKYMIST_AC97_PULSE_IRQ_DMAR_EVENT,
    &_TRACE_MILKYMIST_AC97_IN_CB_EVENT,
    &_TRACE_MILKYMIST_AC97_IN_CB_TRANSFERRED_EVENT,
    &_TRACE_MILKYMIST_AC97_OUT_CB_EVENT,
    &_TRACE_MILKYMIST_AC97_OUT_CB_TRANSFERRED_EVENT,
    &_TRACE_HDA_AUDIO_RUNNING_EVENT,
    &_TRACE_HDA_AUDIO_FORMAT_EVENT,
    &_TRACE_HDA_AUDIO_ADJUST_EVENT,
    &_TRACE_HDA_AUDIO_OVERRUN_EVENT,
  NULL,
};

static void trace_hw_audio_register_events(void)
{
    trace_event_register_group(hw_audio_trace_events);
}
trace_init(trace_hw_audio_register_events)
