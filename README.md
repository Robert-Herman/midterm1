midterm1
========

This project calculates the approximate value of pi using the Leibniz and Bailey-Borwein-Plouffe series calculations.

The project is composed of the files:

1. Main
2. Leibniz calculation function
3. Bailey-Borwein-Plouffe calculation function
4. Header file containing mathematical value of pi and the function declarations for Leibniz and BBP
5. Makefile
6. .gitignore


The main file outputs the 3 separate value(s)

1. The first calculations:

   The value of pi using the Leibniz series until the error is less than 10^-6
   
   The value of pi using the BBP series until the error is less than 10^-6
2. The second calculations determine the time per function call for each of series
3. 
   Outputted value is the time (between 5-10 sec) and its respective iterations of each series
3. The third calculation is the ratio of the time required per function call Leibniz/BBP
