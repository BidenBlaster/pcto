#include <stdio.h>

int main()
{
    printf("ïnserire cose:");
char parola[25];// nella memoria vengono bussati 30 caratteri, in questo caso il programma mette automaticamente \0
scanf("%[^\n]s", parola); //niente &parola, %[^\n]s serve per includere gli space,l apice non è ˆ ma ^ 
//respiri piano per non fare rumore ti addormenti ti sera e ti risvegli col sole
printf("%s\n", parola);
}
// char *a =""fifone