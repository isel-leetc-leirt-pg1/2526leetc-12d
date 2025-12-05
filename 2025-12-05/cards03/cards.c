#include <pg/pglib.h>
#include "cards.h"

#define N_COLORS 5

CARD cards[ROWS][COLS];
RGB colors[N_COLORS];


int get_index_of_color(RGB color){
  for (int i=0; i<N_COLORS; i++)
    if (colors[i]==color)
      return i;
  return -1;
}
void mouse_event_handler(MouseEvent me){
  int row = me.x / CARD_WIDTH;
  int col = me.y / CARD_HEIGHT;

  printf("x=%d y=%d row=%d col=%d colorIndex=%d\n", me.x, me.y, row, col, get_index_of_color(cards[row][col].color));

  int index_color = get_index_of_color(cards[(row+col)%ROWS]->color);

  // Se for MOUSE_LEFT -> Próxima cor
  if (me.button==BUTTON_LEFT && me.state==BUTTON_CLICK)
    index_color = (index_color+1)%N_COLORS;
  else // Cor anterior 
    if (me.button==BUTTON_RIGHT)
      index_color = (index_color-1)%N_COLORS;
    else
       return;
  
 
  cards[row][col].color = colors[index_color];
  card_show(cards[row][col]);
}


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

void card_show(CARD card){
  graph_rect(card.rect.p.x, card.rect.p.y, card.rect.sz.width, card.rect.sz.height, card.color, true);
}

void deck_show(){
  for (int row=0; row<ROWS; row++)
    for (int col=0; col<COLS; col++)
      card_show(cards[row][col]);
}

int main(){
    graph_init2("Card Board", WINDOW_WIDTH, WINDOW_HEIGH);
    colors_inic();
    deck_inic();
    deck_show();

    graph_regist_mouse_handler(mouse_event_handler);

    graph_start();
    return 0;
}
