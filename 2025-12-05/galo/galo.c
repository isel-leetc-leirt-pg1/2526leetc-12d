#include <stdio.h>
#include <stdbool.h>

#define N_ELEM 25
#define EMPTY_CHAR '.'

// Inicializa o tabuleiro com o carater por defeito
void board_inic(char matrix[N_ELEM][N_ELEM]){
    for(int row=0; row<N_ELEM; row++)
      for (int col=0; col<N_ELEM; col++)
         matrix[row][col] = EMPTY_CHAR;
}


// Imprime o tabuleiro
void board_print(char matrix[N_ELEM][N_ELEM]){
    for(int row=0; row<N_ELEM; row++)
    {
      for (int col=0; col<N_ELEM; col++)
         putchar(matrix[row][col]);
      putchar('\n');
    }
  printf("\n");
}

// Verifica se o tabuleiro já tem todas as posicoes ocupadas (jogadas)
bool isFull(char mat[N_ELEM][N_ELEM]){
    for(int row=0; row<N_ELEM; row++)
      for (int col=0; col<N_ELEM; col++)
        if (mat[row][col]==EMPTY_CHAR)
          return false;

    return true;
}

int main(){
  char board[N_ELEM][N_ELEM];

  board_inic(board);
  board_print(board);

  board[1][1] = 'X';
  board_print(board);

  board[2][2] = '0';
  board_print(board);

  board[0][2] = 'X';
  board_print(board);
  printf("isFull: %d\n", isFull(board));

  puts("+++++++++++++++++++");

  char board2[N_ELEM][N_ELEM] = {{'X','0','X'},{'X','X','0'}, {'X','0','X'}};
  board_print(board2);
  printf("isFull: %d\n", isFull(board2));

  return 0;
}
