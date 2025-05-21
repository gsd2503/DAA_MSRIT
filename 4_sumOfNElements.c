// Sum of N elements input given by the user
#include <stdio.h>
#include <time.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    clock_t start = clock();  

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    clock_t end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Sum of the elements: %d\n", sum);
    printf("Time taken to calculate the sum: %f seconds\n", time_taken);

    return 0;
}
