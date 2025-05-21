// GCD using prime factorization
#include <stdio.h>

int gcd(int a, int b) {
    int gcd = 1;
    int i = 2;

    while (a > 1 && b > 1) {
        if (a % i == 0 && b % i == 0) {
            gcd *= i;
            a /= i;
            b /= i;
        } else if (a % i == 0) {
            a /= i;
        } else if (b % i == 0) {
            b /= i;
        } else {
            i++;
        }
    }
    return gcd;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
