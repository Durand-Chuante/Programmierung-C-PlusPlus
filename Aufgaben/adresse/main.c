#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main()
{
    int i = 32;
    char c;
    char s[30];

    printf("entrez un nombre: ");
    scanf("%i", &i);
    printf("le nombre i est: %d\n", i);
    printf("entrez un charactere: ");
    scanf("%c", c);
    printf("le characterer est: %c\n", c);
    printf("entrez une chaine de charactere. ");
    scanf("%29s", &s[0]);
    printf("la chaine de characterer est: %s", &s);
    return 0;
}
