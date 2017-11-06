onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /network_tb/clk
add wave -noupdate /network_tb/rst
add wave -noupdate /network_tb/input_i
add wave -noupdate /network_tb/start_i
add wave -noupdate /network_tb/output_o
add wave -noupdate /network_tb/inputs
add wave -noupdate /network_tb/half_period
add wave -noupdate -divider {New Divider}
add wave -noupdate /network_tb/network_inst/n1/input_i
add wave -noupdate /network_tb/network_inst/n1/weight
add wave -noupdate /network_tb/network_inst/n1/output_o
add wave -noupdate /network_tb/network_inst/n1/current_state
add wave -noupdate /network_tb/network_inst/n1/next_state
add wave -noupdate /network_tb/network_inst/n1/input_s
add wave -noupdate /network_tb/network_inst/n1/weight_s
add wave -noupdate /network_tb/network_inst/n1/sum_s
add wave -noupdate /network_tb/network_inst/n1/mult_s
add wave -noupdate /network_tb/network_inst/n1/n
add wave -noupdate -divider {New Divider}
add wave -noupdate /network_tb/network_inst/n2/input_i
add wave -noupdate /network_tb/network_inst/n2/weight
add wave -noupdate /network_tb/network_inst/n2/output_o
add wave -noupdate /network_tb/network_inst/n2/current_state
add wave -noupdate /network_tb/network_inst/n2/next_state
add wave -noupdate /network_tb/network_inst/n2/input_s
add wave -noupdate /network_tb/network_inst/n2/weight_s
add wave -noupdate /network_tb/network_inst/n2/sum_s
add wave -noupdate /network_tb/network_inst/n2/mult_s
add wave -noupdate /network_tb/network_inst/n2/n
add wave -noupdate -divider {New Divider}
add wave -noupdate /network_tb/network_inst/n3/input_i
add wave -noupdate /network_tb/network_inst/n3/weight
add wave -noupdate /network_tb/network_inst/n3/output_o
add wave -noupdate /network_tb/network_inst/n3/current_state
add wave -noupdate /network_tb/network_inst/n3/next_state
add wave -noupdate /network_tb/network_inst/n3/input_s
add wave -noupdate /network_tb/network_inst/n3/weight_s
add wave -noupdate /network_tb/network_inst/n3/sum_s
add wave -noupdate /network_tb/network_inst/n3/mult_s
add wave -noupdate /network_tb/network_inst/n3/n
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ns} 0}
quietly wave cursor active 0
configure wave -namecolwidth 230
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ns} {950 ns}
