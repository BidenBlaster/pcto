#include <stdio.h>

int main()
{ 
  int a[5];
  printf("Inserire 5 numeri ");
 
 scanf("\n%d", &a[0]);
 scanf("\n%d", &a[1]);
 scanf("\n%d", &a[2]);
 scanf("\n%d", &a[3]);
 scanf("\n%d", &a[4]);
  
   
   int numero_stampe = 0;
   int narray = 0;
   int stampati = 0;
  while(stampati <= 4)
  {
    while(narray <= 4)
    {
      if(a[narray] == numero_stampe)
      {
        printf("\n%d", numero_stampe);
        narray++;
        stampati = stampati + 1;
      }
      else
      {
      narray++;
      }
      
    }
    narray = 0;
    numero_stampe++;
  }
}