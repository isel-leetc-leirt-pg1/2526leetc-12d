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

   bt_create(&btnNew, 100, 150, "demo", c_red);
   bt_draw(&btnNew, true);

  graph_regist_mouse_handler(click);
    graph_start();
    return 0;
}
