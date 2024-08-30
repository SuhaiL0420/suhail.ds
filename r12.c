#include <stdio.h>

int recursiveSeries(int n) {
    if (n == 1 || n == 2 || n == 3) {
        return 1;
    } else {
        return recursiveSeries(n-1) + recursiveSeries(n-2) + recursiveSeries(n-3);
        
    }
    
}


int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The series is: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", recursiveSeries(i));
    }
    
    return 0;
}