#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    // Read the number of elements
    if (scanf("%d", &n) != 1) {
        return 1; // Input error
    }

    // Handle non-positive array size
    if (n <= 0) {
        return 0;
    }

    // Allocate memory on the heap
    int *a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        return 1; // Memory allocation failed
    }

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array using qsort
    qsort(a, n, sizeof(int), compare);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n"); // Add a final newline for good practice

    // Free the allocated memory
    free(a);

    return 0;
}
