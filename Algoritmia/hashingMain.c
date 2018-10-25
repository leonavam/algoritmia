#include "hashing.h"
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){

    myreg myHash[TAM];  //cada ejerciccio es una tabla hash

    myreg reg1, reg2, reg3;

    reg1.key = 10;
    reg2.key = 5;
    reg3.key = 11;



    init(myHash, TAM);
    insert(myHash, reg1, TAM);
    insert(myHash, reg2, TAM);
    insert(myHash, reg3, TAM);

    show(myHash,TAM);
    printf("\n");

    removeReg(myHash, 10, TAM);

    show(myHash,TAM);

    int pos = search(myHash, 11, TAM);
    printf("El valor 11 esta en la pos %d de la tabla\n", pos);

    return 0;
    
}