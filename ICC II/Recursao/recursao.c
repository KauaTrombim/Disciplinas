#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showTime(){
    struct timespec ts;
    struct tm *info_hora;

    clock_gettime(CLOCK_REALTIME, &ts);
    info_hora = localtime(&ts.tv_sec);

    printf("Hora atual: %02d:%02d:%02d.%03ld\n",
           info_hora->tm_hour,
           info_hora->tm_min,
           info_hora->tm_sec,
           ts.tv_nsec / 1000000);
}

void somatorio(int *res, int n){
    if(n <= 0 ) return;

    *res += n;
    somatorio(res, n-1);

}

void fatorial(int *res, int n){
    if(n <= 1 ) return;

    *res *= n;
    fatorial(res, n-1);
}

int main() {
    int *soma = (int *) calloc(1, sizeof(int));
    int *fato = (int *) calloc(1, sizeof(int));

    showTime();
    somatorio(soma, 100);
    printf("Total: %d\n", *soma);
    showTime();
    printf("Total Final: %d\n\n", *soma);
    *fato = 1;
    showTime();
    fatorial(fato, 50);
    printf("Fatorial: %d\n", *fato);
    showTime();


    return 0;
}
