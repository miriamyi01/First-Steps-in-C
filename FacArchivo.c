#include<stdio.h>
/* Curso lenguaje C
Factorial (Archivos)
Reyes Mendoza Miriam Guadalupe */

int main(){
   int i, fact=1, num;
    /* Apuntador al
    archivo*/
    FILE *a;
    a=fopen("ResultadosFactorial.txt", "w");

   printf("\nIngresa un n%cmero: ", 163);
   scanf("%d", &num);

   if(num<0){
        fact=0;
   }
   else if(num==0){
        fact=1;
   }
   else{
       for (i=1; i<=num; i++){
            fprintf(a,"%d*%d=",fact ,i);
            fact = fact*i;
            fprintf(a, "%d\n", fact);
      }
   }
   printf("\n\tEl factorial de %d es: %d\n", num , fact);
   fclose(a);
   return 0;
}
