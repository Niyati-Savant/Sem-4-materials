//N-Queen problem
#include<stdio.h>
#include<stdlib.h>
int board[20];
int n;
int count=0,calls=0;

void print_board()
{
    int i,j;
    count++;
    int one_d[n];
    printf("\n Solution %d \n",count);
    printf("In 2D form \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(board[i]==j)
            {
                printf("Q%d \t",i);
                one_d[i-1]=j;
            }
            else
                printf("*\t");
        }
        printf("\n");
    }
    printf("In 1D form: [");
    for(i=0;i<n;i++)
        printf("%d ",one_d[i]);
        printf("]");
}

int place(int row)
{
    int i;
    for(i=1;i<row;i++)
    {
        if(board[i]==board[row])
            return 0;
        else
            if ((abs(board[i]-board[row]))==abs(i-row))
                return 0;
    }
    return 1;
}

void Queen(int n)
{
    int k=1;
    board[k]=0;
    while(k!=0)
    {
        do
        {
            board[k]++;
        } while ((board[k]<=n)&& !place(k));
        if(board[k]<=n)
        {
            if(k==n)
                print_board(n);
            else
            {
                k++;
                board[k]=0;
            }
        }
        else 
        k--;
    }
}

void main()
{
    int i;
    printf("Niyati's Program on N-Queen Problem \n");
    printf("How many Queens ?");
    scanf("%d",&n);
    Queen(n);
}