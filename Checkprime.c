/* Check prime or not */
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("The number is prime \n");
    }
    else{
        printf("The number is not a prime :");
    }

    return 0;
}