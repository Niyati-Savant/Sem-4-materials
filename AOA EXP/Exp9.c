//Sum of Subst problem
#include<stdio.h>
int w[10];
int inc[10];
int sum;
int calls=0;
int n;
int check(int i,int wt,int total)
{
    if ((wt+total>=sum) && ((wt==sum) || (wt + w[i+1]<=sum)))
        return 1;
    else
        return 0;
}

void sumset(int i,int wt,int total)
{
    int j;
    if(check(i,wt,total)==1)
    {
        if(wt==sum)
        {
            printf("\n Solution is-{");
            for(j=0;j<=i;j++)
            {
                if(inc[j]==1)
                    printf(" %d ",w[j]);
            }
            printf("}\n");
            printf("Inclusion Array is:\n[");
            for(j=1;j<=n;j++)
            {
                    printf(" %d ",inc[j]);
            }
            printf("]\n");
        }
        else
        {
                inc[i+1]=1;
                sumset(i+1,wt+w[i+1],total-w[i+1]);
                calls++;

                inc[i+1]=0;
                sumset(i+1,wt,total-w[i+1]);
                calls++;
        }
    }
}

int main()
{
    int i,total=0;
    w[0]=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements in ascending order: ");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    printf("Enter the sum you want the numbers to add up to: ");
    scanf("%d",&sum);
    for(i=1;i<=n;i++)
        total +=w[i];

    calls++;
    sumset(0,0,total);

    printf("Total calls to Subset Function: %d",calls);

    return 0;
}