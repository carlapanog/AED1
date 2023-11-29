/*
    Nome:   Carla Lapa Nogueira
    Mat:    2215310004
    
    InsertionSort
*/

#include <stdio.h>
#include <time.h>
#include "insertionsort.c"

int main(int argc, char** argv)
{
	int vetor[200000];
    	int n = 200000;
    	double start, finish, elapsed;

    	// ler o vetor
    	for (int i = 0; i < n; i++)
        	scanf("%d", &vetor[i]);
    
    	// inicia o cronometro
    	start = (double) clock() / CLOCKS_PER_SEC;

    	insertionsort(vetor, n);
    
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

