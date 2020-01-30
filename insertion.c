#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, temp, j;
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    printf("\nplease provide the number\n");
    for (i = 0; i < n; i++)
    {
        printf("--------%d-----------\n", i);
        scanf("%d",&A[i]);
    }
// code for inserton short 
    printf("\n----------\n");
    for (i = 0; i < n; i++)
    {
        j = i;
        while (j > 0 && A[j] < A[j - 1])
        {
            temp = A[j];
            A[j] = A[j - 1];
            A[j - 1] = temp;
            j--;
        }
    }
    printf("\nsorted array \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t",A[i]);
    }
    return 0;
}