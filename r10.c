#include <stdio.h>


int Biggest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int biggestInRest = Biggest(arr, n - 1);
    return (arr[n - 1] > biggestInRest) ? arr[n - 1] : biggestInRest;
}

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Biggest element in the array is %d\n", Biggest(arr, n));
    return 0;
}