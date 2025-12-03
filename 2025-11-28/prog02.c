#include <pg/pglib.h>

int main(){
    graph_init2("Demo de 28/11/2025", 400, 200);
    graph_triangle(150,150, 250,150, 200, 50, c_orange, false);
    graph_triangle(270,170, 390,120, 10, 190, c_orange, true);
    graph_start();
    return 0;  
}