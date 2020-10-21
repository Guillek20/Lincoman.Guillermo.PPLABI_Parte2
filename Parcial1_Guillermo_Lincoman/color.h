#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int idColor;
    char nombreColor[20];
}eColor;




#endif // COLOR_H_INCLUDED
int mostrarColores(eColor color[], int tam);
void mostrarColor(eColor color);
