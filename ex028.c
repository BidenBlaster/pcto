#include <stdio.h>

int somma(int a, int b)
{
   return a + b;
}
int sottrazione(int c, int d)
{
   return c - d;
}
int prodotto(int e, int f)
{
   return e * f;
}
int quoziente(int g, int h)
{
   return g / h;
}
int main()
{
   
    int num;
    int numb;
    printf("Inserire 2 numeri ");
    scanf("%d", &num);
    scanf("%d", &numb);

    int risultato;
    int risultatos;
    int risultatod;
    int risultatom;
    risultato = somma(num, numb);
    risultatos = sottrazione(num, numb);
    risultatod = prodotto(num, numb);
    risultatom = quoziente(num, numb);
     printf("%d\n", risultato);
      printf("%d\n", risultatos);
       printf("%d\n", risultatod);
        printf("%d\n", risultatom);

}