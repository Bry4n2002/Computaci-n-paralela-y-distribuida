/**
 * Actividad : Practica de lenguaje c
 * Autor : Bryan Hernandez 
 * Fecha: 15 Agosto 2022
 *
 * */
#include <stdio.h>


void crear_matriz(int n){
    
    if (n > 8){
        printf("El tamaño de la matriz no puede ser mayor a 8");
    }
    else{
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("1 ");
            }
            printf("\n");
        }
    }

}

int main()
{
    int n; 
    printf("Introduce el tamaño de la matriz: ");
    scanf("%d", &n);
    crear_matriz(n);
    return 0;
}