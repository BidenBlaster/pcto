#include <stdio.h>

int main()
{
int a;
printf("dichiarare anno ");
scanf("%d", &a);
if((a % 4 == 0) && (a % 100 != 0))
{
    printf("è bisestile");
}
else if(a % 400== 0)
{
    printf("è bisestile");
}
else
{
  printf(" non è bisestile");  
}
} 