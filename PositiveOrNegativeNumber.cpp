#include<stdio.h>
#include<conio.h>
main ()
{
int A;

printf("ingresa un valor: ");
scanf("%d",&A);
if (A<0) 
printf ("%d el numero es negativo",A);
else if (A>0)
printf ("%d el numero es positivo",A);
else if (A==0)
printf("el numero es cero");
getch();
}

