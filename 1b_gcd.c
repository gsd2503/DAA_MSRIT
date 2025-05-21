// GCD using Consecutive Integer Checking method
#include <stdio.h>

int gcd(int a, int b) {
    int smaller = (a < b) ? a : b;  
    
    for (int i = smaller; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i; 
        }
    }
    return 1;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
