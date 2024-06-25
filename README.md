
# DigitalClock
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">

<html xmlns="http://www.w3.org/1999/xhtml">
 <head>
  <title>datasheet for digiClk</title>
  <style type="text/css">
body { font-family:arial ;}
a { text-decoration:underline ; color:#003000 ;}
a:hover { text-decoration:underline ; color:0030f0 ;}
td { padding : 5px ;}
table.topTitle { width:100% ;}
table.topTitle td.l { text-align:left ; font-weight: bold ; font-size:30px ;}
table.topTitle td.r { text-align:right ; font-weight: bold ; font-size:16px ;}
table.blueBar { width : 100% ; border-spacing : 0px ;}
table.blueBar td { background:#0036ff ; font-size:12px ; color : white ; text-align : left ; font-weight : bold ;}
table.blueBar td.l { text-align : left ;}
table.blueBar td.r { text-align : right ;}
table.items { width:100% ; border-collapse:collapse ;}
table.items td.label { font-weight:bold ; font-size:16px ; vertical-align:top ;}
table.items td.mono { font-family:courier ; font-size:12px ; white-space:pre ;}
div.label { font-weight:bold ; font-size:16px ; vertical-align:top ; text-align:center ;}
table.grid { border-collapse:collapse ;}
table.grid td { border:1px solid #bbb ; font-size:12px ;}
body { font-family:arial ;}
table.x { font-family:courier ; border-collapse:collapse ; padding:2px ;}
table.x td { border:1px solid #bbb ;}
td.tableTitle { font-weight:bold ; text-align:center ;}
table.grid { border-collapse:collapse ;}
table.grid td { border:1px solid #bbb ;}
table.grid td.tableTitle { font-weight:bold ; text-align:center ;}
table.mmap { border-collapse:collapse ; text-size:11px ; border:1px solid #d8d8d8 ;}
table.mmap td { border-color:#d8d8d8 ; border-width:1px ; border-style:solid ;}
table.mmap td.empty { border-style:none ; background-color:#f0f0f0 ;}
table.mmap td.slavemodule { text-align:left ; font-size:11px ; border-style:solid solid none solid ;}
table.mmap td.slavem { text-align:right ; font-size:9px ; font-style:italic ; border-style:none solid none solid ;}
table.mmap td.slaveb { text-align:right ; font-size:9px ; font-style:italic ; border-style:none solid solid solid ;}
table.mmap td.mastermodule { text-align:center ; font-size:11px ; border-style:solid solid none solid ;}
table.mmap td.masterlr { text-align:center ; font-size:9px ; font-style:italic ; border-style:none solid solid solid ;}
table.mmap td.masterl { text-align:center ; font-size:9px ; font-style:italic ; border-style:none none solid solid ;}
table.mmap td.masterm { text-align:center ; font-size:9px ; font-style:italic ; border-style:none none solid none ;}
table.mmap td.masterr { text-align:center ; font-size:9px ; font-style:italic ; border-style:none solid solid none ;}
table.mmap td.addr { font-family:courier ; font-size:9px ; text-align:right ;}
table.connectionboxes { border-collapse:separate ; border-spacing:0px ; font-family:arial ;}
table.connectionboxes td.from { border-bottom:1px solid black ; font-size:9px ; font-style:italic ; vertical-align:bottom ; text-align:left ;}
table.connectionboxes td.to { font-size:9px ; font-style:italic ; vertical-align:top ; text-align:right ;}
table.connectionboxes td.lefthandwire { border-bottom:1px solid black ; font-size:9px ; font-style:italic ; vertical-align:bottom ; text-align:right ;}
table.connectionboxes td.righthandwire { border-bottom:1px solid black ; font-size:9px ; font-style:italic ; vertical-align:bottom ; text-align:left ;}
table.connectionboxes td.righthandlabel { font-size:11px ; vertical-align:bottom ; text-align:left ;}
table.connectionboxes td.neighbor { padding:3px ; border:1px solid black ; font-size: 11px ; background:#e8e8e8 ; vertical-align:center ; text-align:center ;}
table.connectionboxes td.main { padding:8px ; border:1px solid black ; font-size: 14px ; font-weight:bold ; background:#ffffff ; vertical-align:center ; text-align:center ;}
.parametersbox { border:1px solid #d0d0d0 ; display:inline-block ; max-height:160px ; overflow:auto ; width:360px ; font-size:10px ;}
.flowbox { display:inline-block ;}
.parametersbox table { font-size:10px ;}
td.parametername { font-style:italic ;}
td.parametervalue { font-weight:bold ;}
div.greydiv { vertical-align:top ; text-align:center ; background:#eeeeee ; border-top:1px solid #707070 ; border-bottom:1px solid #707070 ; padding:20px ; margin:20px ; width:auto ;}</style>
 </head>
 <body>
  <table class="topTitle">
   <tr>
    <td class="l">digiClk</td>
    <td class="r">
     <br/>
     <br/>
    </td>
   </tr>
  </table>
  <table class="blueBar">
   <tr>
    <td class="l">2023.10.28.15:55:01</td>
    <td class="r">Datasheet</td>
   </tr>
  </table>
  <div style="width:100% ;  height:10px"> </div>
  <div class="label">Overview</div>
  <div class="greydiv">
   <div style="display:inline-block ; text-align:left">
    <table class="connectionboxes">
     <tr>
      <td class="lefthandwire">&#160;&#160;CLK_50&#160;</td>
      <td class="main" rowspan="2">digiClk</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
    </table>
   </div><span style="display:inline-block ; width:28px"> </span>
   <div style="display:inline-block ; text-align:left"><span>Processor
     <br/>&#160;&#160;
     <a href="#module_CPU"><b>CPU</b>
     </a> Nios II 13.0
     <br/>All Components
     <br/>&#160;&#160;
     <a href="#module_CPU"><b>CPU</b>
     </a> altera_nios2_qsys 13.0
     <br/>&#160;&#160;
     <a href="#module_SDRAM_CONTROLER"><b>SDRAM_CONTROLER</b>
     </a> altera_avalon_new_sdram_controller 13.0.1.99.2
     <br/>&#160;&#160;
     <a href="#module_SYS_ID"><b>SYS_ID</b>
     </a> altera_avalon_sysid_qsys 13.0
     <br/>&#160;&#160;
     <a href="#module_timer_0"><b>timer_0</b>
     </a> altera_avalon_timer 13.0.1.99.2
     <br/>&#160;&#160;
     <a href="#module_LED_GREEN"><b>LED_GREEN</b>
     </a> altera_up_avalon_parallel_port 13.0
     <br/>&#160;&#160;
     <a href="#module_LED_RED"><b>LED_RED</b>
     </a> altera_up_avalon_parallel_port 13.0
     <br/>&#160;&#160;
     <a href="#module_KEY"><b>KEY</b>
     </a> altera_up_avalon_parallel_port 13.0
     <br/>&#160;&#160;
     <a href="#module_SWITCHES"><b>SWITCHES</b>
     </a> altera_up_avalon_parallel_port 13.0
     <br/>&#160;&#160;
     <a href="#module_jtag_uart_0"><b>jtag_uart_0</b>
     </a> altera_avalon_jtag_uart 13.0.1.99.2
     <br/>&#160;&#160;
     <a href="#module_7_SEG_CONTROLLER"><b>7_SEG_CONTROLLER</b>
     </a> altera_up_avalon_parallel_port 13.0</span>
   </div>
  </div>
  <div style="width:100% ;  height:10px"> </div>
  <div class="label">Memory Map</div>
  <table class="mmap">
   <tr>
    <td class="empty" rowspan="2"></td>
    <td class="mastermodule" colspan="2">
     <a href="#module_CPU"><b>CPU</b>
     </a>
    </td>
   </tr>
   <tr>
    <td class="masterl">&#160;data_master</td>
    <td class="masterr">&#160;instruction_master</td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_CPU"><b>CPU</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">jtag_debug_module&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01000800</td>
    <td class="addr"><span style="color:#989898">0x</span>01000800</td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_SDRAM_CONTROLER"><b>SDRAM_CONTROLER</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">s1&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>00800000</td>
    <td class="addr"><span style="color:#989898">0x</span>00800000</td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_SYS_ID"><b>SYS_ID</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">control_slave&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001090</td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_timer_0"><b>timer_0</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">s1&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001020</td>
    <td class="addr"><span style="color:#989898">0x</span>01001020</td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_LED_GREEN"><b>LED_GREEN</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">avalon_parallel_port_slave&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001060</td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_LED_RED"><b>LED_RED</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">avalon_parallel_port_slave&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001070</td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_KEY"><b>KEY</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">avalon_parallel_port_slave&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001080</td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_SWITCHES"><b>SWITCHES</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">avalon_parallel_port_slave&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001050</td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_jtag_uart_0"><b>jtag_uart_0</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">avalon_jtag_slave&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001098</td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slavemodule">&#160;
     <a href="#module_7_SEG_CONTROLLER"><b>7_SEG_CONTROLLER</b>
     </a>
    </td>
    <td class="empty"></td>
    <td class="empty"></td>
   </tr>
   <tr>
    <td class="slaveb">avalon_parallel_port_slave&#160;</td>
    <td class="addr"><span style="color:#989898">0x</span>01001040</td>
    <td class="empty"></td>
   </tr>
  </table>
  <a name="module_CLK_50"> </a>
  <div>
   <hr/>
   <h2>CLK_50</h2>clock_source v13.0
   <br/>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">clockFrequency</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">clockFrequencyKnown</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">inputClockFrequency</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">resetSynchronousEdges</td>
        <td class="parametervalue">NONE</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">UNKNOWN</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>(none)</td>
    </tr>
   </table>
  </div>
  <a name="module_PLL"> </a>
  <div>
   <hr/>
   <h2>PLL</h2>altera_up_clocks v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_CLK_50">CLK_50</a>
      </td>
      <td class="from">clk&#160;&#160;</td>
      <td class="main" rowspan="53">PLL</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clk_in_primary</td>
     </tr>
     <tr>
      <td class="from">clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clk_in_primary_reset</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_CPU">CPU</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;reset_n</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_SDRAM_CONTROLER">SDRAM_CONTROLER</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_SYS_ID">SYS_ID</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_timer_0">timer_0</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_LED_GREEN">LED_GREEN</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_LED_RED">LED_RED</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_KEY">KEY</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_SWITCHES">SWITCHES</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_jtag_uart_0">jtag_uart_0</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_7_SEG_CONTROLLER">7_SEG_CONTROLLER</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">sys_clk&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">board</td>
        <td class="parametervalue">DE1</td>
       </tr>
       <tr>
        <td class="parametername">sys_clk_freq</td>
        <td class="parametervalue">50</td>
       </tr>
       <tr>
        <td class="parametername">sdram_clk</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">vga_clk</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">audio_clk</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">audio_clk_freq</td>
        <td class="parametervalue">12.288</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_CLK_IN_PRIMARY_CLOCK_RATE</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_DEVICE_FAMILY</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">Cyclone II</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>(none)</td>
    </tr>
   </table>
  </div>
  <a name="module_CPU"> </a>
  <div>
   <hr/>
   <h2>CPU</h2>altera_nios2_qsys v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="main" rowspan="42">CPU</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;reset_n</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">instruction_master&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_SDRAM_CONTROLER">SDRAM_CONTROLER</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;s1</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;s1</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">d_irq&#160;&#160;</td>
      <td class="neighbor" rowspan="6">
       <a href="#module_timer_0">timer_0</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;irq</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;s1</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">instruction_master&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;s1</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">d_irq&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_KEY">KEY</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;interrupt</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
      <td class="neighbor" rowspan="2">
       <a href="#module_LED_RED">LED_RED</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
      <td class="neighbor" rowspan="2">
       <a href="#module_LED_GREEN">LED_GREEN</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">d_irq&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_SWITCHES">SWITCHES</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;interrupt</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
      <td class="neighbor" rowspan="4">
       <a href="#module_jtag_uart_0">jtag_uart_0</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;avalon_jtag_slave</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">d_irq&#160;&#160;</td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;irq</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
      <td class="neighbor" rowspan="2">
       <a href="#module_SYS_ID">SYS_ID</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;control_slave</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="from">data_master&#160;&#160;</td>
      <td class="neighbor" rowspan="2">
       <a href="#module_7_SEG_CONTROLLER">7_SEG_CONTROLLER</a>
      </td>
     </tr>
     <tr>
      <td></td>
      <td></td>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">setting_showUnpublishedSettings</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_showInternalSettings</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_preciseSlaveAccessErrorException</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_preciseIllegalMemAccessException</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_preciseDivisionErrorException</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_performanceCounter</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_illegalMemAccessDetection</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_illegalInstructionsTrap</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_fullWaveformSignals</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_extraExceptionInfo</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_exportPCB</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_debugSimGen</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_clearXBitsLDNonBypass</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">setting_bit31BypassDCache</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">setting_bigEndian</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_export_large_RAMs</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_asic_enabled</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_asic_synopsys_translate_on_off</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_oci_export_jtag_signals</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_bhtIndexPcOnly</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_avalonDebugPortPresent</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_alwaysEncrypt</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">setting_allowFullAddressRange</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_activateTrace</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">setting_activateTestEndChecker</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_activateMonitors</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">setting_activateModelChecker</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_HDLSimCachesCleared</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">setting_HBreakTest</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">muldiv_divider</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">mpu_useLimit</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">mpu_enabled</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">mmu_enabled</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">mmu_autoAssignTlbPtrSz</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">manuallyAssignCpuID</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">debug_triggerArming</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">debug_embeddedPLL</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">debug_debugReqSignals</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">debug_assignJtagInstanceID</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">dcache_omitDataMaster</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">cpuReset</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">is_hardcopy_compatible</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_shadowRegisterSets</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">mpu_numOfInstRegion</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">mpu_numOfDataRegion</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">mmu_TLBMissExcOffset</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">debug_jtagInstanceID</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">resetOffset</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">exceptionOffset</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">cpuID</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">cpuID_stored</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">breakOffset</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">userDefinedSettings</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">resetSlave</td>
        <td class="parametervalue">SDRAM_CONTROLER.s1</td>
       </tr>
       <tr>
        <td class="parametername">mmu_TLBMissExcSlave</td>
        <td class="parametervalue">None</td>
       </tr>
       <tr>
        <td class="parametername">exceptionSlave</td>
        <td class="parametervalue">SDRAM_CONTROLER.s1</td>
       </tr>
       <tr>
        <td class="parametername">breakSlave</td>
        <td class="parametervalue">CPU.jtag_debug_module</td>
       </tr>
       <tr>
        <td class="parametername">setting_perfCounterWidth</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">setting_interruptControllerType</td>
        <td class="parametervalue">Internal</td>
       </tr>
       <tr>
        <td class="parametername">setting_branchPredictionType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">setting_bhtPtrSz</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">muldiv_multiplierType</td>
        <td class="parametervalue">EmbeddedMulFast</td>
       </tr>
       <tr>
        <td class="parametername">mpu_minInstRegionSize</td>
        <td class="parametervalue">12</td>
       </tr>
       <tr>
        <td class="parametername">mpu_minDataRegionSize</td>
        <td class="parametervalue">12</td>
       </tr>
       <tr>
        <td class="parametername">mmu_uitlbNumEntries</td>
        <td class="parametervalue">4</td>
       </tr>
       <tr>
        <td class="parametername">mmu_udtlbNumEntries</td>
        <td class="parametervalue">6</td>
       </tr>
       <tr>
        <td class="parametername">mmu_tlbPtrSz</td>
        <td class="parametervalue">7</td>
       </tr>
       <tr>
        <td class="parametername">mmu_tlbNumWays</td>
        <td class="parametervalue">16</td>
       </tr>
       <tr>
        <td class="parametername">mmu_processIDNumBits</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">impl</td>
        <td class="parametervalue">Tiny</td>
       </tr>
       <tr>
        <td class="parametername">icache_size</td>
        <td class="parametervalue">4096</td>
       </tr>
       <tr>
        <td class="parametername">icache_tagramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">icache_ramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">icache_numTCIM</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">icache_burstType</td>
        <td class="parametervalue">None</td>
       </tr>
       <tr>
        <td class="parametername">dcache_bursts</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">dcache_victim_buf_impl</td>
        <td class="parametervalue">ram</td>
       </tr>
       <tr>
        <td class="parametername">debug_level</td>
        <td class="parametervalue">Level1</td>
       </tr>
       <tr>
        <td class="parametername">debug_OCIOnchipTrace</td>
        <td class="parametervalue">_128</td>
       </tr>
       <tr>
        <td class="parametername">dcache_size</td>
        <td class="parametervalue">2048</td>
       </tr>
       <tr>
        <td class="parametername">dcache_tagramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">dcache_ramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">dcache_numTCDM</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">dcache_lineSize</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">setting_exportvectors</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">setting_ecc_present</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">regfile_ramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">ocimem_ramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">mmu_ramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">bht_ramBlockType</td>
        <td class="parametervalue">Automatic</td>
       </tr>
       <tr>
        <td class="parametername">resetAbsoluteAddr</td>
        <td class="parametervalue">8388608</td>
       </tr>
       <tr>
        <td class="parametername">exceptionAbsoluteAddr</td>
        <td class="parametervalue">8388640</td>
       </tr>
       <tr>
        <td class="parametername">breakAbsoluteAddr</td>
        <td class="parametervalue">16779296</td>
       </tr>
       <tr>
        <td class="parametername">mmu_TLBMissExcAbsAddr</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">dcache_bursts_derived</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">dcache_size_derived</td>
        <td class="parametervalue">2048</td>
       </tr>
       <tr>
        <td class="parametername">dcache_lineSize_derived</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">translate_on</td>
        <td class="parametervalue"> "synthesis translate_on"  </td>
       </tr>
       <tr>
        <td class="parametername">translate_off</td>
        <td class="parametervalue"> "synthesis translate_off" </td>
       </tr>
       <tr>
        <td class="parametername">instAddrWidth</td>
        <td class="parametervalue">25</td>
       </tr>
       <tr>
        <td class="parametername">dataAddrWidth</td>
        <td class="parametervalue">25</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster0AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster1AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster2AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster3AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster0AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster1AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster2AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster3AddrWidth</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">instSlaveMapParam</td>
        <td class="parametervalue">&lt;address-map&gt;&lt;slave name='SDRAM_CONTROLER.s1' start='0x800000' end='0x1000000' /&gt;&lt;slave name='CPU.jtag_debug_module' start='0x1000800' end='0x1001000' /&gt;&lt;slave name='timer_0.s1' start='0x1001020' end='0x1001040' /&gt;&lt;/address-map&gt;</td>
       </tr>
       <tr>
        <td class="parametername">dataSlaveMapParam</td>
        <td class="parametervalue">&lt;address-map&gt;&lt;slave name='SDRAM_CONTROLER.s1' start='0x800000' end='0x1000000' /&gt;&lt;slave name='CPU.jtag_debug_module' start='0x1000800' end='0x1001000' /&gt;&lt;slave name='timer_0.s1' start='0x1001020' end='0x1001040' /&gt;&lt;slave name='7_SEG_CONTROLLER.avalon_parallel_port_slave' start='0x1001040' end='0x1001050' /&gt;&lt;slave name='SWITCHES.avalon_parallel_port_slave' start='0x1001050' end='0x1001060' /&gt;&lt;slave name='LED_GREEN.avalon_parallel_port_slave' start='0x1001060' end='0x1001070' /&gt;&lt;slave name='LED_RED.avalon_parallel_port_slave' start='0x1001070' end='0x1001080' /&gt;&lt;slave name='KEY.avalon_parallel_port_slave' start='0x1001080' end='0x1001090' /&gt;&lt;slave name='SYS_ID.control_slave' start='0x1001090' end='0x1001098' /&gt;&lt;slave name='jtag_uart_0.avalon_jtag_slave' start='0x1001098' end='0x10010A0' /&gt;&lt;/address-map&gt;</td>
       </tr>
       <tr>
        <td class="parametername">clockFrequency</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamilyName</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">internalIrqMaskSystemInfo</td>
        <td class="parametervalue">15</td>
       </tr>
       <tr>
        <td class="parametername">customInstSlavesSystemInfo</td>
        <td class="parametervalue">&lt;info/&gt;</td>
       </tr>
       <tr>
        <td class="parametername">deviceFeaturesSystemInfo</td>
        <td class="parametervalue">ADDRESS_STALL 1 CELL_LEVEL_BACK_ANNOTATION_DISABLED 0 COMPILER_SUPPORT 1 DSP 0 DSP_SHIFTER_BLOCK 0 DUMP_ASM_LAB_BITS_FOR_POWER 1 EMUL 1 ENABLE_ADVANCED_IO_ANALYSIS_GUI_FEATURES 0 EPCS 1 ESB 0 FAKE1 0 FAKE2 0 FAKE3 0 FAMILY_LEVEL_INSTALLATION_ONLY 1 FITTER_USE_FALLING_EDGE_DELAY 0 GENERATE_DC_ON_CURRENT_WARNING_FOR_INTERNAL_CLAMPING_DIODE 0 HARDCOPY 0 HAS_18_BIT_MULTS 0 HAS_ACE_SUPPORT 1 HAS_ADJUSTABLE_OUTPUT_IO_TIMING_MEAS_POINT 0 HAS_ADVANCED_IO_INVERTED_CORNER 0 HAS_ADVANCED_IO_POWER_SUPPORT 0 HAS_ADVANCED_IO_TIMING_SUPPORT 0 HAS_ALM_SUPPORT 0 HAS_ATOM_AND_ROUTING_POWER_MODELED_TOGETHER 0 HAS_AUTO_DERIVE_CLOCK_UNCERTAINTY_SUPPORT 0 HAS_AUTO_FIT_SUPPORT 1 HAS_BALANCED_OPT_TECHNIQUE_SUPPORT 1 HAS_BENEFICIAL_SKEW_SUPPORT 0 HAS_BITLEVEL_DRIVE_STRENGTH_CONTROL 0 HAS_BSDL_FILE_GENERATION 0 HAS_CGA_SUPPORT 1 HAS_CHECK_NETLIST_SUPPORT 1 HAS_CLOCK_REGION_CHECKER_ENABLED 1 HAS_CORE_JUNCTION_TEMP_DERATING 1 HAS_CROSSTALK_SUPPORT 0 HAS_CUSTOM_REGION_SUPPORT 1 HAS_DAP_JTAG_FROM_HPS 0 HAS_DATA_DRIVEN_ACVQ_HSSI_SUPPORT 0 HAS_DDB_FDI_SUPPORT 0 HAS_DESIGN_ANALYZER_SUPPORT 1 HAS_DETAILED_IO_RAIL_POWER_MODEL 1 HAS_DETAILED_LEIM_STATIC_POWER_MODEL 0 HAS_DETAILED_LE_POWER_MODEL 1 HAS_DETAILED_ROUTING_MUX_STATIC_POWER_MODEL 0 HAS_DETAILED_THERMAL_CIRCUIT_PARAMETER_SUPPORT 1 HAS_DEVICE_MIGRATION_SUPPORT 1 HAS_DIAGONAL_MIGRATION_SUPPORT 0 HAS_EMIF_TOOLKIT_SUPPORT 0 HAS_ERROR_DETECTION_SUPPORT 0 HAS_FAMILY_VARIANT_MIGRATION_SUPPORT 0 HAS_FANOUT_FREE_NODE_SUPPORT 1 HAS_FAST_FIT_SUPPORT 1 HAS_FITTER_EARLY_TIMING_ESTIMATE_SUPPORT 1 HAS_FITTER_ECO_SUPPORT 1 HAS_FIT_NETLIST_OPT_RETIME_SUPPORT 1 HAS_FIT_NETLIST_OPT_SUPPORT 1 HAS_FORMAL_VERIFICATION_SUPPORT 1 HAS_FPGA_XCHANGE_SUPPORT 1 HAS_FSAC_LUTRAM_REGISTER_PACKING_SUPPORT 0 HAS_FULL_DAT_MIN_TIMING_SUPPORT 1 HAS_FULL_INCREMENTAL_DESIGN_SUPPORT 1 HAS_FUNCTIONAL_SIMULATION_SUPPORT 1 HAS_FUNCTIONAL_VERILOG_SIMULATION_SUPPORT 0 HAS_FUNCTIONAL_VHDL_SIMULATION_SUPPORT 0 HAS_GLITCH_FILTERING_SUPPORT 1 HAS_HC_READY_SUPPORT 0 HAS_HIGH_SPEED_LOW_POWER_TILE_SUPPORT 0 HAS_HOLD_TIME_AVOIDANCE_ACROSS_CLOCK_SPINE_SUPPORT 1 HAS_HSPICE_WRITER_SUPPORT 0 HAS_HSSI_POWER_CALCULATOR 0 HAS_IBISO_WRITER_SUPPORT 1 HAS_INCREMENTAL_DAT_SUPPORT 0 HAS_INCREMENTAL_SYNTHESIS_SUPPORT 1 HAS_INTERFACE_PLANNER_SUPPORT 0 HAS_IO_ASSIGNMENT_ANALYSIS_SUPPORT 1 HAS_IO_DECODER 0 HAS_IO_PLACEMENT_OPTIMIZATION_SUPPORT 1 HAS_IO_SMART_RECOMPILE_SUPPORT 1 HAS_JITTER_SUPPORT 0 HAS_JTAG_SLD_HUB_SUPPORT 1 HAS_LIMITED_TCL_FITTER_SUPPORT 0 HAS_LOGIC_LOCK_SUPPORT 1 HAS_MICROPROCESSOR 0 HAS_MIF_SMART_COMPILE_SUPPORT 1 HAS_MINMAX_TIMING_MODELING_SUPPORT 0 HAS_MIN_TIMING_ANALYSIS_SUPPORT 1 HAS_MUX_RESTRUCTURE_SUPPORT 1 HAS_NEW_HC_FLOW_SUPPORT 0 HAS_NEW_SERDES_MAX_RESOURCE_COUNT_REPORTING_SUPPORT 0 HAS_NEW_VPR_SUPPORT 1 HAS_NONSOCKET_TECHNOLOGY_MIGRATION_SUPPORT 0 HAS_NO_HARDBLOCK_PARTITION_SUPPORT 0 HAS_NO_JTAG_USERCODE_SUPPORT 0 HAS_OPERATING_SETTINGS_AND_CONDITIONS_REPORTING_SUPPORT 1 HAS_PAD_LOCATION_ASSIGNMENT_SUPPORT 1 HAS_PARTIAL_RECONFIG_SUPPORT 0 HAS_PHYSICAL_NETLIST_OUTPUT 0 HAS_PHYSICAL_ROUTING_SUPPORT 0 HAS_PIN_SPECIFIC_VOLTAGE_SUPPORT 0 HAS_PLDM_REF_SUPPORT 1 HAS_POWER_ESTIMATION_SUPPORT 1 HAS_PRELIMINARY_CLOCK_UNCERTAINTY_NUMBERS 0 HAS_PRE_FITTER_FPP_SUPPORT 0 HAS_PRE_FITTER_LUTRAM_NETLIST_CHECKER_ENABLED 0 HAS_PVA_SUPPORT 1 HAS_RCF_SUPPORT 1 HAS_RCF_SUPPORT_FOR_DEBUGGING 0 HAS_RED_BLACK_SEPARATION_SUPPORT 0 HAS_RE_LEVEL_TIMING_GRAPH_SUPPORT 0 HAS_RISEFALL_DELAY_SUPPORT 1 HAS_SIGNAL_PROBE_SUPPORT 1 HAS_SIGNAL_TAP_SUPPORT 1 HAS_SIMULATOR_SUPPORT 1 HAS_SPLIT_IO_SUPPORT 0 HAS_SPLIT_LC_SUPPORT 1 HAS_SYNTH_FSYN_NETLIST_OPT_SUPPORT 0 HAS_SYNTH_NETLIST_OPT_RETIME_SUPPORT 1 HAS_SYNTH_NETLIST_OPT_SUPPORT 1 HAS_TCL_FITTER_SUPPORT 0 HAS_TECHNOLOGY_MIGRATION_SUPPORT 0 HAS_TEMPLATED_REGISTER_PACKING_SUPPORT 1 HAS_TIME_BORROWING_SUPPORT 0 HAS_TIMING_DRIVEN_SYNTHESIS_SUPPORT 1 HAS_TIMING_INFO_SUPPORT 1 HAS_TIMING_OPERATING_CONDITIONS 0 HAS_TIMING_SIMULATION_SUPPORT 1 HAS_TITAN_BASED_MAC_REGISTER_PACKER_SUPPORT 0 HAS_U2B2_SUPPORT 0 HAS_USER_HIGH_SPEED_LOW_POWER_TILE_SUPPORT 0 HAS_USE_FITTER_INFO_SUPPORT 1 HAS_VCCPD_POWER_RAIL 0 HAS_VERTICAL_MIGRATION_SUPPORT 1 HAS_VIEWDRAW_SYMBOL_SUPPORT 1 HAS_VIO_SUPPORT 1 HAS_VIRTUAL_DEVICES 0 HAS_WYSIWYG_DFFEAS_SUPPORT 0 HAS_XIBISO_WRITER_SUPPORT 0 IFP_USE_LEGACY_IO_CHECKER 0 INCREMENTAL_DESIGN_SUPPORTS_COMPATIBLE_CONSTRAINTS 0 INSTALLED 0 IS_CONFIG_ROM 0 IS_DEFAULT_FAMILY 0 IS_HARDCOPY_FAMILY 0 LVDS_IO 0 M10K_MEMORY 0 M144K_MEMORY 0 M20K_MEMORY 0 M4K_MEMORY 1 M512_MEMORY 0 M9K_MEMORY 0 MLAB_MEMORY 0 MRAM_MEMORY 0 NOT_LISTED 0 NO_RPE_SUPPORT 0 NO_SUPPORT_FOR_LOGICLOCK_CONTENT_BACK_ANNOTATION 0 NO_SUPPORT_FOR_STA_CLOCK_UNCERTAINTY_CHECK 1 NO_TDC_SUPPORT 0 POSTFIT_BAK_DATABASE_EXPORT_ENABLED 1 POSTMAP_BAK_DATABASE_EXPORT_ENABLED 1 PROGRAMMER_SUPPORT 1 QFIT_IN_DEVELOPMENT 0 QMAP_IN_DEVELOPMENT 0 RAM_LOGICAL_NAME_CHECKING_IN_CUT_ENABLED 1 REPORTS_METASTABILITY_MTBF 0 REQUIRES_INSTALLATION_PATCH 0 REQUIRES_LIST_OF_TEMPERATURE_AND_VOLTAGE_OPERATING_CONDITIONS 0 RESERVES_SIGNAL_PROBE_PINS 0 RESOLVE_MAX_FANOUT_EARLY 1 RESOLVE_MAX_FANOUT_LATE 0 RESPECTS_FIXED_SIZED_LOCKED_LOCATION_LOGICLOCK 1 RESTRICTED_USER_SELECTION 0 RISEFALL_SUPPORT_IS_HIDDEN 1 STRICT_TIMING_DB_CHECKS 0 SUPPORTS_ADDITIONAL_OPTIONS_FOR_UNUSED_IO 1 SUPPORTS_CRC 1 SUPPORTS_DIFFERENTIAL_AIOT_BOARD_TRACE_MODEL 0 SUPPORTS_DSP_BALANCING_BACK_ANNOTATION 0 SUPPORTS_GENERATION_OF_EARLY_POWER_ESTIMATOR_FILE 1 SUPPORTS_GLOBAL_SIGNAL_BACK_ANNOTATION 0 SUPPORTS_MAC_CHAIN_OUT_ADDER 0 SUPPORTS_RAM_PACKING_BACK_ANNOTATION 0 SUPPORTS_REG_PACKING_BACK_ANNOTATION 0 SUPPORTS_SIGNALPROBE_REGISTER_PIPELINING 1 SUPPORTS_SINGLE_ENDED_AIOT_BOARD_TRACE_MODEL 0 SUPPORTS_USER_MANUAL_LOGIC_DUPLICATION 1 TMV_RUN_CUSTOMIZABLE_VIEWER 1 TMV_RUN_INTERNAL_DETAILS 1 TMV_RUN_INTERNAL_DETAILS_ON_IO 1 TMV_RUN_INTERNAL_DETAILS_ON_IOBUF 0 TMV_RUN_INTERNAL_DETAILS_ON_LCELL 0 TMV_RUN_INTERNAL_DETAILS_ON_LRAM 0 TRANSCEIVER_3G_BLOCK 0 TRANSCEIVER_6G_BLOCK 0 USES_ACV_FOR_FLED 1 USES_ADB_FOR_BACK_ANNOTATION 0 USES_ALTERA_LNSIM 0 USES_ASIC_ROUTING_POWER_CALCULATOR 0 USES_DATA_DRIVEN_PLL_COMPUTATION_UTIL 1 USES_DEV 1 USES_ICP_FOR_ECO_FITTER 0 USES_LIBERTY_TIMING 0 USES_POWER_SIGNAL_ACTIVITIES 1 USES_THIRD_GENERATION_TIMING_MODELS_TIS 0 USES_U2B2_TIMING_MODELS 0 USE_ADVANCED_IO_POWER_BY_DEFAULT 0 USE_ADVANCED_IO_TIMING_BY_DEFAULT 0 USE_BASE_FAMILY_DDB_PATH 0 USE_OCT_AUTO_CALIBRATION 0 USE_RELAX_IO_ASSIGNMENT_RULES 1 USE_RISEFALL_ONLY 0 USE_SEPARATE_LIST_FOR_TECH_MIGRATION 0 USE_SINGLE_COMPILER_PASS_PLL_MIF_FILE_WRITER 0 USE_TITAN_IO_BASED_IO_REGISTER_PACKER_UTIL 0 WYSIWYG_BUS_WIDTH_CHECKING_IN_CUT_ENABLED 0</td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster0MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster1MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster2MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledDataMaster3MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster0MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster1MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster2MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">tightlyCoupledInstructionMaster3MapParam</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">UNKNOWN</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>
      <table>
       <tr>
        <td class="parametername">BIG_ENDIAN</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">BREAK_ADDR</td>
        <td class="parametervalue">0x01000820</td>
       </tr>
       <tr>
        <td class="parametername">CPU_FREQ</td>
        <td class="parametervalue">50000000u</td>
       </tr>
       <tr>
        <td class="parametername">CPU_ID_SIZE</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">CPU_ID_VALUE</td>
        <td class="parametervalue">0x00000000</td>
       </tr>
       <tr>
        <td class="parametername">CPU_IMPLEMENTATION</td>
        <td class="parametervalue">"tiny"</td>
       </tr>
       <tr>
        <td class="parametername">DATA_ADDR_WIDTH</td>
        <td class="parametervalue">25</td>
       </tr>
       <tr>
        <td class="parametername">DCACHE_LINE_SIZE</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">DCACHE_LINE_SIZE_LOG2</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">DCACHE_SIZE</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">EXCEPTION_ADDR</td>
        <td class="parametervalue">0x00800020</td>
       </tr>
       <tr>
        <td class="parametername">FLUSHDA_SUPPORTED</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">HARDWARE_DIVIDE_PRESENT</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">HARDWARE_MULTIPLY_PRESENT</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">HARDWARE_MULX_PRESENT</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">HAS_DEBUG_CORE</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">HAS_DEBUG_STUB</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">HAS_JMPI_INSTRUCTION</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">ICACHE_LINE_SIZE</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">ICACHE_LINE_SIZE_LOG2</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">ICACHE_SIZE</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">INST_ADDR_WIDTH</td>
        <td class="parametervalue">25</td>
       </tr>
       <tr>
        <td class="parametername">RESET_ADDR</td>
        <td class="parametervalue">0x00800000</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>
  </div>
  <a name="module_SDRAM_CONTROLER"> </a>
  <div>
   <hr/>
   <h2>SDRAM_CONTROLER</h2>altera_avalon_new_sdram_controller v13.0.1.99.2
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">instruction_master&#160;&#160;</td>
      <td class="main" rowspan="9">SDRAM_CONTROLER</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;s1</td>
     </tr>
     <tr>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;s1</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;reset</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">TAC</td>
        <td class="parametervalue">5.5</td>
       </tr>
       <tr>
        <td class="parametername">TRCD</td>
        <td class="parametervalue">20.0</td>
       </tr>
       <tr>
        <td class="parametername">TRFC</td>
        <td class="parametervalue">70.0</td>
       </tr>
       <tr>
        <td class="parametername">TRP</td>
        <td class="parametervalue">20.0</td>
       </tr>
       <tr>
        <td class="parametername">TWR</td>
        <td class="parametervalue">14.0</td>
       </tr>
       <tr>
        <td class="parametername">casLatency</td>
        <td class="parametervalue">3</td>
       </tr>
       <tr>
        <td class="parametername">columnWidth</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">dataWidth</td>
        <td class="parametervalue">16</td>
       </tr>
       <tr>
        <td class="parametername">generateSimulationModel</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">initRefreshCommands</td>
        <td class="parametervalue">2</td>
       </tr>
       <tr>
        <td class="parametername">model</td>
        <td class="parametervalue">single_Micron_MT48LC4M32B2_7_chip</td>
       </tr>
       <tr>
        <td class="parametername">numberOfBanks</td>
        <td class="parametervalue">4</td>
       </tr>
       <tr>
        <td class="parametername">numberOfChipSelects</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">pinsSharedViaTriState</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">powerUpDelay</td>
        <td class="parametervalue">100.0</td>
       </tr>
       <tr>
        <td class="parametername">refreshPeriod</td>
        <td class="parametervalue">15.625</td>
       </tr>
       <tr>
        <td class="parametername">rowWidth</td>
        <td class="parametervalue">12</td>
       </tr>
       <tr>
        <td class="parametername">masteredTristateBridgeSlave</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">TMRD</td>
        <td class="parametervalue">3</td>
       </tr>
       <tr>
        <td class="parametername">initNOPDelay</td>
        <td class="parametervalue">0.0</td>
       </tr>
       <tr>
        <td class="parametername">registerDataIn</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">clockRate</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">componentName</td>
        <td class="parametervalue">digiClk_SDRAM_CONTROLER</td>
       </tr>
       <tr>
        <td class="parametername">size</td>
        <td class="parametervalue">8388608</td>
       </tr>
       <tr>
        <td class="parametername">addressWidth</td>
        <td class="parametervalue">22</td>
       </tr>
       <tr>
        <td class="parametername">bankWidth</td>
        <td class="parametervalue">2</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">UNKNOWN</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>
      <table>
       <tr>
        <td class="parametername">CAS_LATENCY</td>
        <td class="parametervalue">3</td>
       </tr>
       <tr>
        <td class="parametername">CONTENTS_INFO</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">INIT_NOP_DELAY</td>
        <td class="parametervalue">0.0</td>
       </tr>
       <tr>
        <td class="parametername">INIT_REFRESH_COMMANDS</td>
        <td class="parametervalue">2</td>
       </tr>
       <tr>
        <td class="parametername">IS_INITIALIZED</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">POWERUP_DELAY</td>
        <td class="parametervalue">100.0</td>
       </tr>
       <tr>
        <td class="parametername">REFRESH_PERIOD</td>
        <td class="parametervalue">15.625</td>
       </tr>
       <tr>
        <td class="parametername">REGISTER_DATA_IN</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">SDRAM_ADDR_WIDTH</td>
        <td class="parametervalue">22</td>
       </tr>
       <tr>
        <td class="parametername">SDRAM_BANK_WIDTH</td>
        <td class="parametervalue">2</td>
       </tr>
       <tr>
        <td class="parametername">SDRAM_COL_WIDTH</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">SDRAM_DATA_WIDTH</td>
        <td class="parametervalue">16</td>
       </tr>
       <tr>
        <td class="parametername">SDRAM_NUM_BANKS</td>
        <td class="parametervalue">4</td>
       </tr>
       <tr>
        <td class="parametername">SDRAM_NUM_CHIPSELECTS</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">SDRAM_ROW_WIDTH</td>
        <td class="parametervalue">12</td>
       </tr>
       <tr>
        <td class="parametername">SHARED_DATA</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">SIM_MODEL_BASE</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">STARVATION_INDICATOR</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">TRISTATE_BRIDGE_SLAVE</td>
        <td class="parametervalue">""</td>
       </tr>
       <tr>
        <td class="parametername">T_AC</td>
        <td class="parametervalue">5.5</td>
       </tr>
       <tr>
        <td class="parametername">T_MRD</td>
        <td class="parametervalue">3</td>
       </tr>
       <tr>
        <td class="parametername">T_RCD</td>
        <td class="parametervalue">20.0</td>
       </tr>
       <tr>
        <td class="parametername">T_RFC</td>
        <td class="parametervalue">70.0</td>
       </tr>
       <tr>
        <td class="parametername">T_RP</td>
        <td class="parametervalue">20.0</td>
       </tr>
       <tr>
        <td class="parametername">T_WR</td>
        <td class="parametervalue">14.0</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>
  </div>
  <a name="module_SYS_ID"> </a>
  <div>
   <hr/>
   <h2>SYS_ID</h2>altera_avalon_sysid_qsys v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="main" rowspan="7">SYS_ID</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="2">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;control_slave</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">id</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">timestamp</td>
        <td class="parametervalue">1698501301</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_CLK_CLOCK_RATE</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_DEVICE_FAMILY</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">Cyclone II</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>
      <table>
       <tr>
        <td class="parametername">ID</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">TIMESTAMP</td>
        <td class="parametervalue">1698501301</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>
  </div>
  <a name="module_timer_0"> </a>
  <div>
   <hr/>
   <h2>timer_0</h2>altera_avalon_timer v13.0.1.99.2
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="main" rowspan="11">timer_0</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="6">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">d_irq&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;irq</td>
     </tr>
     <tr>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;s1</td>
     </tr>
     <tr>
      <td class="from">instruction_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;s1</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">alwaysRun</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">counterSize</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">fixedPeriod</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">period</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">periodUnits</td>
        <td class="parametervalue">SEC</td>
       </tr>
       <tr>
        <td class="parametername">resetOutput</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">snapshot</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">timeoutPulseOutput</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">systemFrequency</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">timerPreset</td>
        <td class="parametervalue">FULL_FEATURED</td>
       </tr>
       <tr>
        <td class="parametername">periodUnitsString</td>
        <td class="parametervalue">s</td>
       </tr>
       <tr>
        <td class="parametername">valueInSecond</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">loadValue</td>
        <td class="parametervalue">49999999</td>
       </tr>
       <tr>
        <td class="parametername">mult</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">ticksPerSec</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">slave_address_width</td>
        <td class="parametervalue">3</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">UNKNOWN</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>
      <table>
       <tr>
        <td class="parametername">ALWAYS_RUN</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">COUNTER_SIZE</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">FIXED_PERIOD</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">FREQ</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">LOAD_VALUE</td>
        <td class="parametervalue">49999999</td>
       </tr>
       <tr>
        <td class="parametername">MULT</td>
        <td class="parametervalue">1.0</td>
       </tr>
       <tr>
        <td class="parametername">PERIOD</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">PERIOD_UNITS</td>
        <td class="parametervalue">s</td>
       </tr>
       <tr>
        <td class="parametername">RESET_OUTPUT</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">SNAPSHOT</td>
        <td class="parametervalue">1</td>
       </tr>
       <tr>
        <td class="parametername">TICKS_PER_SEC</td>
        <td class="parametervalue">1.0</td>
       </tr>
       <tr>
        <td class="parametername">TIMEOUT_PULSE_OUTPUT</td>
        <td class="parametervalue">0</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>
  </div>
  <a name="module_LED_GREEN"> </a>
  <div>
   <hr/>
   <h2>LED_GREEN</h2>altera_up_avalon_parallel_port v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="main" rowspan="7">LED_GREEN</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="2">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">board</td>
        <td class="parametervalue">DE1</td>
       </tr>
       <tr>
        <td class="parametername">custom_port</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">preset</td>
        <td class="parametervalue">LEDs</td>
       </tr>
       <tr>
        <td class="parametername">leds</td>
        <td class="parametervalue">Green</td>
       </tr>
       <tr>
        <td class="parametername">sevensegs</td>
        <td class="parametervalue">3 to 0</td>
       </tr>
       <tr>
        <td class="parametername">gpio</td>
        <td class="parametervalue">GPIO 0 (JP1)</td>
       </tr>
       <tr>
        <td class="parametername">DW</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">direction</td>
        <td class="parametervalue">Output only</td>
       </tr>
       <tr>
        <td class="parametername">custom_DW</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">custom_direction</td>
        <td class="parametervalue">Input only</td>
       </tr>
       <tr>
        <td class="parametername">capture</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">edge</td>
        <td class="parametervalue">Rising</td>
       </tr>
       <tr>
        <td class="parametername">irq</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">irq_type</td>
        <td class="parametervalue">Edge</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_CLOCK_RESET_CLOCK_RATE</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_DEVICE_FAMILY</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">Cyclone II</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>(none)</td>
    </tr>
   </table>
  </div>
  <a name="module_LED_RED"> </a>
  <div>
   <hr/>
   <h2>LED_RED</h2>altera_up_avalon_parallel_port v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="main" rowspan="7">LED_RED</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="2">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">board</td>
        <td class="parametervalue">DE1</td>
       </tr>
       <tr>
        <td class="parametername">custom_port</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">preset</td>
        <td class="parametervalue">LEDs</td>
       </tr>
       <tr>
        <td class="parametername">leds</td>
        <td class="parametervalue">Red</td>
       </tr>
       <tr>
        <td class="parametername">sevensegs</td>
        <td class="parametervalue">3 to 0</td>
       </tr>
       <tr>
        <td class="parametername">gpio</td>
        <td class="parametervalue">GPIO 0 (JP1)</td>
       </tr>
       <tr>
        <td class="parametername">DW</td>
        <td class="parametervalue">10</td>
       </tr>
       <tr>
        <td class="parametername">direction</td>
        <td class="parametervalue">Output only</td>
       </tr>
       <tr>
        <td class="parametername">custom_DW</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">custom_direction</td>
        <td class="parametervalue">Input only</td>
       </tr>
       <tr>
        <td class="parametername">capture</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">edge</td>
        <td class="parametervalue">Rising</td>
       </tr>
       <tr>
        <td class="parametername">irq</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">irq_type</td>
        <td class="parametervalue">Edge</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_CLOCK_RESET_CLOCK_RATE</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_DEVICE_FAMILY</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">Cyclone II</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>(none)</td>
    </tr>
   </table>
  </div>
  <a name="module_KEY"> </a>
  <div>
   <hr/>
   <h2>KEY</h2>altera_up_avalon_parallel_port v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">d_irq&#160;&#160;</td>
      <td class="main" rowspan="9">KEY</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;interrupt</td>
     </tr>
     <tr>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">board</td>
        <td class="parametervalue">DE1</td>
       </tr>
       <tr>
        <td class="parametername">custom_port</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">preset</td>
        <td class="parametervalue">Pushbuttons</td>
       </tr>
       <tr>
        <td class="parametername">leds</td>
        <td class="parametervalue">Green</td>
       </tr>
       <tr>
        <td class="parametername">sevensegs</td>
        <td class="parametervalue">3 to 0</td>
       </tr>
       <tr>
        <td class="parametername">gpio</td>
        <td class="parametervalue">GPIO 0 (JP1)</td>
       </tr>
       <tr>
        <td class="parametername">DW</td>
        <td class="parametervalue">4</td>
       </tr>
       <tr>
        <td class="parametername">direction</td>
        <td class="parametervalue">Input only</td>
       </tr>
       <tr>
        <td class="parametername">custom_DW</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">custom_direction</td>
        <td class="parametervalue">Input only</td>
       </tr>
       <tr>
        <td class="parametername">capture</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">edge</td>
        <td class="parametervalue">Rising</td>
       </tr>
       <tr>
        <td class="parametername">irq</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">irq_type</td>
        <td class="parametervalue">Edge</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_CLOCK_RESET_CLOCK_RATE</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_DEVICE_FAMILY</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">Cyclone II</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>(none)</td>
    </tr>
   </table>
  </div>
  <a name="module_SWITCHES"> </a>
  <div>
   <hr/>
   <h2>SWITCHES</h2>altera_up_avalon_parallel_port v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="main" rowspan="9">SWITCHES</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">d_irq&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;interrupt</td>
     </tr>
     <tr>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">board</td>
        <td class="parametervalue">DE1</td>
       </tr>
       <tr>
        <td class="parametername">custom_port</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">preset</td>
        <td class="parametervalue">Slider Switches</td>
       </tr>
       <tr>
        <td class="parametername">leds</td>
        <td class="parametervalue">Green</td>
       </tr>
       <tr>
        <td class="parametername">sevensegs</td>
        <td class="parametervalue">3 to 0</td>
       </tr>
       <tr>
        <td class="parametername">gpio</td>
        <td class="parametervalue">GPIO 0 (JP1)</td>
       </tr>
       <tr>
        <td class="parametername">DW</td>
        <td class="parametervalue">10</td>
       </tr>
       <tr>
        <td class="parametername">direction</td>
        <td class="parametervalue">Input only</td>
       </tr>
       <tr>
        <td class="parametername">custom_DW</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">custom_direction</td>
        <td class="parametervalue">Input only</td>
       </tr>
       <tr>
        <td class="parametername">capture</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">edge</td>
        <td class="parametervalue">Rising</td>
       </tr>
       <tr>
        <td class="parametername">irq</td>
        <td class="parametervalue">true</td>
       </tr>
       <tr>
        <td class="parametername">irq_type</td>
        <td class="parametervalue">Edge</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_CLOCK_RESET_CLOCK_RATE</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_DEVICE_FAMILY</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">Cyclone II</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>(none)</td>
    </tr>
   </table>
  </div>
  <a name="module_jtag_uart_0"> </a>
  <div>
   <hr/>
   <h2>jtag_uart_0</h2>altera_avalon_jtag_uart v13.0.1.99.2
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk&#160;&#160;</td>
      <td class="main" rowspan="9">jtag_uart_0</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clk</td>
     </tr>
     <tr>
      <td class="from">sys_clk_reset&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;avalon_jtag_slave</td>
     </tr>
     <tr>
      <td class="from">d_irq&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;irq</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">allowMultipleConnections</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">hubInstanceID</td>
        <td class="parametervalue">0</td>
       </tr>
       <tr>
        <td class="parametername">readBufferDepth</td>
        <td class="parametervalue">64</td>
       </tr>
       <tr>
        <td class="parametername">readIRQThreshold</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">simInputCharacterStream</td>
        <td class="parametervalue"></td>
       </tr>
       <tr>
        <td class="parametername">simInteractiveOptions</td>
        <td class="parametervalue">NO_INTERACTIVE_WINDOWS</td>
       </tr>
       <tr>
        <td class="parametername">useRegistersForReadBuffer</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">useRegistersForWriteBuffer</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">useRelativePathForSimFile</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">writeBufferDepth</td>
        <td class="parametervalue">64</td>
       </tr>
       <tr>
        <td class="parametername">writeIRQThreshold</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">avalonSpec</td>
        <td class="parametervalue">2.0</td>
       </tr>
       <tr>
        <td class="parametername">legacySignalAllow</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">enableInteractiveInput</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">enableInteractiveOutput</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">UNKNOWN</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>
      <table>
       <tr>
        <td class="parametername">READ_DEPTH</td>
        <td class="parametervalue">64</td>
       </tr>
       <tr>
        <td class="parametername">READ_THRESHOLD</td>
        <td class="parametervalue">8</td>
       </tr>
       <tr>
        <td class="parametername">WRITE_DEPTH</td>
        <td class="parametervalue">64</td>
       </tr>
       <tr>
        <td class="parametername">WRITE_THRESHOLD</td>
        <td class="parametervalue">8</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>
  </div>
  <a name="module_7_SEG_CONTROLLER"> </a>
  <div>
   <hr/>
   <h2>7_SEG_CONTROLLER</h2>altera_up_avalon_parallel_port v13.0
   <br/>
   <div class="greydiv">
    <table class="connectionboxes">
     <tr>
      <td class="neighbor" rowspan="4">
       <a href="#module_PLL">PLL</a>
      </td>
      <td class="from">sys_clk_reset&#160;&#160;</td>
      <td class="main" rowspan="7">7_SEG_CONTROLLER</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset_reset</td>
     </tr>
     <tr>
      <td class="from">sys_clk&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;clock_reset</td>
     </tr>
     <tr style="height:6px">
      <td></td>
     </tr>
     <tr>
      <td class="neighbor" rowspan="2">
       <a href="#module_CPU">CPU</a>
      </td>
      <td class="from">data_master&#160;&#160;</td>
     </tr>
     <tr>
      <td class="to">&#160;&#160;avalon_parallel_port_slave</td>
     </tr>
    </table>
   </div>
   <br/>
   <br/>
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Parameters</h2>
      <table>
       <tr>
        <td class="parametername">board</td>
        <td class="parametervalue">DE1</td>
       </tr>
       <tr>
        <td class="parametername">custom_port</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">preset</td>
        <td class="parametervalue">Seven Segment Displays</td>
       </tr>
       <tr>
        <td class="parametername">leds</td>
        <td class="parametervalue">Green</td>
       </tr>
       <tr>
        <td class="parametername">sevensegs</td>
        <td class="parametervalue">3 to 0</td>
       </tr>
       <tr>
        <td class="parametername">gpio</td>
        <td class="parametervalue">GPIO 0 (JP1)</td>
       </tr>
       <tr>
        <td class="parametername">DW</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">direction</td>
        <td class="parametervalue">Output only</td>
       </tr>
       <tr>
        <td class="parametername">custom_DW</td>
        <td class="parametervalue">32</td>
       </tr>
       <tr>
        <td class="parametername">custom_direction</td>
        <td class="parametervalue">Input only</td>
       </tr>
       <tr>
        <td class="parametername">capture</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">edge</td>
        <td class="parametervalue">Rising</td>
       </tr>
       <tr>
        <td class="parametername">irq</td>
        <td class="parametervalue">false</td>
       </tr>
       <tr>
        <td class="parametername">irq_type</td>
        <td class="parametervalue">Edge</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_CLOCK_RESET_CLOCK_RATE</td>
        <td class="parametervalue">50000000</td>
       </tr>
       <tr>
        <td class="parametername">AUTO_DEVICE_FAMILY</td>
        <td class="parametervalue">CYCLONEII</td>
       </tr>
       <tr>
        <td class="parametername">deviceFamily</td>
        <td class="parametervalue">Cyclone II</td>
       </tr>
       <tr>
        <td class="parametername">generateLegacySim</td>
        <td class="parametervalue">false</td>
       </tr>
      </table>
     </td>
    </tr>
   </table>&#160;&#160;
   <table class="flowbox">
    <tr>
     <td class="parametersbox">
      <h2>Software Assignments</h2>(none)</td>
    </tr>
   </table>
  </div>
  <table class="blueBar">
   <tr>
    <td class="l">generation took 0,00 seconds</td>
    <td class="r">rendering took 0,07 seconds</td>
   </tr>
  </table>
 </body>
</html>

