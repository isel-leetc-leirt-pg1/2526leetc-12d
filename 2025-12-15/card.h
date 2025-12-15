#include <pg/pglib.h>
typedef enum {UP, DOWN, OFF} STATUS;

typedef struct {
  Rect rect;
  STATUS status;
  RGB color;

  // e mais coisas...
} CARD;