//KMP ALGORITHM
#include<stdio.h>
int pi[5];
int n,m;
char p[10];
char text[20];

void prefix(char pat[5])
{
    int q,k;
    pi[1]=0;
    k=0;
    for(q=2;q<=m;q++)
    {
        while(k>0 && pat[k+1]!=pat[q])
            k=pi[k];
        if (pat[k+1]==pat[q])
            k=k+1;
        pi[q]=k;
    }
}

void KMPMatcher(char text[20],char p[10])
{
    int q=0;
    for(int i=1;i<=m;i++)
    {
        while(q>0 and p[q+1]!=text[i])
            q=pi[q];
        if (p[q+1]==text[i])
            q=q+1;
        if (q==m)
        {
            printf("\nPattern occurs with shift %d",i-m);
            q=pi[q];
        }
    }
}

int main()
{
    char x,up[10],ut[20];
    printf("Niyati's code for KMP \n");
    n=8,m=4;
    int i,j;
    printf("Enter the pattern \n");
    scanf("%s",up);
    printf("Enter The text\n");
    scanf("%s",text);
        printf("\nThe text is: ");
    printf("%s ",text);

    for(i=1,j=0;i<=m;i++,j++)
        p[i]=up[j];

    for(i=1,j=0;i<=n;i++,j++)
        text[i]=ut[j];

    printf("\nThe pattern is: ");
    for(i=1;i<=m;i++)
        printf("%c ",p[i]);

    printf("\nThe text is: ");
    //printf("%s ",text);
    for(i=1;i<=n;i++)
        printf("%c ",text[i]);

    printf("\nPrefix table: \n");
    prefix(p);
    for(int i=1;i<=m;i++)
        printf("%d ",pi[i]);

    printf("\n The kmp is");
    KMPMatcher(text,p);

    
    return 0;
}