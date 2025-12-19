// Altura dos componentes principais

// header
#define HEADER_HEIGHT 70

// btnNew
#define BTNNEW_LEFT 30
#define BTBNEW_TOP 15

// cntAttempts
#define CNTATTEMPTS_LEFT (BTNNEW_LEFT+200)
#define CNTATTEMPTS_TOP (BTBNEW_TOP+7)

// board
#define BOARD_HEIGHT 450

// window
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT (HEADER_HEIGHT+BOARD_HEIGHT)

// clk_clock
#define CLKCLOCK_LEFT  (WINDOW_WIDTH-130)
#define CLLCLOCK_TOP   (CNTATTEMPTS_TOP-8)



// bordos do tabuleiro
#define BORDER_LEFT 12
#define BORDER_RIGHT BORDER_LEFT
#define BORDER_TOP 15
#define BORDER_BOTTOM BORDER_LEFT

#define BORDER_INSIDE 20

#define N_SECONDS 127
#define N_COLS 4

#define CARD_WIDTH (((WINDOW_WIDTH-BORDER_LEFT-BORDER_RIGHT) \
                   -(N_COLS-1)*BORDER_INSIDE)/N_COLS)

#define CARD_HEIGHT (((BOARD_HEIGHT-BORDER_TOP-BORDER_BOTTOM) \
                   -(N_COLS-1)*BORDER_INSIDE)/N_COLS)