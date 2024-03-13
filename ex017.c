#include <stdio.h>

int main()
{
    int c;
    int a;
    int b;
printf("dimme er primo lato ");
scanf("%d", &a);
printf("dimmene l artro ");
scanf("%d", &b);
printf("dimme l urtimo lato ");
scanf("%d", &b);
if(( a == c) && (a == b) && (b == c))
{
    printf("si sono de n triangolo equilatero");
}
else if((a =! b) && (a =! c) && (c =! b))
{
    printf("sono de n triangolo sccaleno");
}
else
{
    printf("sono de n triangolo isoscele");

} 
}