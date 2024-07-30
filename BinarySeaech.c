/*Binary Search*/
// #include<stdio.h>

// int binarysearch ( int arr[],int left, int right ,int target){
//     if(right>=left){
//         int mid = left +(right-left)/2;

//         if(arr[mid]==target){
//             return mid;

//         }
//          if(arr[mid]>target){
//             return binarysearch(arr,left ,mid-1,target);

//         }
//           if(arr[mid]<target){
//             return binarysearch(arr,mid+1,right,target);

//         }
//         return -1;
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5 ,6};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     int  target = 5;
//     int result = binarysearch(arr,0,size-1,target);
//     if(result!= -1){
//         printf("Element persent at index %d\n",result);
//     }
//     else{
//         printf("Element not persent at array\n");
//     }
//     return 0;
// }

/*Itterative Method*/
#include<stdio.h>

int binarysearch(int arr[], int size,int target){
    int left =0;
    int right = size -1;

    while(left<=right){
    int mid= left +(right-left)/2;

    if (arr[mid] == target){
        return mid;
    }
    if (arr[mid]>target){
        right= mid-1;
    }
    else{
        left= mid+1;
    }
}
return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarysearch(arr, size, target);

    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in the array\n");
    }

    return 0;
}