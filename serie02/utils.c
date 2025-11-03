#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include <stdbool.h>
#include <unistd.h>
 

/**
 * define uma nova semente (valor inicial) para o gerador pseudo-aleatório
 * relacionada com o tempo de calendário
 */
void random_init() {
    srand(time(NULL));
}

/**
 * retorna um valor aleatório dentro dos limites
 * especificados por parâmetro (intervalo fechado)
 */
int random_range(int start, int end) {
    return rand() % (end-start+1) + start;
}

 

/**
 * suspende o programa durante "secs" segundos, reposicionando
 * o cursor no início da linha
 */
void freeze(int secs) {
    fflush(stdout);
    printf("\r");
    sleep(secs);
}