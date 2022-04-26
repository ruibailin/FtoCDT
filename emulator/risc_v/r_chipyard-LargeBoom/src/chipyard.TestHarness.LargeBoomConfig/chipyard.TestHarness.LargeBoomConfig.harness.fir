circuit TestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@2.0]
  extmodule ChipTop : @[:chipyard.TestHarness.LargeBoomConfig.fir@542714.2]
    input debug_clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    output debug_clockeddmi_dmi_req_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_clockeddmi_dmi_req_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_clockeddmi_dmi_req_bits_addr : UInt<7> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_clockeddmi_dmi_req_bits_data : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_clockeddmi_dmi_req_bits_op : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_clockeddmi_dmi_resp_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    output debug_clockeddmi_dmi_resp_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    output debug_clockeddmi_dmi_resp_bits_data : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    output debug_clockeddmi_dmi_resp_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_clockeddmi_dmiClock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_clockeddmi_dmiReset : AsyncReset @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    output debug_ndreset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    output debug_dmactive : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input debug_dmactiveAck : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542716.4]
    input resetctrl_hartIsInReset_0 : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542717.4]
    output serial_in_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542719.4]
    input serial_in_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542719.4]
    input serial_in_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@542719.4]
    input serial_out_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542719.4]
    output serial_out_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542719.4]
    output serial_out_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@542719.4]
    input mem_axi4_aw_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_aw_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_w_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_w_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_w_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_w_bits_strb : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_w_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_b_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_b_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_b_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_b_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_ar_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_ar_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output mem_axi4_r_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_r_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_r_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_r_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_r_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    input mem_axi4_r_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542720.4]
    output uart_0_txd : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542721.4]
    input uart_0_rxd : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542721.4]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@542722.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@542723.4]
  
    defname = ChipTop
    

  extmodule SimSerial : @[:chipyard.TestHarness.LargeBoomConfig.fir@546295.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546296.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546297.4]
    input serial_in_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546298.4]
    output serial_in_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546298.4]
    output serial_in_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@546298.4]
    output serial_out_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546298.4]
    input serial_out_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546298.4]
    input serial_out_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@546298.4]
    output exit : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546299.4]
  
    defname = SimSerial
    

  extmodule SimDRAM_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@546304.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546305.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546306.4]
    output axi_aw_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_aw_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_w_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_w_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_w_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_w_bits_strb : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_w_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_b_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_b_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_b_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_b_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_ar_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_ar_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    input axi_r_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_r_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_r_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_r_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_r_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
    output axi_r_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546307.4]
  
    defname = SimDRAM
    parameter LINE_SIZE = 64
    parameter ID_BITS = 4
    parameter ADDR_BITS = 32
    parameter MEM_SIZE = 268435456
    parameter DATA_BITS = 64

  module Queue_40_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@546316.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546317.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546318.4]
    output io_enq_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546319.4]
    input io_enq_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546319.4]
    input io_enq_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@546319.4]
    input io_deq_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546319.4]
    output io_deq_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546319.4]
    output io_deq_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@546319.4]
  
    mem ram : @[Decoupled.scala 209:16:chipyard.TestHarness.LargeBoomConfig.fir@546321.4]
      data-type => UInt<8>
      depth => 128
      read-latency => 0
      write-latency => 1
      reader => _T_11
      writer => _T_3
      read-under-write => undefined
    reg enq_ptr_value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), enq_ptr_value) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomConfig.fir@546322.4]
    reg deq_ptr_value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), deq_ptr_value) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomConfig.fir@546323.4]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 212:27:chipyard.TestHarness.LargeBoomConfig.fir@546324.4]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 214:33:chipyard.TestHarness.LargeBoomConfig.fir@546325.4]
    node _T = not(maybe_full) @[Decoupled.scala 215:28:chipyard.TestHarness.LargeBoomConfig.fir@546326.4]
    node empty = and(ptr_match, _T) @[Decoupled.scala 215:25:chipyard.TestHarness.LargeBoomConfig.fir@546327.4]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 216:24:chipyard.TestHarness.LargeBoomConfig.fir@546328.4]
    node do_enq = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:chipyard.TestHarness.LargeBoomConfig.fir@546329.4]
    node do_deq = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:chipyard.TestHarness.LargeBoomConfig.fir@546332.4]
    skip
    node _T_4 = add(enq_ptr_value, UInt<7>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546339.6]
    node _T_5 = tail(_T_4, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546340.6]
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_5 = mux(do_enq, _T_5, enq_ptr_value) @[Decoupled.scala 220:17:chipyard.TestHarness.LargeBoomConfig.fir@546335.4]
    skip
    node _T_6 = add(deq_ptr_value, UInt<7>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546345.6]
    node _T_7 = tail(_T_6, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546346.6]
    skip
    node _GEN_6 = mux(do_deq, _T_7, deq_ptr_value) @[Decoupled.scala 224:17:chipyard.TestHarness.LargeBoomConfig.fir@546343.4]
    node _T_8 = neq(do_enq, do_deq) @[Decoupled.scala 227:16:chipyard.TestHarness.LargeBoomConfig.fir@546349.4]
    node _GEN_7 = mux(_T_8, do_enq, maybe_full) @[Decoupled.scala 227:28:chipyard.TestHarness.LargeBoomConfig.fir@546350.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= not(full) @[Decoupled.scala 232:16:chipyard.TestHarness.LargeBoomConfig.fir@546356.4]
    io_deq_valid <= not(empty) @[Decoupled.scala 231:16:chipyard.TestHarness.LargeBoomConfig.fir@546354.4]
    io_deq_bits <= ram._T_11.data @[Decoupled.scala 233:15:chipyard.TestHarness.LargeBoomConfig.fir@546358.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    enq_ptr_value <= mux(reset, UInt<7>("h0"), _GEN_5) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomConfig.fir@546341.6]
    deq_ptr_value <= mux(reset, UInt<7>("h0"), _GEN_6) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomConfig.fir@546347.6]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_7) @[Decoupled.scala 228:16:chipyard.TestHarness.LargeBoomConfig.fir@546351.6]
    ram._T_11.en <= UInt<1>("h1")
    ram._T_11.addr <= deq_ptr_value
    ram._T_11.clk <= clock
    ram._T_3.en <= and(io_enq_ready, io_enq_valid)
    ram._T_3.addr <= enq_ptr_value
    ram._T_3.mask <= UInt<1>("h1")
    ram._T_3.data <= io_enq_bits
    ram._T_3.clk <= clock

  extmodule SimUART_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@546416.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546417.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546418.4]
    input serial_in_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546419.4]
    output serial_in_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546419.4]
    output serial_in_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@546419.4]
    output serial_out_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546419.4]
    input serial_out_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546419.4]
    input serial_out_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomConfig.fir@546419.4]
  
    defname = SimUART
    parameter UARTNO = 0

  module UARTAdapter_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@546424.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546425.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546426.4]
    input io_uart_txd : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546427.4]
    output io_uart_rxd : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546427.4]
  
    inst txfifo of Queue_40_inTestHarness @[UARTAdapter.scala 32:22:chipyard.TestHarness.LargeBoomConfig.fir@546429.4]
    inst rxfifo of Queue_40_inTestHarness @[UARTAdapter.scala 33:22:chipyard.TestHarness.LargeBoomConfig.fir@546432.4]
    inst sim of SimUART_inTestHarness @[UARTAdapter.scala 108:19:chipyard.TestHarness.LargeBoomConfig.fir@546581.4]
    reg txState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txState) @[UARTAdapter.scala 38:24:chipyard.TestHarness.LargeBoomConfig.fir@546435.4]
    reg txData : UInt<8>, clock with :
      reset => (UInt<1>("h0"), txData) @[UARTAdapter.scala 39:19:chipyard.TestHarness.LargeBoomConfig.fir@546436.4]
    node _T = eq(txState, UInt<2>("h2")) @[UARTAdapter.scala 41:49:chipyard.TestHarness.LargeBoomConfig.fir@546437.4]
    node _T_1 = and(_T, txfifo.io_enq_ready) @[UARTAdapter.scala 41:61:chipyard.TestHarness.LargeBoomConfig.fir@546438.4]
    reg txDataIdx : UInt<3>, clock with :
      reset => (UInt<1>("h0"), txDataIdx) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomConfig.fir@546439.4]
    node _T_2 = eq(txDataIdx, UInt<3>("h7")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomConfig.fir@546443.6]
    node _T_3 = add(txDataIdx, UInt<3>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546444.6]
    node _T_4 = tail(_T_3, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546445.6]
    node _GEN_0 = mux(_T_1, _T_4, txDataIdx) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546442.4]
    node txDataWrap = and(_T_1, _T_2) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546442.4]
    node _T_5 = eq(txState, UInt<2>("h1")) @[UARTAdapter.scala 43:51:chipyard.TestHarness.LargeBoomConfig.fir@546449.4]
    node _T_6 = and(_T_5, txfifo.io_enq_ready) @[UARTAdapter.scala 43:63:chipyard.TestHarness.LargeBoomConfig.fir@546450.4]
    reg txBaudCount : UInt<10>, clock with :
      reset => (UInt<1>("h0"), txBaudCount) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomConfig.fir@546451.4]
    node _T_7 = eq(txBaudCount, UInt<10>("h363")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomConfig.fir@546455.6]
    node _T_8 = add(txBaudCount, UInt<10>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546456.6]
    node _T_9 = tail(_T_8, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546457.6]
    node _GEN_2 = mux(_T_7, UInt<10>("h0"), _T_9) @[Counter.scala 41:21:chipyard.TestHarness.LargeBoomConfig.fir@546459.6]
    node _GEN_3 = mux(_T_6, _GEN_2, txBaudCount) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546454.4]
    node txBaudWrap = and(_T_6, _T_7) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546454.4]
    node _T_10 = eq(txState, UInt<2>("h0")) @[UARTAdapter.scala 44:53:chipyard.TestHarness.LargeBoomConfig.fir@546464.4]
    node _T_11 = not(io_uart_txd) @[UARTAdapter.scala 44:80:chipyard.TestHarness.LargeBoomConfig.fir@546465.4]
    node _T_12 = and(_T_10, _T_11) @[UARTAdapter.scala 44:65:chipyard.TestHarness.LargeBoomConfig.fir@546466.4]
    node _T_13 = and(_T_12, txfifo.io_enq_ready) @[UARTAdapter.scala 44:88:chipyard.TestHarness.LargeBoomConfig.fir@546467.4]
    reg txSlackCount : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txSlackCount) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomConfig.fir@546468.4]
    node _T_14 = eq(txSlackCount, UInt<2>("h3")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomConfig.fir@546472.6]
    node _T_15 = add(txSlackCount, UInt<2>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546473.6]
    node _T_16 = tail(_T_15, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546474.6]
    node _GEN_5 = mux(_T_13, _T_16, txSlackCount) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546471.4]
    node txSlackWrap = and(_T_13, _T_14) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546471.4]
    node _T_17 = eq(UInt<2>("h0"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomConfig.fir@546478.4]
    skip
    node _GEN_7 = mux(txSlackWrap, UInt<8>("h0"), txData) @[UARTAdapter.scala 48:25:chipyard.TestHarness.LargeBoomConfig.fir@546480.6]
    node _GEN_8 = mux(txSlackWrap, UInt<2>("h1"), txState) @[UARTAdapter.scala 48:25:chipyard.TestHarness.LargeBoomConfig.fir@546480.6]
    node _T_18 = eq(UInt<2>("h1"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomConfig.fir@546486.6]
    skip
    node _GEN_9 = mux(txBaudWrap, UInt<2>("h2"), txState) @[UARTAdapter.scala 54:24:chipyard.TestHarness.LargeBoomConfig.fir@546488.8]
    node _T_19 = eq(UInt<2>("h2"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomConfig.fir@546493.8]
    node _GEN_35 = pad(io_uart_txd, 8) @[UARTAdapter.scala 60:41:chipyard.TestHarness.LargeBoomConfig.fir@546496.12]
    node _T_20 = dshlw(_GEN_35, txDataIdx) @[UARTAdapter.scala 60:41:chipyard.TestHarness.LargeBoomConfig.fir@546496.12]
    node _T_21 = or(txData, _T_20) @[UARTAdapter.scala 60:26:chipyard.TestHarness.LargeBoomConfig.fir@546497.12]
    node _GEN_10 = mux(txfifo.io_enq_ready, _T_21, txData) @[UARTAdapter.scala 59:34:chipyard.TestHarness.LargeBoomConfig.fir@546495.10]
    skip
    node _T_23 = mux(io_uart_txd, UInt<2>("h0"), UInt<2>("h3")) @[UARTAdapter.scala 63:23:chipyard.TestHarness.LargeBoomConfig.fir@546502.12]
    node _GEN_11 = mux(txfifo.io_enq_ready, UInt<2>("h1"), txState) @[UARTAdapter.scala 64:39:chipyard.TestHarness.LargeBoomConfig.fir@546506.12]
    skip
    node _GEN_12 = mux(txDataWrap, _T_23, _GEN_11) @[UARTAdapter.scala 62:24:chipyard.TestHarness.LargeBoomConfig.fir@546500.10]
    node _T_24 = eq(UInt<2>("h3"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomConfig.fir@546511.10]
    skip
    node _T_26 = and(io_uart_txd, txfifo.io_enq_ready) @[UARTAdapter.scala 69:32:chipyard.TestHarness.LargeBoomConfig.fir@546514.12]
    node _GEN_13 = mux(_T_26, UInt<2>("h0"), txState) @[UARTAdapter.scala 69:56:chipyard.TestHarness.LargeBoomConfig.fir@546515.12]
    node _GEN_14 = mux(_T_24, _GEN_13, txState) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546512.10]
    node _GEN_15 = mux(_T_19, _GEN_10, txData) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546494.8]
    node _GEN_16 = mux(_T_19, _GEN_12, _GEN_14) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546494.8]
    node _GEN_17 = mux(_T_18, _GEN_9, _GEN_16) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546487.6]
    node _GEN_18 = mux(_T_18, txData, _GEN_15) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546487.6]
    skip
    node _GEN_20 = mux(_T_17, _GEN_8, _GEN_17) @[Conditional.scala 40:58:chipyard.TestHarness.LargeBoomConfig.fir@546479.4]
    reg rxState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), rxState) @[UARTAdapter.scala 79:24:chipyard.TestHarness.LargeBoomConfig.fir@546521.4]
    reg rxBaudCount : UInt<10>, clock with :
      reset => (UInt<1>("h0"), rxBaudCount) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomConfig.fir@546522.4]
    node _T_27 = eq(rxBaudCount, UInt<10>("h363")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomConfig.fir@546526.6]
    node _T_28 = add(rxBaudCount, UInt<10>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546527.6]
    node _T_29 = tail(_T_28, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546528.6]
    node _GEN_21 = mux(_T_27, UInt<10>("h0"), _T_29) @[Counter.scala 41:21:chipyard.TestHarness.LargeBoomConfig.fir@546530.6]
    node _GEN_22 = mux(txfifo.io_enq_ready, _GEN_21, rxBaudCount) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546525.4]
    node rxBaudWrap = and(txfifo.io_enq_ready, _T_27) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546525.4]
    node _T_30 = eq(rxState, UInt<2>("h2")) @[UARTAdapter.scala 83:49:chipyard.TestHarness.LargeBoomConfig.fir@546535.4]
    node _T_31 = and(_T_30, txfifo.io_enq_ready) @[UARTAdapter.scala 83:61:chipyard.TestHarness.LargeBoomConfig.fir@546536.4]
    skip
    node _T_32 = and(_T_31, rxBaudWrap) @[UARTAdapter.scala 83:84:chipyard.TestHarness.LargeBoomConfig.fir@546537.4]
    reg rxDataIdx : UInt<3>, clock with :
      reset => (UInt<1>("h0"), rxDataIdx) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomConfig.fir@546538.4]
    node _T_33 = eq(rxDataIdx, UInt<3>("h7")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomConfig.fir@546542.6]
    node _T_34 = add(rxDataIdx, UInt<3>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546543.6]
    node _T_35 = tail(_T_34, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomConfig.fir@546544.6]
    node _GEN_24 = mux(_T_32, _T_35, rxDataIdx) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546541.4]
    node rxDataWrap = and(_T_32, _T_33) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomConfig.fir@546541.4]
    node _T_36 = eq(UInt<2>("h0"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomConfig.fir@546549.4]
    node _T_37 = and(rxBaudWrap, rxfifo.io_deq_valid) @[UARTAdapter.scala 89:24:chipyard.TestHarness.LargeBoomConfig.fir@546552.6]
    node _GEN_26 = mux(_T_37, UInt<2>("h1"), rxState) @[UARTAdapter.scala 89:48:chipyard.TestHarness.LargeBoomConfig.fir@546553.6]
    node _T_38 = eq(UInt<2>("h1"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomConfig.fir@546558.6]
    node _GEN_27 = mux(rxBaudWrap, UInt<2>("h2"), rxState) @[UARTAdapter.scala 95:24:chipyard.TestHarness.LargeBoomConfig.fir@546561.8]
    node _T_39 = eq(UInt<2>("h2"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomConfig.fir@546566.8]
    node _T_40 = dshr(rxfifo.io_deq_bits, rxDataIdx) @[UARTAdapter.scala 100:42:chipyard.TestHarness.LargeBoomConfig.fir@546568.10]
    node _T_41 = bits(_T_40, 0, 0) @[UARTAdapter.scala 100:55:chipyard.TestHarness.LargeBoomConfig.fir@546569.10]
    skip
    node _T_42 = and(rxDataWrap, rxBaudWrap) @[UARTAdapter.scala 101:23:chipyard.TestHarness.LargeBoomConfig.fir@546571.10]
    node _GEN_28 = mux(_T_42, UInt<2>("h0"), rxState) @[UARTAdapter.scala 101:38:chipyard.TestHarness.LargeBoomConfig.fir@546572.10]
    node _GEN_29 = mux(_T_39, _T_41, UInt<1>("h1")) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546567.8]
    node _GEN_30 = mux(_T_39, _GEN_28, rxState) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546567.8]
    node _GEN_31 = mux(_T_38, UInt<1>("h0"), _GEN_29) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546559.6]
    node _GEN_32 = mux(_T_38, _GEN_27, _GEN_30) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomConfig.fir@546559.6]
    skip
    node _GEN_34 = mux(_T_36, _GEN_26, _GEN_32) @[Conditional.scala 40:58:chipyard.TestHarness.LargeBoomConfig.fir@546550.4]
    skip
    node _T_44 = and(_T_30, rxDataWrap) @[UARTAdapter.scala 106:48:chipyard.TestHarness.LargeBoomConfig.fir@546577.4]
    node _T_45 = and(_T_44, rxBaudWrap) @[UARTAdapter.scala 106:62:chipyard.TestHarness.LargeBoomConfig.fir@546578.4]
    skip
    skip
    io_uart_rxd <= or(_T_36, _GEN_31) @[UARTAdapter.scala 85:15:chipyard.TestHarness.LargeBoomConfig.fir@546548.4 UARTAdapter.scala 88:19:chipyard.TestHarness.LargeBoomConfig.fir@546551.6 UARTAdapter.scala 94:19:chipyard.TestHarness.LargeBoomConfig.fir@546560.8 UARTAdapter.scala 100:19:chipyard.TestHarness.LargeBoomConfig.fir@546570.10]
    txfifo.clock <= clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546430.4]
    txfifo.reset <= reset @[:chipyard.TestHarness.LargeBoomConfig.fir@546431.4]
    txfifo.io_enq_valid <= and(_T_1, _T_2) @[UARTAdapter.scala 76:23:chipyard.TestHarness.LargeBoomConfig.fir@546520.4]
    txfifo.io_enq_bits <= txData @[UARTAdapter.scala 75:23:chipyard.TestHarness.LargeBoomConfig.fir@546519.4]
    txfifo.io_deq_ready <= sim.serial_out_ready @[UARTAdapter.scala 115:23:chipyard.TestHarness.LargeBoomConfig.fir@546590.4]
    rxfifo.clock <= clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546433.4]
    rxfifo.reset <= reset @[:chipyard.TestHarness.LargeBoomConfig.fir@546434.4]
    rxfifo.io_enq_valid <= sim.serial_in_valid @[UARTAdapter.scala 118:23:chipyard.TestHarness.LargeBoomConfig.fir@546592.4]
    rxfifo.io_enq_bits <= sim.serial_in_bits @[UARTAdapter.scala 117:22:chipyard.TestHarness.LargeBoomConfig.fir@546591.4]
    rxfifo.io_deq_ready <= and(_T_45, txfifo.io_enq_ready) @[UARTAdapter.scala 106:23:chipyard.TestHarness.LargeBoomConfig.fir@546580.4]
    txState <= mux(reset, UInt<2>("h0"), _GEN_20) @[UARTAdapter.scala 50:17:chipyard.TestHarness.LargeBoomConfig.fir@546482.8 UARTAdapter.scala 55:17:chipyard.TestHarness.LargeBoomConfig.fir@546489.10 UARTAdapter.scala 63:17:chipyard.TestHarness.LargeBoomConfig.fir@546503.12 UARTAdapter.scala 65:17:chipyard.TestHarness.LargeBoomConfig.fir@546507.14 UARTAdapter.scala 70:17:chipyard.TestHarness.LargeBoomConfig.fir@546516.14]
    txData <= mux(_T_17, _GEN_7, _GEN_18) @[UARTAdapter.scala 49:17:chipyard.TestHarness.LargeBoomConfig.fir@546481.8 UARTAdapter.scala 60:16:chipyard.TestHarness.LargeBoomConfig.fir@546498.12]
    txDataIdx <= mux(reset, UInt<3>("h0"), _GEN_0) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomConfig.fir@546446.6]
    txBaudCount <= mux(reset, UInt<10>("h0"), _GEN_3) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomConfig.fir@546458.6 Counter.scala 41:29:chipyard.TestHarness.LargeBoomConfig.fir@546460.8]
    txSlackCount <= mux(reset, UInt<2>("h0"), _GEN_5) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomConfig.fir@546475.6]
    rxState <= mux(reset, UInt<2>("h0"), _GEN_34) @[UARTAdapter.scala 90:17:chipyard.TestHarness.LargeBoomConfig.fir@546554.8 UARTAdapter.scala 96:17:chipyard.TestHarness.LargeBoomConfig.fir@546562.10 UARTAdapter.scala 102:17:chipyard.TestHarness.LargeBoomConfig.fir@546573.12]
    rxBaudCount <= mux(reset, UInt<10>("h0"), _GEN_22) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomConfig.fir@546529.6 Counter.scala 41:29:chipyard.TestHarness.LargeBoomConfig.fir@546531.8]
    rxDataIdx <= mux(reset, UInt<3>("h0"), _GEN_24) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomConfig.fir@546545.6]
    sim.clock <= clock @[UARTAdapter.scala 110:16:chipyard.TestHarness.LargeBoomConfig.fir@546585.4]
    sim.reset <= reset @[UARTAdapter.scala 111:16:chipyard.TestHarness.LargeBoomConfig.fir@546587.4]
    sim.serial_in_ready <= rxfifo.io_enq_ready @[UARTAdapter.scala 119:26:chipyard.TestHarness.LargeBoomConfig.fir@546593.4]
    sim.serial_out_valid <= txfifo.io_deq_valid @[UARTAdapter.scala 114:27:chipyard.TestHarness.LargeBoomConfig.fir@546589.4]
    sim.serial_out_bits <= txfifo.io_deq_bits @[UARTAdapter.scala 113:26:chipyard.TestHarness.LargeBoomConfig.fir@546588.4]

  module TestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@546595.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546596.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546597.4]
    output io_success : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@546598.4]
  
    inst dut of ChipTop @[TestHarness.scala 14:100:chipyard.TestHarness.LargeBoomConfig.fir@546600.4]
    inst SimSerial of SimSerial @[SerialAdapter.scala 17:23:chipyard.TestHarness.LargeBoomConfig.fir@546622.4]
    inst SimDRAM of SimDRAM_inTestHarness @[IOBinders.scala 288:25:chipyard.TestHarness.LargeBoomConfig.fir@546638.4]
    inst uart_sim_0 of UARTAdapter_inTestHarness @[UARTAdapter.scala 132:28:chipyard.TestHarness.LargeBoomConfig.fir@546645.4]
    skip
    skip
    skip
    skip
    skip
    skip
    io_success <= SimSerial.exit @[TestHarness.scala 26:14:chipyard.TestHarness.LargeBoomConfig.fir@546601.4 IOBinders.scala 384:39:chipyard.TestHarness.LargeBoomConfig.fir@546636.6]
    dut.debug_clock <= clock @[Periphery.scala 308:19:chipyard.TestHarness.LargeBoomConfig.fir@546606.4 IOBinders.scala 345:17:chipyard.TestHarness.LargeBoomConfig.fir@546619.4]
    dut.debug_reset <= UInt<1>("h1") @[Periphery.scala 309:19:chipyard.TestHarness.LargeBoomConfig.fir@546607.4]
    dut.debug_clockeddmi_dmi_req_valid <= UInt<1>("h0") @[Periphery.scala 323:25:chipyard.TestHarness.LargeBoomConfig.fir@546608.4]
    dut.debug_clockeddmi_dmi_req_bits_addr <= UInt<7>("h0")
    dut.debug_clockeddmi_dmi_req_bits_data <= UInt<32>("h0")
    dut.debug_clockeddmi_dmi_req_bits_op <= UInt<2>("h0")
    dut.debug_clockeddmi_dmi_resp_ready <= UInt<1>("h1") @[Periphery.scala 324:26:chipyard.TestHarness.LargeBoomConfig.fir@546609.4]
    dut.debug_clockeddmi_dmiClock <= clock @[Periphery.scala 325:20:chipyard.TestHarness.LargeBoomConfig.fir@546611.4 IOBinders.scala 343:85:chipyard.TestHarness.LargeBoomConfig.fir@546617.4]
    dut.debug_clockeddmi_dmiReset <= asAsyncReset(UInt<1>("h1")) @[Periphery.scala 326:20:chipyard.TestHarness.LargeBoomConfig.fir@546613.4]
    dut.debug_dmactiveAck <= UInt<1>("h0")
    dut.resetctrl_hartIsInReset_0 <= UInt<1>("h0") @[Periphery.scala 306:59:chipyard.TestHarness.LargeBoomConfig.fir@546604.4]
    dut.serial_in_valid <= SimSerial.serial_in_valid @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomConfig.fir@546633.4]
    dut.serial_in_bits <= SimSerial.serial_in_bits @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomConfig.fir@546632.4]
    dut.serial_out_ready <= SimSerial.serial_out_ready @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomConfig.fir@546631.4]
    dut.mem_axi4_aw_ready <= SimDRAM.axi_aw_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_w_ready <= SimDRAM.axi_w_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_b_valid <= SimDRAM.axi_b_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_b_bits_id <= SimDRAM.axi_b_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_b_bits_resp <= SimDRAM.axi_b_bits_resp @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_ar_ready <= SimDRAM.axi_ar_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_r_valid <= SimDRAM.axi_r_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_r_bits_id <= SimDRAM.axi_r_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_r_bits_data <= SimDRAM.axi_r_bits_data @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_r_bits_resp <= SimDRAM.axi_r_bits_resp @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.mem_axi4_r_bits_last <= SimDRAM.axi_r_bits_last @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    dut.uart_0_rxd <= uart_sim_0.io_uart_rxd @[UARTAdapter.scala 135:18:chipyard.TestHarness.LargeBoomConfig.fir@546649.4]
    dut.clock <= clock @[ChipTop.scala 111:11:chipyard.TestHarness.LargeBoomConfig.fir@546650.4]
    dut.reset <= reset @[ChipTop.scala 114:11:chipyard.TestHarness.LargeBoomConfig.fir@546651.4]
    SimSerial.clock <= clock @[SerialAdapter.scala 18:20:chipyard.TestHarness.LargeBoomConfig.fir@546627.4]
    SimSerial.reset <= reset @[SerialAdapter.scala 19:20:chipyard.TestHarness.LargeBoomConfig.fir@546628.4]
    SimSerial.serial_in_ready <= dut.serial_in_ready @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomConfig.fir@546634.4]
    SimSerial.serial_out_valid <= dut.serial_out_valid @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomConfig.fir@546630.4]
    SimSerial.serial_out_bits <= dut.serial_out_bits @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomConfig.fir@546629.4]
    SimDRAM.clock <= clock @[IOBinders.scala 290:22:chipyard.TestHarness.LargeBoomConfig.fir@546643.4]
    SimDRAM.reset <= reset @[IOBinders.scala 291:22:chipyard.TestHarness.LargeBoomConfig.fir@546644.4]
    SimDRAM.axi_aw_valid <= dut.mem_axi4_aw_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_id <= dut.mem_axi4_aw_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_addr <= dut.mem_axi4_aw_bits_addr @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_len <= dut.mem_axi4_aw_bits_len @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_size <= dut.mem_axi4_aw_bits_size @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_burst <= dut.mem_axi4_aw_bits_burst @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_lock <= dut.mem_axi4_aw_bits_lock @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_cache <= dut.mem_axi4_aw_bits_cache @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_prot <= dut.mem_axi4_aw_bits_prot @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_aw_bits_qos <= dut.mem_axi4_aw_bits_qos @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_w_valid <= dut.mem_axi4_w_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_w_bits_data <= dut.mem_axi4_w_bits_data @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_w_bits_strb <= dut.mem_axi4_w_bits_strb @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_w_bits_last <= dut.mem_axi4_w_bits_last @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_b_ready <= dut.mem_axi4_b_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_valid <= dut.mem_axi4_ar_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_id <= dut.mem_axi4_ar_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_addr <= dut.mem_axi4_ar_bits_addr @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_len <= dut.mem_axi4_ar_bits_len @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_size <= dut.mem_axi4_ar_bits_size @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_burst <= dut.mem_axi4_ar_bits_burst @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_lock <= dut.mem_axi4_ar_bits_lock @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_cache <= dut.mem_axi4_ar_bits_cache @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_prot <= dut.mem_axi4_ar_bits_prot @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_ar_bits_qos <= dut.mem_axi4_ar_bits_qos @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    SimDRAM.axi_r_ready <= dut.mem_axi4_r_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomConfig.fir@546642.4]
    uart_sim_0.clock <= clock @[:chipyard.TestHarness.LargeBoomConfig.fir@546646.4]
    uart_sim_0.reset <= reset @[:chipyard.TestHarness.LargeBoomConfig.fir@546647.4]
    uart_sim_0.io_uart_txd <= dut.uart_0_txd @[UARTAdapter.scala 134:28:chipyard.TestHarness.LargeBoomConfig.fir@546648.4]

  extmodule plusarg_reader_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@122.2]
    output out : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@123.4]
  
    defname = plusarg_reader
    parameter FORMAT = "tilelink_timeout=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  extmodule plusarg_reader_63_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@537525.2]
    output out : UInt<32> @[:chipyard.TestHarness.LargeBoomConfig.fir@537526.4]
  
    defname = plusarg_reader
    parameter FORMAT = "uart_tx=%d"
    parameter DEFAULT = 1
    parameter WIDTH = 32

  extmodule GenericDigitalInIOCell_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@539186.2]
    input pad : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@539187.4]
    output i : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@539188.4]
    input ie : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@539189.4]
  
    defname = GenericDigitalInIOCell
    

  extmodule GenericDigitalOutIOCell_inTestHarness : @[:chipyard.TestHarness.LargeBoomConfig.fir@539194.2]
    output pad : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@539195.4]
    input o : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@539196.4]
    input oe : UInt<1> @[:chipyard.TestHarness.LargeBoomConfig.fir@539197.4]
  
    defname = GenericDigitalOutIOCell
    

  extmodule cc_dir_ext_inTestHarness :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_wmask : UInt<8>
  
    defname = cc_dir_ext
    

  extmodule cc_banks_0_ext_inTestHarness :
    input RW0_addr : UInt<13>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
  
    defname = cc_banks_0_ext
    

  extmodule tag_array_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<176>
    output RW0_rdata : UInt<176>
    input RW0_wmask : UInt<8>
  
    defname = tag_array_ext
    

  extmodule array_0_0_ext_inTestHarness :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<128>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<128>
    input W0_mask : UInt<2>
  
    defname = array_0_0_ext
    

  extmodule tag_array_0_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<160>
    output RW0_rdata : UInt<160>
    input RW0_wmask : UInt<8>
  
    defname = tag_array_0_ext
    

  extmodule dataArrayB0Way_0_ext_inTestHarness :
    input RW0_addr : UInt<8>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
  
    defname = dataArrayB0Way_0_ext
    

  extmodule hi_us_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_mask : UInt<4>
  
    defname = hi_us_ext
    

  extmodule table_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<44>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<44>
    input W0_mask : UInt<4>
  
    defname = table_ext
    

  extmodule hi_us_0_ext_inTestHarness :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_mask : UInt<4>
  
    defname = hi_us_0_ext
    

  extmodule table_0_ext_inTestHarness :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<48>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<48>
    input W0_mask : UInt<4>
  
    defname = table_0_ext
    

  extmodule table_1_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<52>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<52>
    input W0_mask : UInt<4>
  
    defname = table_1_ext
    

  extmodule meta_0_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<120>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<120>
    input W0_mask : UInt<4>
  
    defname = meta_0_ext
    

  extmodule btb_0_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<56>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<56>
    input W0_mask : UInt<4>
  
    defname = btb_0_ext
    

  extmodule ebtb_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<40>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<40>
  
    defname = ebtb_ext
    

  extmodule data_ext_inTestHarness :
    input R0_addr : UInt<11>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<8>
    input W0_addr : UInt<11>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<8>
    input W0_mask : UInt<4>
  
    defname = data_ext
    

  extmodule meta_ext_inTestHarness :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<240>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<240>
  
    defname = meta_ext
    

  extmodule ghist_0_ext_inTestHarness :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<72>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<72>
  
    defname = ghist_0_ext
    

  extmodule rob_debug_inst_mem_ext_inTestHarness :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<96>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<96>
    input W0_mask : UInt<3>
  
    defname = rob_debug_inst_mem_ext
    

  extmodule l2_tlb_ram_ext_inTestHarness :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<44>
    output RW0_rdata : UInt<44>
  
    defname = l2_tlb_ram_ext
    
