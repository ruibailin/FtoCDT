// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sh1add(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SH1ADD));
  #include "insns/sh1add.h"
  trace_opcode(p,  MATCH_SH1ADD, insn);
  return npc;
}

reg_t rv64_sh1add(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SH1ADD));
  #include "insns/sh1add.h"
  trace_opcode(p,  MATCH_SH1ADD, insn);
  return npc;
}
