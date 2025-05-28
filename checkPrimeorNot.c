// Check given number is prime or not
#include <stdio.h>
#include <time.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    clock_t start, end;
    double time_taken;

    printf("Enter a number: ");
    scanf("%d", &num);

    start = clock();
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %lf seconds\n", time_taken);

    return 0;
}
