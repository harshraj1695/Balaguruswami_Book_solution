/*
 * Write program to count and print the number of negative and positive numbers in a given
set of numbers. Test your program with a suitable set of numbers. Use scanf to read the
numbers. Reading should be terminated when the value 0 is encountered.
 * */

#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    int pos=0,neg=0;
	while(1){
        printf("enter the number \n");
        scanf("%d", &n);
        if(n==0){
            printf("positive cout is %d nad negative count is %d\n",pos,neg);
            return 0;
        }else if(n<0){
            neg++;
        }else{
            pos++;
        }
    }
	return 0;
}
