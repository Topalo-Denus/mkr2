#include <stdio.h>
#include <math.h>
int main(void){

float x,Fx;
printf ("edit x=");
scanf ("%f",&x);

if (x<= 2)
{
Fx=(x*2)+(5*x)-6;
printf ("\n(x<= 2)\n\n Fx=(x*2)+(5*x)-6");
}
else 
{
Fx=x+cos(x);
printf ("\nelse\n\n Fx=x+cos(x)");
}

printf ("\n\n Fx=%.1f",Fx);

return 0;
}