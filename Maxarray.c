/*Find maximum array element*/

#include<stdio.h>

int main(){
    int arr[]={4,5,9,7,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = 0; 
    for(int i =0; i<size;i++){
        if(arr[i]>max){
            max= arr[i];
            
        }
       
    }
     printf("The Max Element is %d",max);
    return 0;
}