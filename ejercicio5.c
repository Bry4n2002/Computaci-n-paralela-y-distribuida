/**
 * Actividad : Practica de lenguaje c
 * Autor : Bryan Hernandez 
 * Fecha: 15 Agosto 2022
 *
 * */

#include <stdio.h>

void crear_piramide(int cantidad_lineas){
    if (cantidad_lineas > 14){
        printf("El numero de lineas no puede ser mayor a 14");
    }
    else{        
        
        int i = 0;
            while(i < cantidad_lineas){
            int j = 0;
            while(j < i+1){
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
    }

}


int main()
{
   
    int lineas;
    
    printf("Introduce la cantidad de lineas del triangulo: ");
    scanf("%d", &lineas);
    
    crear_piramide(lineas);
    
    return 0;
}