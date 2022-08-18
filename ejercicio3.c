/**
 * Actividad : Practica de lenguaje c
 * Autor : Bryan Hernandez 
 * Fecha: 15 Agosto 2022
 *
 * */
#include <stdio.h>

float calcular_distancia(float numero){
    float resultado = 0;
    int i = 0;
    while(resultado*resultado < numero){
        resultado += 0.1;
        i++;
    }
    return resultado;
}




int main()
{
    int num_x1, num_x2, num_y1, num_y2;
    printf("Introduce la coordenada x del primer punto: ");
    scanf("%d", &num_x1);
    printf("Introduce la coordenada y del primer punto: ");
    scanf("%d", &num_y1);
    printf("Introduce la coordenada x del segundo punto: ");
    scanf("%d", &num_x2);
    printf("Introduce la coordenada y del segundo punto: ");
    scanf("%d", &num_y2);
    float result = calcular_distancia((num_x1-num_x2)*(num_x1-num_x2)+(num_y1-num_y2)*(num_y1-num_y2));
    printf("La distancia entre los dos puntos es: %f", result);
 
    return 0;
}