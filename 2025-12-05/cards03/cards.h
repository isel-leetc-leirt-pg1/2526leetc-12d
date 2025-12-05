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

void mouse_event_handler(MouseEvent me);
void colors_inic();
void card_inic(CARD *card, int row, int col);
void deck_inic();
void card_show(CARD card);
void deck_show();