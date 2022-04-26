// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "verilated_toplevel.h"

ibex_simple_system &VerilatedToplevel::dut() {
  // The static_cast below is generally unsafe, but we know the types involved.
  // It's safe for these.
  ibex_simple_system &dut = static_cast<ibex_simple_system &>(*this);
  return dut;
}
