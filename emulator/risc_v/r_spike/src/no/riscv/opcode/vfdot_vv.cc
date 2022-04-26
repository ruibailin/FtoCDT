// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfdot_vv(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFDOT_VV));
  #include "insns/vfdot_vv.h"
  trace_opcode(p,  MATCH_VFDOT_VV, insn);
  return npc;
}

reg_t rv64_vfdot_vv(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFDOT_VV));
  #include "insns/vfdot_vv.h"
  trace_opcode(p,  MATCH_VFDOT_VV, insn);
  return npc;
}
