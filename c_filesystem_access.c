#include <stdio.h>
#include <time.h>

int main() {

    volatile long long sum = 0;

    clock_t start, end;

    start = clock();

    for(long long i = 1; i <= 100000000; i++) {
        sum += i;
    }

    end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sum: %lld\n", sum);
    printf("Execution time: %f seconds\n", time_taken);

    return 0;
}
