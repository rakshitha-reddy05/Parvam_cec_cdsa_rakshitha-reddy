#include<stdio.h>
#include<string.h>
int main()
{
    char str[20], rev[20];
    printf("entre any word:");
    scanf("%s", str);
    printf("original string: %S\n",str);
    strcpy(rev,str);
    strrev(str);
    printf("reservsed string:%s\n",str);
    if (strcmp(str,rev)==0)
    {
        printf("the given word is a palindrome");
    }
    else
    {
    printf("the given word is not a palindrome");
    }
}