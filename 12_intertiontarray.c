/*Interstion Two Array*/
#include<stdio.h>

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={3,4,5,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
     int size2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("Intertion of two array :");
     for(int i= 0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                printf(" %d",arr1[i]); 
                break;
            }
           
        }
     }
     printf("\n");
     return 0;
}