#include <stdio.h>

int main()
{
int a;
printf("dichiarare numero ");
scanf("%d", &a);
if((a % 1 == 0) && (a % a == 0))
{
}
else if((a % 3 == 0) || (a % 7 == 0) || (a % 5 == 0) || (a % 2 == 0))
{
    printf("non è primo");
}
}