#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    printf("Enter number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

    int **matrix = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (int *)malloc(M * sizeof(int));
    }

    printf("Enter %d elements for the matrix:\n", N * M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int **transposed = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        transposed[i] = (int *)malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    printf("Transposed matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
    for (int i = 0; i < M; i++) {
        free(transposed[i]);
    }
    free(transposed);
    return 0;
}
