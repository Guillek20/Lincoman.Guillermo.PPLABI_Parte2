#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "moto.h"
#include "tipo.h"
#include "servicio.h"
#include "color.h"
#include "trabajo.h"
#include "fecha.h"

int mostrarColores(eColor color[], int tam)
{
    int error=1;//comienza con un error hasta que la funcion dia lo contrario

    if(color!= NULL && tam > 0)//verifica que el primer dato sea un vector y el segundo el tamaño mayor a 0
    {

        printf("      Id     |        Color \n");
        printf(" ---------------------------\n");
        for(int i=0; i<tam; i++)//analiza el tamaño del vector
        {
            mostrarColor(color[i]);
        }
        error= 0;//Una vez verificado que sea un vector de tamaño mayor a 0 devuelvo 0 errores
    }

    return error;
}

void mostrarColor(eColor color)
{
    printf("    %5d      %12s\n", color.idColor ,color.nombreColor);//Imprime los datos de las motos segun su posicion en el vector
}
