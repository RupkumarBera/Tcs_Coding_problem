#include<stdio.h>

int fibonacci(int num) {
    if (num <= 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   
    printf("Fibonacci sequence up to %d:\n", n);
    for (int i = 0; i <= n; i++) {
       
        if(n<fibonacci(i)){
            break;
        }
         printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
