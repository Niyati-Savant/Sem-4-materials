#include <stdio.h>

int Partition(int A[], int p, int r)
{
    int x, i, j, temp;
    x = A[r];
    i = p - 1;
    for (j = p; j <= r - 1; j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    return (i + 1);
}
void QuickSort(int A[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = Partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }

    for (int i = 1; i <= r; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int A[15];
    int n, i;
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    printf("\nEnter elements");
    for (i = 1; i <= n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Unsorted Array \n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", A[i]);
    }
        printf("\n Array is sorted as \n");
    QuickSort(A, 1, n);
    return 0;
}
