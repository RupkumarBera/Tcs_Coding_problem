#include<stdio.h>
#include<math.h>

unsigned long long  factorial(int n){
    if(n==0){
        return 1;

    }
    else{
        return n* factorial(n-1);
    }
}


int main(){
    int num;
  
    printf("Enter a  number :");
    scanf("%d",&num);
    
    if (num < 0){
    printf("FActorial does not exits");
    }
    else 
    {
        unsigned long long results = factorial(num);
        printf("the factorial %d is %llu" ,num,results);
    }
    return 0;
}