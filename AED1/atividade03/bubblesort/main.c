/*
    Nome:   Carla Lapa Nogueira
    Mat:    2215310004
    
    Bubblesort
*/

#include <stdio.h>
#include <time.h>
#include "bubblesort.c"

int main(int argc, char *argv[])
{
    //int vetor[] = {64, 34, 25, 12, 22, 11, 90, 87, 100, 01};
    //int vetor[] = {01, 11, 12, 22, 25, 34, 64, 87, 90, 100};
    //int vetor[] = {100, 90, 87, 64, 34, 25, 22, 12, 11, 01};
    
    int vetor[500000];
    int n = 500000;
    double start, finish, elapsed;

    // ler o vetor
    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
    
    // inicia o cronometro
    start = (double) clock() / CLOCKS_PER_SEC;

    bubblesort(vetor, n);
    
    // finaliza o cronometro
    finish = (double) clock() / CLOCKS_PER_SEC;
	
	// calcula o tempo
    elapsed = (double) finish - start;

	printf( "%f s \n", elapsed);
    /*
    printf("vetor ordenado: ");
    for (int i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
   */
    return 0;
}
