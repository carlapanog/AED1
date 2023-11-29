/*
    Nome:   Carla Lapa Nogueira
    Mat:    2215310004
    
    Mergesort
*/

#include <stdio.h>
#include <time.h>
#include "mergesort.c"

int main() 
{
    	//int arr[] = {64, 34, 25, 12, 22, 11, 90};
    	//int tamanho = sizeof(arr) / sizeof(arr[0]);
    	
	int vetor[500000];
    	int n = 500000;
    	double start, finish, elapsed;

    	// ler o vetor
    	for (int i = 0; i < n; i++)
        	scanf("%d", &vetor[i]);
    
    	// inicia o cronometro
    	start = (double) clock() / CLOCKS_PER_SEC;

    	mergeSort(vetor, 0, n - 1);
    
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
