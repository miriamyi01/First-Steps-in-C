#include<stdio.h>
/* Curso lenguaje C
Calculadora con Factorial
Reyes Mendoza Miriam Guadalupe */

int main(){

    /* Declaracion de variables
    (variables y caracteres especiales) */
    int num1, num2;
    char n=163, a=162;

    /* Lectura de datos
    (Numeros) */
    printf ("\nDame el primer n%cmero entero: ",n);
    scanf("%d", &num1);
    printf ("\nDame el segundo n%cmero entero: ",n);
    scanf("%d", &num2);

    /* Operaciones
    (Suma, resta, multiplicacion y division) */
    int suma=num1+num2;
    int resta=num1-num2;
    int multiplicacion=num1*num2;

    printf("\nLa suma es: %d", suma);
    printf("\nLa resta es: %d", resta);
    printf("\nLa multiplicaci%cn es: %d", a, multiplicacion);

     /*Agregar el factorial
    con su funcion*/
    factorial(num1);

    /*En caso de ser 0 se muestra al
    usuario un mensaje*/
    if (num2==0){
        printf("\nLa divisi%cn entre 0 no existe \n", a);
    }

    else{
        int division=num1/num2;
        int modulo=num1%num2;
        printf("\nLa divisi%cn es: %d", a, division);
        printf("\nEl m%cdulo es: %d \n", a, modulo);
    }
    return 0;
}


/*Funcion Factorial por el
Ciclo FOR*/
void factorial(int num1){
   int i, facto=1;

   if(num1<0){
        facto=0;
   }
   else if(num1==0){
        facto=1;
   }
   else{
       for (i=1; i<=num1; i++){
            facto = facto*i;
      }
   }
   printf("\nEl factorial de %d es: %d", num1, facto);
}
