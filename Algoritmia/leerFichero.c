#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leerFichero(char *nombre_fichero) {

    char linea[500]; // Para guardar la linea de cada fichero
    char *token;     // Para cada token de cada linea

    //Abrimos el fichero
    FILE *fp = fopen(nombre_fichero,"r");

    // Comprobar que no hay error al abrir
    if(fp == NULL){
            printf("Error de lectura del archivo");
            return -1;
    }

    // Recorremos cada linea del fichero
    while(fgets(linea,500,fp)!=NULL){
           printf("Linea leida: %s\n", linea);
           token = strtok(linea,";"); // Separamos cada linea por ","
           while (token != NULL){
                 printf("%s\n",token);
                 token = strtok(NULL, ";");  // Siguiente token en la linea (si quedan)
           }
           system("PAUSE");     // COMENTAR PARA EJECUCION REAL
    }
    return 0;
}

int main(int argc, char *argv[])
{

  leerFichero("listaActores.csv");
  system("PAUSE");
  return 0;
}
