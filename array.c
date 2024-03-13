#include <stdio.h>

int main()
{
int a[5]={3, 18, 17, 21, 150};
int b = 0;
printf("%d\n", a[2]);
while(b < 5)
{
    printf("%d\n", a[b]);
    b++;
}
//array da [5] valori, si inizia a contare dallo 0 numero: numero 0,1,2,3,4
// la viarbile b mi permette di accedere a tutte le posizione dellárray in posizioni tra a e 4
char a(5)={'a', 'b', 'c', '\0'};//\0 è il carattere terminatore e ci permette di capire quando la stringa è finita
int b = 0;
while(b <= 4)
{
    printf("%c", a[b]);
    b++;
}
} 