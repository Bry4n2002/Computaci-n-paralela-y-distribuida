/**
 * Actividad : Practica de lenguaje c
 * Autor : Bryan Hernandez 
 * Fecha: 15 Agosto 2022
 *
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam_matriz;
    printf("Introduce el tamaño de la matriz: ");
    scanf("%d", &tam_matriz);
    if (tam_matriz > 8){
        printf("El tamaño de la matriz no puede ser mayor a 8");
    }
    else{
        
        int matriz1[tam_matriz][tam_matriz];
        int matriz2[tam_matriz][tam_matriz];
        //rellena la matriz
        for (int i = 0; i < tam_matriz; i++){
            for (int j = 0; j < tam_matriz; j++){
                matriz1[i][j] = rand() % 10;
                matriz2[i][j] = rand() % 10;
            }
        }

        //producto de las matrices
        int producto[tam_matriz][tam_matriz];
        for (int i = 0; i < tam_matriz; i++){
            for (int j = 0; j < tam_matriz; j++){
                producto[i][j] = matriz1[i][j] * matriz2[i][j];
            }
        }

        //muestra las matrices
        for (int i = 0; i < tam_matriz; i++){
            for (int j = 0; j < tam_matriz; j++){
                printf("%d ", matriz1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (int i = 0; i < tam_matriz; i++){
            for (int j = 0; j < tam_matriz; j++){
                printf("%d ", matriz2[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (int i = 0; i < tam_matriz; i++){
            for (int j = 0; j < tam_matriz; j++){
                printf("%d ", producto[i][j]);
            }
            printf("\n");
        }

        
        
    }
    return 0;
}