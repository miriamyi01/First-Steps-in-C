#include<stdio.h>
/* Curso lenguaje C
Factorial (Ciclo WHILE)
Reyes Mendoza Miriam Guadalupe */

int main(){
    int num,fact,i;
    i=1;
    fact=1;

    printf("\nDame el n%cmero para el factorial: ", 163);
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("\n\tEl factorial de %d es: %d\n", num, fact);

    return 0;
}
