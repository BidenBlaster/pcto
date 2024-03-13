#include <stdio.h>

int main()
{
    int num;
    int somma;
    int divisore;
    float media;
    num = 0;
    somma = 0;
    divisore = 0;
    media = 0;
while(num >= 0)
{
    printf("ïnserisci li numeri ");
    scanf("%d", &num);
    divisore++;
    somma = somma + num;
    media = (float)somma /divisore;
    if(num >= 0);
    {
        printf("%f\n", media);
    }
}
} 
