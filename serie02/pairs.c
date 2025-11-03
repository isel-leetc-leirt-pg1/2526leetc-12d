/**
 * Implementa o jogo da "memória" usando um array de caracteres
 * 
 * Build:
 *   gcc -o pairs -Wall pairs.c utils.c
 */

#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

#define MAX_LETTERS ('Z' -'A' + 1) 
#define MAX_SIZE (MAX_LETTERS * 2)
#define MIN_SIZE 4

// estados de uma célula do tabuleiro
#define VISIBLE 1
#define HIDDEN  2
#define REMOVED 3

typedef struct {
    int  state;     // estado
    char letter;    // a letra presente na célula
} cell_t;

typedef cell_t board_t[MAX_SIZE];

/**
 * Constrói um tabuleiro de dimensão "size"
 * com pares de letras iguais de "A" a "A" + size -1
 * distribuídas aleatoriamente pelo tabuleiro
 */
void board_init_random(board_t board, int size) {
   // TODO
}

/**
 * Apresenta a linha com as posições do tabuleiro (de 1 a size)
 */
void board_show_header(int size) {
    // TODO
}

/**
 * Mostra as células do tabuleiro
 *  - se escondidas com "x"
 *  - se vazias (letra removida) com "."
 *  - se visíveis a letra correspondente
 */
void board_show_cells(const board_t board, int size) {
  // TODO
}



/**
 * Executa uma jogada do jogador humano.
 * 
 * - O jogador humano selecciona um par de posições (de 1 a "size").
 * As posições têm de ser diferentes e referir células não removidas.
 * 
 * - O tabuleiro é apresentado com as letras seleccionadas visíveis, esperando 3 segundos
 *   Para a espera de 3 segundos use a função "freeze" presente em utils.c
 * 
 * - Caso seja  identificado um par de letras iguais, remove-as do tabuleiro
 *   senão volta a esconder as letras.
 * - volta a apresentar o tabuleiro.
 * 
 * - Retorna "true" se foram removidas letras do tabuleiro, e "false" caso contrário.
 */
bool board_play(board_t board, int size) {
    // TODO
    return false;
}


int main() {
    // TODO
    return 0;
}