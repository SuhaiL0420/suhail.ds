#include <stdio.h>


int isPrime(int n, int i) {
    if (n <= 1) {
        return 0;
    }
    if (n <= 2) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    if (i * i > n) {
        return 1;
    }
    return isPrime(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num, 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}