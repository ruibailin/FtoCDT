Moctar Ba & Mickaël Albisser ARM-Cortex Emulator - Deliverable 1 Version 1.0 2015

Installation instructions

Using the terminal, go to the "ARM-Cortex-A-emulator" folder containing all the files necessary for the program. Start the makefile using the make release command to compile the program. Once the compilation is complete, start the program with the command ./emul_arm. In summary, this gives in the program directory:

$ make release 
$ ./emul-arm

Instructions

The program is used entirely from the command line. Follow the onscreen instructions and you should be fine. Available commands (with syntax):

load <filename> {} 
exit disp mem disp mem map disp reg set mem set reg assert reg assert word assert byte debug resume disasm 
run {} 
step step into break add + break del + | all break list

Uninstallation Instructions

To uninstall the program, simply delete all the files created using the makefile. This amounts to doing:

$ make clean 