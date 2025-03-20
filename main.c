#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void determinarVv();    //Determina el valor de la cuota vencida y nos da una tabla
void determinarVa();    //Determina el valor de la cuota adelantada y nos da una tabla
void determinarCuota(); //Determina el valor de la cuota y nos da una tabla
void lineaSeparadora(int);

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
        printf("[ ATENCION, TODOS LOS VALORES SERAN TOMADOS COMO DECIMALES ]\n\n");
        determinarVv();
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
    //Declaracion de las variables
    double c,i,n;   //declaracion de variables que se usaran en un futuro
    double Vv;      //variable de resultado
    int contador;      //Contador que especifica la cantidad de veces que se imprimira la tabla

    printf("[ c ] Ingresa la cuota constante: ");
    scanf("%lf",&c);
    printf("[ i ] Ingresa la tasa de interes anual: ");
    scanf("%lf",&i);
    printf("[ n ] Ingrese el plazo del prestamo: ");
    scanf("%lf",&n);

    //formula para calcular el interes compuesto con cuota vencida
    Vv = (c * (pow((1 + i),n) - 1)) / (i * pow((1 + i),n));

    printf("%lf\t%lf\t%lf \n",c,i,n);
    printf("%.0lf\n",Vv);

    //Imprime la Cabecera de las tablas
    printf("%s%16s%11s %.0lf%%%16s%11s\n","Anio","Cuota Vencida","Interes",i * 100,"Amortizacion","Cuota");
    lineaSeparadora(65);
    //bucle for que se encargara de imprimir la tabla
    for(contador = 1; contador <= n; contador++)
    {
        printf("%3d%17.0lf%15.0lf%16.0lf%11.0lf",contador,Vv,Vv * i,Vv,c);
        printf("\n");
    }

}

void lineaSeparadora(int numeroDeLineas)
{
    for(int i = 1;i <= numeroDeLineas; i++)
    {
        printf("-");
    }
    printf("\n");
}
