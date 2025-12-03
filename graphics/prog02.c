#include <stdio.h>
#include "pg/pglib.h"
#define WINDOW_WIDTH 300
#define WINDOW_HEIGHT 200

int hours, minuts, secs;
void myTimerHandler() {
secs++;
if (secs == 60) {
secs = 0;
minuts++;
if (minuts == 60 ) {
minuts == 0;
hours = (hours + 1) % 24;
}
}
printf("%02d:%02d:%02d\r", hours, minuts, secs);
fflush(stdout); // esta função força os caracteres a serem escritos na consola
}
int main() {
graph_init2("Digital Clock", WINDOW_WIDTH, WINDOW_HEIGHT);
// regista a função “myTimerHandler”
// para ser chamada em cada segundo
graph_regist_timer_handler(myTimerHandler, 1000);
graph_start();
return 0;
}
