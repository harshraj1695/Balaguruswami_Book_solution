
/*Write a program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise).
 * */
#include <stdio.h>
#include <math.h>

int main() {
    double n;
    printf("Enter the amount in rupees:\n");
    scanf("%lf", &n);

    long long paisa = llround(n * 100);

    if (fabs(n * 100 - paisa) > 0.000001) {
        printf("Wrong input format (more than 2 decimal places)\n");
        return 0;
    }

    printf("Entered amount in paisa: %lld\n", paisa);
    return 0;
}

