#include<stdio.h>
#include<stdlib.h>
struct track
{
   int track_no;
   int covered;
};

void main()
{
    printf("Niyati Savant--SSTF \n");
    struct track track_order[20];
    int i,no_tracks,shortest_diff,min,close,x=0,head_movement=0,curr_head;

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

    /*track_order[0].track_no=82;
    track_order[1].track_no=170;
    track_order[2].track_no=43;
    track_order[3].track_no=140;
    track_order[4].track_no=24;
    track_order[5].track_no=16;
    track_order[6].track_no=190;*/

        
    while(x!=no_tracks)
    {
        shortest_diff=1000;
        for(i=0;i<no_tracks;i++)
        {
            if(track_order[i].covered==0)
            {
            min=abs(curr_head-track_order[i].track_no);
            if(min<shortest_diff)
                {
                shortest_diff=min;
                close=i;
                }
            }
        }
        head_movement += shortest_diff;
        track_order[close].covered=1;
        curr_head=track_order[close].track_no;
        printf("Track chosen: %d  & The difference : %d  \n",track_order[close].track_no,shortest_diff);
        x++;
    }
    printf("The total Head Movement is %d",head_movement);
}