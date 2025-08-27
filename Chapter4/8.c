/*Write a program to read two ﬂoating point numbers using a scanf statement, assign their
sum to an integer variable and then output the values of all the three variables
 * 
 * */
#include <stdio.h>

int main(int argc, char **argv)
{
	float f1,f2;
    int sum;
    printf("ENter the two flaoting number\n");
    scanf("%f%f",&f1,&f2);
    sum=f1+f2;
    printf("f1 : %f\nf2 : %f\nsum : %d",f1,f2,sum);
	return 0;
}
