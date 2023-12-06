#include<stdio.h>
struct item
{
    double wt;
    double pr;
    double pw;
    int include;
    int item_no;
}temp;

int main()
{
    int n,M,i,j,presentwt,rem_space;
    float totalp,rem;
    totalp=0;
    presentwt=0;
    struct item data[10];
    
    printf("Enter the capacity of the sack \n");
    scanf("%d",&M);
    printf("Enter the number of items \n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        data[i].item_no=i+1;
        printf("Enter Weight for object %d ",i+1);
        scanf("%lf",&data[i].wt);
        printf("Enter Profit for object %d ",i+1);
        scanf("%lf",&data[i].pr);
        data[i].include=0;
        data[i].pw=((data[i].pr)/(data[i].wt));
    }

    printf("Data entered by User \n");
    printf("Item  Profit \t Weight \t  P/W ratio \n");
    for(i=0;i<n;i++)
    {
        printf("%d  %lf \t %lf \t %lf \n",data[i].item_no,data[i].pr,data[i].wt,data[i].pw);
    }
   
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (data[j].pw < data[j+1].pw)
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }    
        }
    }
    
    printf("Sorted order \n");
    printf("Item  Profit \t Weight \t  P/W ratio \n");
    for(i=0;i<n;i++)
    {
        printf("%d  %lf \t %lf \t %lf \n",data[i].item_no,data[i].pr,data[i].wt,data[i].pw);
    }
    
    printf("The analysis \n");
    printf("Item  Profit_Received \t Weight_Taken  \t  Space left in sack \n");
    for(i=0;i<n;i++)
    {
        if(presentwt+data[i].wt<=M)//Consider complete weight
        {
         presentwt+=data[i].wt;
         totalp+=data[i].pr;
         printf("%d  %lf \t\t %lf \t\t %d \n",data[i].item_no,data[i].pr,data[i].wt,M-presentwt);
         data[i].include=1;
        }
        else //Fractional Weight
        {
            rem=(M-presentwt); //how much can we take
            totalp+=(data[i].pw)*rem;
            printf("%d   %lf \t\t  %lf \t\t  %d \n",data[i].item_no,(data[i].pw*rem),rem,presentwt-rem);
            data[i].include=1;
            break;
        } 
    }
        printf("\nUser input  is:{");
    for(i=0;i<n;i++)
        printf("%lf ",data[i].wt);
    printf("}");

    printf("\nSolution vector is:[");
    for(i=0;i<n;i++)
        printf("%d ",data[i].include);
    printf("]");

    printf("Answer is %lf",totalp);

   return 0;   
}
