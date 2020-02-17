#include<stdio.h>
/* Curso lenguaje C
Area de un triangulo
Reyes Mendoza Miriam Guadalupe */

int main(){

    /* Declaracion de variables
    (variables y caracteres especiales) */
    int base, altura, area;
    char n=164, a=160;

    /* Lectura de datos
    (base y altura) */
    printf ("\nDame el tama%co de la base: ",n);
    scanf("%d", &base);

    printf ("Dame el tama%co de la altura: ",n);
    scanf("%d", &altura);

    /* Impresion del resultado
    (Area del triangulo) */
    area = (base*altura)/2;
    printf("\nEl %crea del tri%cngulo es: %d \n",a, a, area);
    return 0;
}
