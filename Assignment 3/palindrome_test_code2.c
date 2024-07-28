#include<stdio.h>
#include<string.h>
int is_palindrome(char s[],char *str)
{
    // char str[1000];
    // strcpy(str,s);

    int len=strlen(s);
   for (int i = 0, j = len - 1; i <= j; i++, j--) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
 
    int result=strcmp(s,*str);
    if(result==0)
    {
        return 1;
    }
    else{
        return 0;
    }
  
}

int main()
{
    char s[1000];
    scanf("%s",s);
    int num=is_palindrome(s,s);
    if(num==1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}