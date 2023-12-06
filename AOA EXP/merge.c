#include <stdio.h>
void Merge(int A[], int p, int q, int r)
{
    int n1, n2, i, j, k;
    n1 = q - p + 1;
    n2 = r - q;
    int L[n1], R[n2];
    for (i = 1; i <= n1; i++)
        L[i] = A[p + i - 1];
    for (j = 1; j <= n2; j++)
        R[j] = A[q + j];
    L[n1 + 1] = 1000;
    R[n2 + 1] = 1000;
    i = 1;
    j = 1;
    for (k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}
void MergeSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        Merge(A, p, q, r);
    }
    printf("\n");
    for (int i = 1; i <= r; i++)
        printf("%d ", A[i]);
}
int main()
{
    int i, n;
    int A[15];
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    printf("Enter %d elements \n", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &A[i]);
    printf("Unsorted Array \n");
    for (i = 1; i <= n; i++)
        printf("%d ", A[i]);
    printf("\n Sorting the Array \n");
    MergeSort(A, 1, n);
    return 0;
}
