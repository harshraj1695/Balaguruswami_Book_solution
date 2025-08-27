
/*
 * The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to
get these values from the user and display the prices as follows:

*** LIST OF ITEMS ***
Item             Price
Rice          Rs 16.75
Sugar         Rs 15.00
 * */
 
#include <stdio.h>

int main(int argc, char **argv)
{
    float sugar ,rice;
	printf("Enter the price of sugar nad rice \n");
    scanf("%f%f",&sugar,&rice);
    
    printf("Item \t Price\n");
    printf("Rice \t %.2f\n",rice);
    printf("Sugar \t %.2f\n",sugar);
	return 0;
}
