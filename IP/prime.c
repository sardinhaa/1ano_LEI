#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int limit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &limit);

    printf("Prime numbers between 1 and %d:\n", limit);

    for (int i = 1; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n\nTotal prime numbers: %d\n", count);

    return 0;
}
