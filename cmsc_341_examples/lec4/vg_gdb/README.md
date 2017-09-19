First run compile script.<br /> 
This in terminal one run the vg script.<br /> 
Get the PID #<br /> 
In second terminal run the gdb script.<br /> 
In the gdb window enter the following command:<br /> 
 target remote | vgdb --pid=<YOUR PID><br /> 
Then continue<br /> 
You could set break points and step through the code or 
you could just see the memory leak in action:<br /> 
LEAK SUMMARY:<br /> 
==32066==    definitely lost: 24 bytes in 1 blocks<br /> 
==32066==    indirectly lost: 0 bytes in 0 blocks<br /> 
==32066==      possibly lost: 0 bytes in 0 blocks<br /> 
==32066==    still reachable: 72,704 bytes in 1 blocks<br /> 
==32066==         suppressed: 0 bytes in 0 blocks<br /> 

