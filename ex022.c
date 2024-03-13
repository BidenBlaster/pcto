#include <stdio.h>

int main()
{
   int pezzieffettivi = 1;
   float spesa;
   while(pezzieffettivi > 0)
  {
     printf("Numero pezzi: ");
     scanf("%d", &pezzieffettivi);
        if((pezzieffettivi > 30) && (pezzieffettivi < 50))
        {
             spesa = (5 * pezzieffettivi * 0.9);
        }
        else if(pezzieffettivi > 50)
        {
             spesa = (5 * pezzieffettivi * 0.85);
        }
        else 
        {
            spesa = (5 * pezzieffettivi);
        }
    printf("spesa: \n%f", spesa);
    
   }
} 
