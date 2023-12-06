//N-Queen problem
#include<stdio.h>
#include<stdlib.h>
int board[4];
int n=4;
int count=0;

void print_board()
{
    int i,j;
    count++;
    printf("\n Solution %d \n",count);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(board[i]==j)
                printf("Q\t");
            else
                printf("*\t");
        }
        printf("\n");
    }
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
                print_board();
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

int main()
{
    int i;
    printf("Niyati's Program on N-Queen Problem \n");
    printf("How many Queens ?");
    scanf("%d",&n);
    Queen(n);
    return 0;
}