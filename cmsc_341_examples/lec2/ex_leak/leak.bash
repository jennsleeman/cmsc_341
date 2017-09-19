g++ -o leak test_leak.cpp
valgrind --leak-check=yes ./leak 
