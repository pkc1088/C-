#include <stdio.h>
#include <stdlib.h>

void ABC(int** p, int k1, int k2) {
    (*(p + k1))[k2] = k1 + k2;
}


int main() {
    int k1, k2, N;
    int** arr;
    scanf("%d", &N);
    getchar();

    arr = (int**)malloc(N * sizeof(int*));	//int**«ÿµµ ¿œ¥‹ µ  
    for (int i = 0; i < N; i++) 
	{
        arr[i] = (int*)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++)
            (*(arr + i))[j] = 0; 
    }


    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
            ABC(arr, i, j);

    for (int i = 0; i < N; i++) 
	{
        for (int j = 0; j < N; j++) 
            printf(" %d", *(*(arr + i) + j));
            
        printf("\n");
    }
    
    return 0;
}
