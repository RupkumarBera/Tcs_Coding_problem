#include<stdio.h>
#include<string.h>


int main(){
    char str[] = "Raam";
    int len = strlen(str);

    int count[256] = {0};

    for(int i=0;i<len ; i++){
        count[(unsigned char)str[i]]++;
    }
    for(int i=0;i<len;i++){
        if(count[(unsigned char)str[i]]==1){
            printf("The frist non-repeating character is %c\n",str[i]);
            return 0;
        }
    }
    printf("No- non repeating character found\n");
    return 0;
}
