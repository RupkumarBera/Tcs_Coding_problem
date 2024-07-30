/* Reverse Strings*/
#include<stdio.h>
#include<string.h>

int main(){
    char  str[4] = "Rup";
    char len=strlen(str);

    for(int i =len-1; i>=0;i--){
        printf(" %c",str[i]);



    }
    printf("\n");
    return 0;
}
