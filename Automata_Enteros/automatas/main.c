//
//  main.c
//  automatas
//
//  Created by Matias Berenson on 26/04/2019.
//

#include <stdio.h>
int columna(char);
int reconoceLaCadena(char[100]);

#define estadoDeRechazo 4

int estado = 0;
//char cadena[100] = {"+123"};
int i = 0;

int Matriz[5][4] = {{2,3,1,4},
                    {4,4,4,4},
                    {4,3,4,4},
                    {4,3,3,4},
                    {4,4,4,4}};

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
    
    char cadena[100];
    printf("Ingrese una cadena de enteros:\n");
    scanf("%s", cadena);
    
    if (reconoceLaCadena(cadena) == 1)
        printf("El autómata RECONOCE la cadena \n");
    else
        printf("El autómata NO RECONOCE la cadena \n");

}

//Devuelve la posicion de la columna en la matriz
int columna(char c)
{
    if(c == '+' || c=='-')
    {
        return 0;
    }
    if(c >= '1' && c <= '9')
       {
           return 1;
       }
       if(c == '0')
       {
           return 2;
       }
       return 3;
}

int reconoceLaCadena(char cadena[100]) {
    while (cadena[i] != '\0' && estado != estadoDeRechazo) {
        estado = Matriz[estado][columna(cadena[i])];
        printf("%d\n", estado);
        i++;
    }
    return estado == 1 || estado == 3;
}
