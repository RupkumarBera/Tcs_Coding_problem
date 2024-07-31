/*Sum of  all  number give */
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "12345";
    int len = strlen(str);
    int sum =0;
    for(int i =0;i<=len ;i++){
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;

}