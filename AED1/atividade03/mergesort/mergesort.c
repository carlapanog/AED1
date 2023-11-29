// Função para mesclar dois subarrays de arr[]
// O primeiro subarray é arr[baixo..meio]
// O segundo subarray é arr[meio+1..alto]
void merge(int arr[], int baixo, int meio, int alto) {
    int i, j, k;
    int n1 = meio - baixo + 1;
    int n2 = alto - meio;

    // Criação de subarrays temporários
    int L[n1], R[n2];

    // Copiar dados para os subarrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[baixo + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];

    // Mesclar os subarrays temporários de volta em arr[baixo..alto]
    i = 0;     // Índice inicial do primeiro subarray
    j = 0;     // Índice inicial do segundo subarray
    k = baixo; // Índice inicial do subarray mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal que implementa o algoritmo Merge Sort
void mergeSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        // Encontrar o ponto médio
        int meio = baixo + (alto - baixo) / 2;

        // Ordenar a metade esquerda
        mergeSort(arr, baixo, meio);
        // Ordenar a metade direita
        mergeSort(arr, meio + 1, alto);

        // Mesclar as duas metades ordenadas
        merge(arr, baixo, meio, alto);
    }
}
/*
// Função auxiliar para imprimir a matriz
void imprimirMatriz(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
*/
