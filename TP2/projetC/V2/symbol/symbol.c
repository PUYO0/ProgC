#include "symbol.h"
//generate
#include "generator.h"
//mallo
#include <stdlib.h>
//printf
#include <stdio.h>

#define PREFIX "FR__"
#define SUFFIX "__"

char *symbol_new_symbol(void){
  int n = generator_generate();
  static char *buffer = NULL; // classe d'allocation de buffer devient statique
  if(buffer == NULL){
    buffer = malloc(81 * sizeof(char));
  }
  sprintf(buffer, "%s%d%s",PREFIX, n, SUFFIX);
  return buffer;
}