//N-Queen problem
#include<stdio.h>
#include<stdlib.h>
int board[20];
int calls=0;

void print_board(int n)
{
    int i,j;
    printf("\n One of the Solution  \n");
    printf("In 2D form \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(board[i]==j)
                printf("Q%d \t",i);
            else
                printf("*\t");
        }
        printf("\n");
    }
    printf("In 1D form: [");
    for(i=1;i<=n;i++)
        printf("%d ",board[i]);
        printf("]");
}

int check(int row,int col)
{
    int i;
    for(i=1;i<=row;i++)
    {
        if(board[i]==col)
            return 0;
        else
            if ((abs(board[i]-col))==abs(i-row))
                return 0;
    }
    return 1;
}

void Queen(int row,int n)
{
    int column;
    for(column=1;column<=n;column++)
    {
        if(check(row,column))
        {
            board[row]=column;
            if(row==n)
                print_board(n);
            else
            {  
                Queen(row+1,n);
                calls++;
            }
        }
    }
}

void main()
{
    int i,n;
    printf("Niyati's Program on N-Queen Problem \n");
    printf("How many Queens ?");
    scanf("%d",&n);
    Queen(1,n);
    printf("Total calls to function: %d",calls);
}