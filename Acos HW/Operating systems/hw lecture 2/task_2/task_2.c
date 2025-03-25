#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));

    printf("Enter %d integers: ", N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N/2; i++){
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
