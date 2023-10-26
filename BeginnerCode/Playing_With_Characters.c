#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch);
    char s[500];
    scanf("%s", s);
    printf("%s\n",s);
    char str[500];
    scanf("\n");
    scanf("%[^\n]", str);
    printf("%s\n",str);
    return 0;
}
