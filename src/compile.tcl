# TCL ModelSim compile script

# Sets the compiler
#set compiler vlog
set compiler vcom

# Creates work library if it doesn't already exists
if { ![file exist work] } {
	vlib work
	vmap work work
}

#########################
### Source files list ###
#########################

set sourceFiles {
	types.vhd
	act_func.vhd
	act_func_tb.vhd
	neuron.vhd
	network.vhd
	network_tb.vhd
}

#set testBench Pipeline_tb

###################
### Compilation ###
###################

if { [llength $sourceFiles] > 0 } {
	
	foreach file $sourceFiles {
		if [ catch {$compiler $file} ] {
			puts "\n*** ERROR compiling file $file :( ***" 
			return;
		}
	}
}


################################
### Lists the compiled files ###
################################

if { [llength $sourceFiles] > 0 } {
	
	puts "\n*** Compiled files:"  
	
	foreach file $sourceFiles {
		puts \t$file
	}
}


puts "\n*** Compilation OK ;) ***"