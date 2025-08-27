/*Write a program to illustrate the use of typedef declaration in a program */

#include <stdio.h>

typedef struct person{
    int age;
    float height;
}person;

int main(int argc, char **argv)
{
	person p1;
    struct person p2;
    p1.age=10;
    p1.height=6.5;
    
    p2.age=20;
    p2.height=8.6;
    
    printf("Here i can create the obj of stuct with or without struct keyword\n ");
    printf("object p1 -> age : %d, height : %.2f\n", p1.age, p1.height);
    printf("object p2 -> age : %d, height : %.2f\n", p2.age, p2.height);
	return 0;
}
