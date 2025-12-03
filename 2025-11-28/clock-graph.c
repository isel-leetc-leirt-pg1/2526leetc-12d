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
    char texto[30];

    sprintf(texto, "%02d:%02d:%02d", time_info->tm_hour, 
                       time_info->tm_min,
                       time_info->tm_sec);

    graph_text(150,100, c_red, texto, LARGE_FONT);

}
int main(){
    graph_init2("Demo Clock", 400, 200);


    graph_regist_timer_handler(msg, 1000);
    graph_start();
    return 0;  
}