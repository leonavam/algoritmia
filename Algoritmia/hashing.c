#include "hashing.h"
#include <stdio.h>
#include <stdlib.h>

//Inicia toda la tabla a -1
void init(myreg myTable[], int tam){
    for(int i=0; i< tam; i++){
        myTable[i].key = FREE;
    }
}

int H(int id, int tam){
    return (id%tam);
}

void insert(myreg myTable[], myreg reg, int tam){
    int pos;

    pos = H(reg.key, tam);
    if(myTable[pos].key == FREE || myTable[pos].key == DELETED){
        myTable[pos] = reg;
    }else{
        printf("Colision\n");   //Aquí se debe implementar la prueba de colisiones
    }

}


int search(myreg myTable[], int id, int tam){
    int pos;

    pos = H(id, tam);
    
    if(myTable[pos].key == FREE) return -1; //No existe para de buscar
    if(myTable[pos].key == id) 
        return pos;
    else{
        printf("Colision\n");
        return -1;  //Cambiar según estrategia de colisión
    }


}


int removeReg(myreg myTable[], int id, int tam){
    int pos;
    pos = search(myTable, id, tam);

    if(pos != -1){
        myTable[pos].key = DELETED;
        return 1; //1-> true    0-> false
    }else{
        return 0;
    }
}


float loadFactor(myreg myTable[], int tam){
    int n_full = 0;
    for (int i = 0; i < tam; i++){
        if(myTable[i].key != DELETED && myTable[i].key != FREE)
            n_full++;
    }

    return ((float) n_full/tam);
}

void show(myreg myTable[], int tam){
    
    for(int i = 0; i < tam; i++){
        printf("%d | ", myTable[i].key);        
    }
    printf("\n");
    
}

