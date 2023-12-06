#include<stdio.h>
void main()
{
    int i,j,k,min,ref_string[25],frame[10],count[10],flag[25],n,f,pf=0,next=0;
    printf("Niyati Savant -- LRU \n");
    printf("Enter the length of the reference string: ");
    scanf("%d",&n);
    printf("Enter the reference string: ");
    //n=12,f=3
    for(i=0;i<n;i++)
    {
        scanf("%d",&ref_string[i]);
        flag[i]=0;
    }
    printf("Enter the number of frames: ");
    scanf("%d",&f);

    for(i=0;i<f;i++)
    {
        count[i]=0;
        frame[i]=-1;
    }
printf("\nThe Page Replacement process is  \n");
for(i=0;i<n;i++) 
{
    for(j=0;j<f;j++) 
    {
        if(frame[j]==ref_string[i])
        {
            flag[i]=1;
            count[j]=next;
            next++;
        }
    }

    if(flag[i]==0)
    {
        if(i<f)
        {
            frame[i]=ref_string[i];
            count[i]=next;
            next++;
        }
        else
        {
            min=0;
            for(j=0;j<f;j++)
            if(count[min] > count[j])
                min=j;
            frame[min]=ref_string[i];
            count[min]=next;
            next++;
        }
        pf++;
    }
    for(j=0;j<f;j++)
    printf("%d\t",frame[j]);
    if(flag[i]==0)
        printf("Page Fault");
    else
        printf("Page Hit");
    printf("\n");
}
printf("\nThe number of page faults are %d",pf);
printf("\nThe number of page Hits  are %d",n-pf);
printf("\nThe  Hit ratio  is %d / %d",n-pf,n);
}