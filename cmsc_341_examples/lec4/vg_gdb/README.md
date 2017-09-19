First run compile script.
This in terminal one run the vg script.
Get the PID #
In second terminal run the gdb script.
In the gdb window enter the following command:
 target remote | vgdb --pid=32066
Then continue
You could set break points and step through the code or 
you could just see the memory leak in action:
LEAK SUMMARY:
==32066==    definitely lost: 24 bytes in 1 blocks
==32066==    indirectly lost: 0 bytes in 0 blocks
==32066==      possibly lost: 0 bytes in 0 blocks
==32066==    still reachable: 72,704 bytes in 1 blocks
==32066==         suppressed: 0 bytes in 0 blocks

