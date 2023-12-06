#include<stdio.h>
#include<string.h>

struct Memory_partition
{
    int index;
    int msize;
    int mstatus;
    int mprocess;
}mem[10];
int main()
{
    int i,n,t,new_size,new_p,best_index,min_waste,x;
    n=8;
    t=9; //array size
    printf("\nVariable Partioning- Best Fit");
    printf("\nThe Memory has 8 partions");
    printf("\n Enter memory size status(0-Free and 1 for Not free)");

    for(i=0;i<8;i++)
        mem[i].index=i;
    
    mem[0].msize=100;
    mem[1].msize=300;
    mem[2].msize=40;
    mem[3].msize=50;
    mem[4].msize=150;
    mem[5].msize=240;
    mem[6].msize=200;
    mem[7].msize=400;

    mem[0].mstatus=mem[2].mstatus=mem[4].mstatus=mem[6].mstatus=1;
    mem[1].mstatus=mem[3].mstatus=mem[5].mstatus=mem[7].mstatus=0;
    int k=0;
    for(i=0;i<8;i++)
    {
        if(i%2==0)
        {
            mem[i].mprocess=k+1;
            k=k+1;}
    }
    /*for(i=0;i<n;i++)
    {
        mem[i].index=i;
        printf("\nEnter details for partition %d: ",i+1);
        printf("\nEnter Memory Size and Memory Status: ");
        scanf("%d %d",&mem[i].msize,&mem[i].mstatus);
        if(mem[i].mstatus==1)
        {
            printf("\nEnter process number:");
            scanf("%d",&mem[i].mprocess);
        }
        else
            mem[i].mprocess=0;
    }*/
    printf("\n Sr.No  Memory \t Status   Process \n");
    for(i=0;i<n;i++)
    {
        if(mem[i].mstatus==1)
        printf("%d  \t %d kb   Not Free   P%d\n",mem[i].index+1,mem[i].msize,mem[i].mprocess);
        else
        printf("%d \t %d kb   Free    \n",mem[i].index+1,mem[i].msize);
    }

    printf("\nEnter new process number: ");
    scanf("%d",&new_p);
    printf("\nEnter new process Size: ");
    scanf("%d",&new_size);
    min_waste=2000;
    best_index=0;

    for(i=0;i<n;i++)
    {
        if(mem[i].mstatus==0) // Free
        {
            x=mem[i].msize-new_size;
            if((mem[i].msize>=new_size) && (min_waste >= x))
            {
                min_waste =x;
                best_index=mem[i].index;
            }
        }
    }
    printf("\n Best index %d",best_index+1);
    printf("\n External fragmentation is %d",min_waste);

    //updating the mem statues
    i=t-1;
        while((i-1) != best_index)
        {
            mem[i].index=i;
            mem[i].msize=mem[i-1].msize;
            mem[i].mstatus=mem[i-1].mstatus;
            if(mem[i].mstatus==1)
                mem[i].mprocess=mem[i-1].mprocess;
            i--;
        }
        mem[i].index=i;
        mem[i].msize=min_waste;
        mem[i].mstatus=0;
        i--;
        mem[i].index=best_index;
        mem[i].msize=new_size;
        mem[i].mstatus=1;
        mem[i].mprocess=new_p;


    printf("\n After Updating");
    printf("\n Sr.No  Memory \t Status   Process \n");
    for(i=0;i<t;i++)
    {
        if(mem[i].mstatus==1)
        printf("%d  \t %d kb   Not Free   P%d\n",i+1,mem[i].msize,mem[i].mprocess);
        else
        printf("%d \t %d kb   Free    \n",i+1,mem[i].msize);
    }
    
    return 0;
}