/*Write a program to determine and print the sum of the following harmonic series for a
given value of n:
LO 4.4
1+ 1/2 +1/3 +....+ 1/n
The value of n should be given interactively through the terminal.*/
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Harmonic series sum up to %d terms = %.3f\n", n, sum);

    return 0;
}
