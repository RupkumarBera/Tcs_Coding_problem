/*Palindrom Check*/
#include<stdio.h> 
#include<string.h>

int main(){
    char str[]="1234321";
    int len = strlen(str);
    int ispalindrom=1;
    for(int i =0;i<len/2;i++){
        if(str[i]!= str[len-1-i]){
            ispalindrom=0;
            break;
        }
    }
    if( ispalindrom){
        printf(" The string is plindrom \n");
    }
    else{
         printf(" The string is not plindrom \n");
    }
    return 0;
}