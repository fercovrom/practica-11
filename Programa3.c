/*Fernando Covarrubias Romero
Las variables globales en C*/

#include <stdio.h>
int resultado; 
void multiplicar(); 
int main()
{
multiplicar(); 
printf("%i",resultado);
return 0;
}
void multiplicar() 
{
resultado = 5 * 4;
}
