/*Write a program to do the following:
(a) Declare x and y as integer variables and z as a short integer variable.
(b) Assign two 6 digit numbers to x and y
(c) Assign the sum of x and y to z
(d) Output the values of x, y and z
 * */

#include <stdio.h>

int main(int argc, char **argv)
{
	
    int x=878787;
    int y=123456;
    short int z;
    z=x+y;
    printf("x: %d\ny: %d\nz: %d\n",x,y,z);  // it is going to print a+b%2^16;
	return 0;
}
