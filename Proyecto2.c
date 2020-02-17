#include<stdio.h>
/*PROYECTO FINAL
Reyes Mendoza Miriam Guadalupe */

int main(){
    int comida=0, bebida=0, postre=0;
    int ticket, a, b ,c;

    /* Apuntador al archivo
    "Ticket Electronico"*/
    FILE *t;
    t=fopen("Ticket.txt", "w");

    printf("Nuestro men%c incluye:", 163);
    printf("\n\t1. Comida");
    printf("\n\t2. Bebida");
    printf("\n\t3. Postre\n");

    printf("\nSelecciona la comida que desees: ");
    printf("\n\t1. Hamburgesa ____ $120");
    printf("\n\t2. Tacos ____ $100");
    printf("\n\t3. Alitas ____ $90");
    printf("\n\t4. Ninguna\n");
    scanf("%d", &comida);
    switch(comida){
        case 1:
            a=120;
        break;
        case 2:
            a=100;
        break;
        case 3:
            a=90;
        case 4:
            a=0;
        break;
        default:
            return main();
    }
    fprintf(t, "Comida: $%d",a);

    printf("\nSelecciona la bebida que desees: ");
    printf("\n\t1. Malteada ____ $60");
    printf("\n\t2. Refresco ____ $50");
    printf("\n\t3. Agua ____ $30");
    printf("\n\t4. Ninguna\n");
    scanf("%d", &bebida);
    switch(bebida){
        case 1:
            b=60;
        break;
        case 2:
            b=50;
        break;
        case 3:
            b=30;
        break;
        case 4:
            b=0;
        break;
        default:
            return main();
    }
    fprintf(t, "\nBebida: $%d",b);
    fprintf(t, "\n\tSubtotal: $%d",a+b);

    printf("\nSelecciona el postre que desees: ");
    printf("\n\t1. Pay ____ $60");
    printf("\n\t2. Helado ____ $35 ");
    printf("\n\t3. Crepas ____ $50");
    printf("\n\t4. Ninguna\n");
    scanf("%d", &postre);
    switch(postre){
        case 1:
            c=60;
        break;
        case 2:
            c=35;
        break;
        case 3:
            c=50;
        break;
        case 4:
            c=0;
        break;
        default:
            return main();
    }
    fprintf(t, "\n\nPostre: $%d",c);
    fprintf(t, "\n\n\tDesglose:\n\t  %d\n\t  %d\n\t  %d",a,b,c);

    ticket=a+b+c;
    fprintf(t, "\n\t\tTotal: $%d",ticket);
    printf("\nTu cuenta es de: %d\n", ticket);
    return 0;
}
