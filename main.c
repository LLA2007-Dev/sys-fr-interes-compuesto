#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void determinarVv();    //Determina el valor de la cuota vencida y nos da una tabla
void determinarVa();    //Determina el valor de la cuota adelantada y nos da una tabla
void determinarCuota(); //Determina el valor de la cuota y nos da una tabla

//Declaracion de la fundion main
int main()
{
    int operacion;
    printf("Que operacion quieres realizar?\n\n");
    printf("[1] - Vv (valores con cuota vencida)\n");
    printf("[2] - Va (valores con cuota adelantada)\n");
    printf("[3] - C (determinar la cuota)\n");

    printf("\nQue operacion realizaremos: ");
    scanf("%d",&operacion);

    system("cls");

    //estructura de control para determinar que funcion vamos a usar
    switch(operacion){
    case 1:
        printf("DETERMINAR Vv ( VALORES DE CUOTA VENCIDA )\n");
        break;
    case 2:
        printf("DETERMINAR Va ( VALORES DE CUOTA ADELANTADA ) \n");
        break;
    case 3:
        printf("DETERMINAR C ( CUOTA ) \n");
        break;
    default:
        printf("No ah seleccionado ninguna operacion valida \nAdios \n");
        break;
    }


    return 0;
}
//Funcion para determinar el interes compuesto con cuotas vencidas
void determinarVv()
{

}
