#include<stdio.h>
int get_palindrome_time(char str[]) 
{ 
    int hh, mm; 
    hh = (str[0] - 48) * 10 + (str[1] - 48); 
    mm = (str[3] - 48) * 10 + (str[4] - 48); 
    int requiredTime = 0; 
    while (hh % 10 != mm / 10 || hh / 10 != mm % 10) 
    { 
      ++mm; 
      if (mm == 60) 
      { 
         mm = 0; 
         ++hh; 
       }  
        if (hh == 24) 
            hh = 0; 
      ++requiredTime; 
    } 
    return requiredTime; 
} 
int main() 
{ 
    char str[6];
    scanf("%s",str);
    printf("%d",get_palindrome_time(str)); 
} 