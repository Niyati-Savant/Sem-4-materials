#include<stdio.h>
#include<stdlib.h>
struct track
{
   int track_no;
   int covered;
};

void main()
{
    printf("Niyati Savant--LOOK \n");
    struct track track_order[20];
    int i,j,k,no_tracks,temp,diff=0,x=0,head_movement=0,curr_head;
   
    printf("Enter the number of Tracks: ");
    scanf("%d",&no_tracks);

    for(i=0;i<no_tracks;i++)
    {
        printf("Enter Track %d :",i+1);
        scanf("%d",&track_order[i].track_no);
        track_order[i].covered=0;
    }
    
    printf("Enter the cuurent Head position:");
    scanf("%d",&curr_head);
    track_order[no_tracks].track_no=curr_head;
    track_order[no_tracks].covered=0;
    no_tracks=no_tracks+1;
 for(i=0;i<no_tracks;i++)
    {
        for(j=0;j<no_tracks;j++)
        {
            if(track_order[i].track_no < track_order[j].track_no)
            {
                temp=track_order[i].track_no;
                track_order[i].track_no=track_order[j].track_no;
                track_order[j].track_no=temp;
            }
        }
    }

    printf("\n Moving towards Larger value\n");

    //finding current
    for(i=0;i<no_tracks;i++)
    {
        if(track_order[i].track_no==curr_head)
        {
            k=i;
            break;}
    }
    
    while(x!=no_tracks)
    {
    for(i=k+1;i<no_tracks;i++)
    {
        if(track_order[i].covered==0)
        {
        diff=abs(curr_head-track_order[i].track_no);
        head_movement +=diff;
        curr_head=track_order[i].track_no;
        track_order[i].covered=1;
        printf("\n Track chosen: %d  & The difference : %d",curr_head,diff);
        }
    }
    for(i=k-1;i>=0;i--)
    {
        if(track_order[i].covered==0)
        {
        diff=abs(curr_head-track_order[i].track_no);
        head_movement +=diff;
        curr_head=track_order[i].track_no;
        track_order[i].covered=1;
        printf("\n Track chosen: %d  & The difference : %d",curr_head,diff);
        }
    }
    x++;
    }
    printf("\n The total Head Movement is %d",head_movement);
}