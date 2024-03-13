#include <stdio.h>

int main()
{
    float a;
printf("dimmi quanti gradi fanno fuori");
scanf("%f", &a);
if(a == -273.15)
{
    printf("compà è lo zero assoluto");
}
else
{
    printf("in kelvin dovrebbe esse tipo %f", a + 273.15);
    float c;
    c = a * 9;
    float d;
    d = c / 5;
    printf("\ninvece in farenheit so tipo %f", d + 32.00000 );
}
} 