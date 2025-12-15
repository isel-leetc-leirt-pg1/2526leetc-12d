#include <stdio.h>

#include <pg/pglib.h>

Button btnNew;

void click(MouseEvent me){
  printf("%d %d\n", me.x, me.y);
  if (bt_selected(&btnNew, me.x, me.y))
    puts("OK");
  else
     puts("KO");
}

int main(){
   graph_init2("Card Board", 600, 400);

  int dia=25;
  char mes[]="Dezembro";
  char mystr[100];

  for (int i=0; i<=5; i++){
    sprintf(mystr, "Bom dia, %d de %s", dia+i, mes);
    graph_text2( 100, 50+i*50, c_yellow, c_green, mystr, LARGE_FONT );
  }

   // graph_regist_mouse_handler(click);
    graph_start();
    return 0;
}
