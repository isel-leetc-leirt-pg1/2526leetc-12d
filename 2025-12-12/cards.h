#define ROWS 3
#define COLS 5

#define WINDOW_WIDTH 1000
#define WINDOW_HEIGH 800

#define CARD_WIDTH (WINDOW_WIDTH/ROWS)
#define CARD_HEIGHT (WINDOW_HEIGH/COLS)

typedef struct {
  Rect rect;
  RGB  color;
} CARD;
