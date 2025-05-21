// Fibonacci series till n Numbers and time taken to generate them 
#include <stdio.h>
#include <time.h>

int main() {
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    clock_t start = clock();  

    long long a = 0, b = 1, c;

    printf("Fibonacci Series: %lld %lld ", a, b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%lld ", c);
        a = b;
        b = c;
    }
    printf("\n");

    clock_t end = clock(); 

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to generate Fibonacci series: %f seconds\n", time_taken);

    return 0;
}
