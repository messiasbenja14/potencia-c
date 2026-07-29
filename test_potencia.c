#include "function_potencia.c"
#include <stdio.h>
#include <assert.h>

int main(int argc, char const *argv[]) {
    assert(potencia(2, 2) == 4 && potencia(3, 3) == 27 && potencia(4, 4) == 256 && potencia(5, 5) == 3125);
    printf("Teste concluido com sucesso\n");

    return 0;
}
