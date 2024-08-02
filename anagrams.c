/*anagrams in c*/
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str1="lisent";
//     char str2="silent";
//     int len1=strlen(str1);
//     int len2=strlen(str2);
    
//     for(int i=0;i<len1;i++){
//         for(int j =0;j<len2;j++){
//             if(i==j){
//                 printf("matched");
//                   return 0;
//             }
            
//         }
    
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char* str1, char* str2) {
   
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; str1[i] && str2[i]; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
