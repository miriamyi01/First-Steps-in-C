#include<stdio.h>
/* Curso lenguaje C
Factorial (Ciclo FOR)
Reyes Mendoza Miriam Guadalupe */

int main(){
   int i;
   int fact=1;
   int num;

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
            fact = fact*i;
      }
   }
   printf("\n\tEl factorial de %d es: %d\n", num , fact);
   return 0;
}
