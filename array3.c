#include <stdio.h>

int main()
{
char parola(4)={'c','i','a','o','\0'}; 
int b = 0;
scanf("%c", &parola[b]);
while(parola[b] != '\0')
{
    printf("%c", parola[b]);
    b = b + 1;
}
//b = 0;
//while(parola[b] != '\0')
//{}
} 