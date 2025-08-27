//Write a program that prints the even numbers

#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
    printf("enter the range \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf(" Even Number found %d\n",i);
        }
    }
	return 0;
}
