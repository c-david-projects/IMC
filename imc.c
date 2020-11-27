#include <stdio.h>
int main()
{
 float altura;
 float peso;
 float IMC;
 printf("Introduza a sua altura: ");
 scanf("%f",&altura);
 printf("Introduza o seu peso: ");
 scanf("%f",&peso);
 IMC = peso/(altura*altura);
 printf("%.2f",IMC);

}