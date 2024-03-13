#include <stdio.h>

int main()
{ 
    char b[50];
    printf("ïnserire cose da scrivere: ");
    scanf("%[^\n]s", b);
    int c = 0;
    while(b[c] != '\0')
    {
        if((b[c] >= 97) && (b[c] <= 122))
        {
            b[c] = b[c] - 32;
        }
        else if((b[c] >= 65) && (b[c] <= 90))
        {
            b[c] = b[c] + 32;
        }
    c++;
    }
printf("%s", b);
}