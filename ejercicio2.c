/**
 * Actividad : Practica de lenguaje c
 * Autor : Bryan Hernandez 
 * Fecha: 15 Agosto 2022
 *
 * */
#include <stdio.h>


int main(){

    int days, anios, semana;

    printf(" Ingrese la cantidad de dias para convertirlo en años ");
    scanf("%d", &days);

    anios= days / 365 ;

    semana= (days % 365) / 7;
    
    days=(days % 365) % 7;
    printf(" ANIOS  : %d\n",anios);

    printf(" SEMANAS  : %d\n",semana);
    
    printf(" DIAS : %d\n",days);
}