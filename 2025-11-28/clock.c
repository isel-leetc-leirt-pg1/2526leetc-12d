#include <pg/pglib.h>
#include <stdio.h>
#include <time.h>

void msg(){
    // Obter o nº de segundo desde o principio dos tempos da informática
    time_t epoch_time;
    time(&epoch_time);
   
    // Converter para HH:MM:SS
    struct tm *time_info;
    time_info = localtime(&epoch_time);

    printf("%02d:%02d:%02d\n", time_info->tm_hour, time_info->tm_min,
                       time_info->tm_sec);
    fflush(stdout);

}
int main(){
    graph_init2("Demo Clock", 400, 200);

    graph_regist_timer_handler(msg, 1000);
    graph_start();
    return 0;  
}