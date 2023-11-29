/*
    Nome:   Carla Lapa Nogueira
    Mat:    2215310004
    
    Quicksort
*/

#include <stdio.h>
#include <time.h>
#include "quicksort.c"

int main(int argc, char *argv[])
{
    	//int arr[] = {64, 34, 25, 12, 22, 11, 90};

        int vetor[500000];
    	int n = 500000;

    	double start, finish, elapsed;

    	// ler o vetor
    	for (int i = 0; i < n; i++)
        	scanf("%d", &vetor[i]);
    
   	// inicia o cronometro
    	start = (double) clock() / CLOCKS_PER_SEC;

	quicksort(vetor, 0, n - 1);
    
    	// finaliza o cronometro
    	finish = (double) clock() / CLOCKS_PER_SEC;
	
	// calcula o tempo
    	elapsed = (double) finish - start;

	printf( "%f s \n", elapsed);
	
	//printf("Matriz original: \n");

   	//imprimirMatriz(arr, tamanho);

   	//printf("Matriz ordenada: \n");
  	//imprimirMatriz(arr, tamanho);
  	
	return 0;
}
