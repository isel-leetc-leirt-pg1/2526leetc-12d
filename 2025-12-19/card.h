#include <pg/pglib.h>
typedef enum {UP, DOWN, OFF} STATUS;

typedef enum {RECTANGLE=6, CIRCLE, TRIANGLE=-4} IMAGE;


typedef struct {
  Rect rect;
  STATUS status;
  RGB color;

  // e mais coisas...
} CARD;