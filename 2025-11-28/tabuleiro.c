#include <pg/pglib.h>

#define BOARD_WIDTH 800
#define BOARD_HEIGHT 800

#define N_ROWS 8
#define N_COLS 8

#define SIZE_X  (BOARD_WIDTH/N_COLS)  // 100
#define SIZE_Y (BOARD_HEIGHT/N_ROWS) // 100

int main(){
    graph_init2("Chess Board", BOARD_WIDTH, BOARD_HEIGHT);

    for (int row=0; row<N_ROWS; row++) //linhas
        for (int col=0; col<N_COLS; col++){ // colunas
            RGB color = (row+col)%2==0 ? c_orange : c_green;
            graph_rect(SIZE_X*col, row*SIZE_Y, SIZE_X, SIZE_Y,
                           color, true);
        }

    graph_start();
    return 0;
}
