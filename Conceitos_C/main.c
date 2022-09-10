#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    char s1[] ={"Hello, World!"};
    scanf("%[^\n]%*c", s);
    /*means that all the characters entered as the input, including the spaces, until we hit the enter button are stored in the variable, name;
    provided we allocate sufficient memory for the variable.*/
    printf("%s",s1);
    printf("\n");
    printf("%s",s);
    return 0;
}
