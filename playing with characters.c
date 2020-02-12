# https-www.hackerrank.com-challenges-playing-with-characters-problem
Playing With Characters
#include "stdio.h"
main()
{
    char ch,s[20],sen[100];
    scanf("%c",&ch);
    printf("%c",ch);
    scanf("%s",s);
    printf("\n%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("\n%s",sen);
}
