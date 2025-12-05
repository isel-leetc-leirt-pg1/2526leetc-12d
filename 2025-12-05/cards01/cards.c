#include <pg/pglib.h>
#include "cards.h"
#define N_COLORS 5

CARD cards[ROWS][COLS];

RGB colors[N_COLORS];

void colors_inic(){
   colors[0] = c_red;
   colors[1] = c_orange;
   colors[2] = c_blue;
   colors[3] = c_green;
   colors[4] = c_yellow;
}
void card_inic(CARD *card, int row, int col){
  card->rect.p.x = row*CARD_WIDTH;
  card->rect.p.y = col*CARD_HEIGHT;
  card->rect.sz.width = CARD_WIDTH;
  card->rect.sz.height = CARD_HEIGHT;
  card->color = colors[(row+col) % N_COLORS];
}
void deck_inic(){
  for (int row=0; row<ROWS; row++) 
    for (int col=0; col<COLS; col++) 
      card_inic(&cards[row][col], row, col);
}

void deck_show(){
  for (int row=0; row<ROWS; row++)                  //linhas
    for (int col=0; col<COLS; col++){               // colunas
      CARD card = cards[row][col];
      graph_rect(card.rect.p.x, card.rect.p.y, card.rect.sz.width, card.rect.sz.height, 
                 card.color, true);
    }

}

int main(){
    graph_init2("Card Board", WINDOW_WIDTH, WINDOW_HEIGH);
    colors_inic();
    deck_inic();
    deck_show();
    graph_start();
    return 0;
}
