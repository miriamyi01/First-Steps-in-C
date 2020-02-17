#include<stdio.h>
#include<stdlib.h>
/* Curso lenguaje C
Areas y perimetros
Reyes Mendoza Miriam Guadalupe */

int main(){
    int area, perimetro, base, altura;
    int opcion=0;
    char a=160,i=161;

    printf("Selecciona el n%cmero de la figura de la cual deseas calcular el %crea y el per%cmetro", 163, a ,i);
    printf("\n\t1. Tri%cngulo equil%ctero", a, a);
    printf("\n\t2. C%crculo", i);
    printf("\n\t3. Rect%cngulo", a);
    printf("\n\t4. Salir\n", a);
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            printf("\nDame la base: ");
            scanf ("%d", &base);
            printf("Dame la altura: ");
            scanf ("%d", &altura);
            perimetro=base*3;
            area=(base*altura)/2;
            break;

        case 2:
            printf("\nDame el radio: ");
            scanf ("%d", &base);
            perimetro=2*3.1416*base;
            area=3.1416*base*base;
            break;
        case 3:
            printf("\nDame la base: ");
            scanf ("%d", &base);
            printf("Dame la altura: ");
            scanf ("%d", &altura);
            perimetro=(2*base)+(2*altura);
            area=base*altura;
            break;

        case 4:
            return 0;
            break;

        default:
            printf("Opci%cn no v%clida \n", 162, a);
            return 0;
    }

    printf("\nSu per%cmetro es: %d", i, perimetro);
    printf("\nSu %crea es: %d\n", a, area);
}
