#include "generator.h"
#define INITIAL_VALUE 0 // constante symbolique : macro constante / directive pour le préprocesseur

int generate(void){
    static int val = INITIAL_VALUE;
    return val++;
}