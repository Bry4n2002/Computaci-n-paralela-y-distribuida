/**
 * Actividad : Practica de lenguaje c
 * Autor : Bryan Hernandez 
 * Fecha: 15 Agosto 2022
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Introduce el tamaño de la matriz: ");
    scanf("%d", &n);
    if (n > 8){
        printf("El tamaño de la matriz no puede ser mayor a 8");
    }
    else{
        srand(time(NULL));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%d ", rand() % 10);
            }
            printf("\n");
        }
    }
    return 0;
}