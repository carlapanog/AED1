void insertionsort(int vetor[], int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = vetor[i];
        j = i - 1;
        
        while (j >= 0 && vetor[j] > key)
        {
            vetor[j + 1] = vetor[j];
            j = j-1;
        }
        
        vetor[j + 1] = key;
    }

}
