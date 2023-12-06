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
    track_order[0].track_no=82;
    track_order[1].track_no=170;
    track_order[2].track_no=43;
    track_order[3].track_no=140;
    track_order[4].track_no=24;
    track_order[5].track_no=16;
    track_order[6].track_no=190;

       for(i=0;i<no_tracks;i++)
    {
        track_order[i].covered=0;
    }
}

/* n = 5;                         // Number of processes  
    m = 3;                         // Number of resources  
    int alloc[5][3] = {{0, 1, 0},  // P0 // Allocation Matrix  
                       {2, 0, 0},  // P1  
                       {3, 0, 2},  // P2  
                       {2, 1, 1},  // P3  
                       {0, 0, 2}}; // P4  
  
    int max[5][3] = {{7, 5, 3},  // P0 // MAX Matrix  
                     {3, 2, 2},  // P1  
                     {9, 0, 2},  // P2  
                     {2, 2, 2},  // P3  
                     {4, 3, 3}}; // P4  
  
    int avail[3] = {3, 3, 2}; // Available Resources  */