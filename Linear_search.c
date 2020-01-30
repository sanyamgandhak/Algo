#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, k;
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    printf("\nplease provide the number\n");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nplease provide search element\n");
    scanf("%d", &k);

    for (i = 0; i <= n - 1; i++)
    {
        if (A[i] == k)
            printf("\nelement fonud at %d\n", i);
            break;
    }
    if(i>n)  
    printf("\nno element found\n");
    return 0;
}