fusesoc-deps := \
  /home/steve/code/code/ibex/ibex/examples/simple_system/ibex_simple_system.core \
  /home/steve/code/code/ibex/ibex/examples/simple_system/ibex_simple_system.cc \
  /home/steve/code/code/ibex/ibex/examples/simple_system/lint/verilator_waiver.vlt \
  /home/steve/code/code/ibex/ibex/examples/simple_system/rtl/ibex_simple_system.sv \
  /home/steve/code/code/ibex/ibex/shared/sim_shared.core \
  /home/steve/code/code/ibex/ibex/shared/rtl/ram_1p.sv \
  /home/steve/code/code/ibex/ibex/shared/rtl/ram_2p.sv \
  /home/steve/code/code/ibex/ibex/shared/rtl/bus.sv \
  /home/steve/code/code/ibex/ibex/shared/rtl/sim/simulator_ctrl.sv \
  /home/steve/code/code/ibex/ibex/shared/rtl/timer.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_ram_2p.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_ram_2p-impl_0/prim_ram_2p.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_ram_2p-impl_0/prim_ram_2p.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/prim_generic_ram_2p.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/lint/prim_generic_ram_2p.vlt \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/rtl/prim_generic_ram_2p.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_util_memload.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_util_memload.svh \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/primgen.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_ram_2p_pkg.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_2p_pkg.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_pkg.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_prim_pkg-impl_0.1/prim_pkg.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_prim_pkg-impl_0.1/prim_pkg.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/lint/common.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/lint/tools/verilator/common.vlt \
  /home/steve/code/code/ibex/ibex/check_tool_requirements.core \
  /home/steve/code/code/ibex/ibex/util/check_tool_requirements.py \
  /home/steve/code/code/ibex/ibex/tool_requirements.py \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_ram_1p.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_ram_1p-impl_0/prim_ram_1p.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_ram_1p-impl_0/prim_ram_1p.sv \
  /home/steve/code/code/ibex/ibex/dv/uvm/icache/dv/prim_badbit/prim_badbit_ram_1p.core \
  /home/steve/code/code/ibex/ibex/dv/uvm/icache/dv/prim_badbit/prim_badbit_ram_1p.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/prim_generic_ram_1p.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/lint/prim_generic_ram_1p.vlt \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/rtl/prim_generic_ram_1p.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_ram_1p_pkg.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_1p_pkg.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_assert.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert_dummy_macros.svh \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert_yosys_macros.svh \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert_standard_macros.svh \
  /home/steve/code/code/ibex/ibex/ibex_core_tracing.core \
  /home/steve/code/code/ibex/ibex/rtl/ibex_core_tracing.sv \
  /home/steve/code/code/ibex/ibex/ibex_tracer.core \
  /home/steve/code/code/ibex/ibex/rtl/ibex_tracer_pkg.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_tracer.sv \
  /home/steve/code/code/ibex/ibex/ibex_pkg.core \
  /home/steve/code/code/ibex/ibex/rtl/ibex_pkg.sv \
  /home/steve/code/code/ibex/ibex/ibex_core.core \
  /home/steve/code/code/ibex/ibex/lint/verilator_waiver.vlt \
  /home/steve/code/code/ibex/ibex/rtl/ibex_alu.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_branch_predict.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_compressed_decoder.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_controller.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_cs_registers.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_csr.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_counter.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_decoder.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_ex_block.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_fetch_fifo.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_id_stage.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_if_stage.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_load_store_unit.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_multdiv_fast.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_multdiv_slow.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_prefetch_buffer.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_pmp.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_wb_stage.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_dummy_instr.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_register_file_ff.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_register_file_fpga.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_register_file_latch.sv \
  /home/steve/code/code/ibex/ibex/rtl/ibex_core.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/sv/dv_utils/dv_fcov_macros.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/sv/dv_utils/dv_fcov_macros.svh \
  /home/steve/code/code/ibex/ibex/ibex_icache.core \
  /home/steve/code/code/ibex/ibex/rtl/ibex_icache.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_secded.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_pkg.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_22_16_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_22_16_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_28_22_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_28_22_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_39_32_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_39_32_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_64_57_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_64_57_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_72_64_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_72_64_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_hamming_22_16_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_hamming_22_16_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_hamming_39_32_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_hamming_39_32_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_hamming_72_64_dec.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_hamming_72_64_enc.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_lfsr.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_lfsr.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/prim_clock_gating.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_clock_gating-impl_0/prim_clock_gating.core \
  /home/steve/code/code/ibex/ibex/build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/generated/lowrisc_prim_clock_gating-impl_0/prim_clock_gating.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/prim_generic_clock_gating.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/lint/prim_generic_clock_gating.vlt \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_generic/rtl/prim_generic_clock_gating.sv \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_xilinx/prim_xilinx_clock_gating.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_xilinx/lint/prim_xilinx_clock_gating.vlt \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim_xilinx/rtl/prim_xilinx_clock_gating.sv \
  /home/steve/code/code/ibex/ibex/dv/verilator/pcount/ibex_pcounts.core \
  /home/steve/code/code/ibex/ibex/dv/verilator/pcount/cpp/ibex_pcounts.cc \
  /home/steve/code/code/ibex/ibex/dv/verilator/pcount/cpp/ibex_pcounts.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/simutil_verilator/simutil_verilator.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/simutil_verilator/cpp/verilator_sim_ctrl.cc \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/simutil_verilator/cpp/verilated_toplevel.cc \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/simutil_verilator/cpp/verilator_sim_ctrl.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/simutil_verilator/cpp/verilated_toplevel.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/simutil_verilator/cpp/sim_ctrl_extension.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/memutil_verilator.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/cpp/verilator_memutil.cc \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/cpp/verilator_memutil.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/memutil_dpi.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/cpp/ranged_map.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/cpp/dpi_memutil.cc \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/cpp/dpi_memutil.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/cpp/sv_scoped.cc \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/dv/verilator/cpp/sv_scoped.h \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/primgen.core \
  /home/steve/code/code/ibex/ibex/vendor/lowrisc_ip/ip/prim/util/primgen.py
