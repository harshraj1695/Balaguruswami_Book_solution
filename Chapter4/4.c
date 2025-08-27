/*
 * Write a program that requests two ﬂoat type numbers from the user and then divides the
ﬁrst number by the second and display the result along with the numbers.
 * 
 * */

#include <stdio.h>

int main(int argc, char **argv)
{
    float f1,f2;
    printf("Enter the two floating number\n");
    scanf("%f%f",&f1,&f2);
    
    printf("PRinting the result %f \n",f1/f2); 
    
	return 0;
}
