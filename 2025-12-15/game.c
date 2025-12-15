#include <stdio.h>
#include <pg/pglib.h>
#include "game.h"
#include "card.h"

Button  btnNew;        // Botão New do Header
Counter cntAttempts;   // Contador de tentativas
Clock   clk_clock;     // Relógio descendente

int size=N_COLS;         // Nº de células no tabuleiro (em coluna e em linha)
int countAttempts=20;    // Nº de tentativas ainda por realizar
int n_segs = N_SECONDS;  // Nº de segundos para jogar

CARD board[N_COLS][N_COLS];

void showHeader(){
   // Pintar o header
   graph_rect(0, 0, WINDOW_WIDTH, HEADER_HEIGHT, c_blue, true);

   // Criar o botão New
   bt_create(&btnNew, BTNNEW_LEFT, BTBNEW_TOP, "New", c_yellow);
   bt_draw(&btnNew, true);

   // Criar o contador de tentativas
   ct_create(&cntAttempts, CNTATTEMPTS_LEFT, CNTATTEMPTS_TOP, countAttempts, 
             "Remaining Attempts", MEDIUM_FONT);
   ct_show(&cntAttempts);

   // Criar o relógio
    clk_create_cron(&clk_clock, CLKCLOCK_LEFT, CLLCLOCK_TOP,
                     n_segs/60, n_segs%60, LARGE_CLOCK, c_red, c_cyan);
    clk_show(&clk_clock);

}


void showBoard(){
   graph_rect(0, HEADER_HEIGHT, WINDOW_WIDTH, BOARD_HEIGHT, c_green, true);

   for (int row=0; row<N_COLS; row++)
     for (int col=0; col<N_COLS; col++)
       graph_rect(board[row][col].rect.p.x,
                  board[row][col].rect.p.y,
                  board[row][col].rect.sz.width,
                  board[row][col].rect.sz.height,
                c_orange, true);
}

// Inicializa as estruturas do board
void inic_board(){
   for (int row=0; row<N_COLS; row++)
     for (int col=0; col<N_COLS; col++)
     {
      CARD card;
      card.rect.p.x = BORDER_LEFT+col*(CARD_WIDTH+BORDER_INSIDE);
      card.rect.p.y = HEADER_HEIGHT+BORDER_TOP+row*(CARD_HEIGHT+BORDER_INSIDE);
      card.rect.sz.width = CARD_WIDTH;
      card.rect.sz.height = CARD_HEIGHT;
      board[row][col]=card;
     }
 
}

void clockHandler(){
  n_segs--;
  
  clk_down_tick(&clk_clock);
  clk_show(&clk_clock);
}
int main(){
   graph_init2("Card Board", WINDOW_WIDTH, WINDOW_HEIGHT); 
   graph_regist_timer_handler(clockHandler, 1000);

   showHeader();
   inic_board();
   showBoard();

   graph_start();
   return 0;
}
