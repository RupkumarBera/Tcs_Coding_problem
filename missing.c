/*Missing number in n numbers*/
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,7,8};
    int size =sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int actualsum=0;
    int missingnumber =0;
    for(int i=0;i<=size;i++){
        sum=sum+arr[i];
    }
    actualsum=((size+1)*(size+2))/2;  //sum of n number (n*(n+1))/2
    
    missingnumber=actualsum-sum;
    printf("Missing Number is %d",missingnumber);
    return 0;
}