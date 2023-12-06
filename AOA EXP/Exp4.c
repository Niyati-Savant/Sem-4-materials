#include <stdio.h>
int main()
{
    printf("Niyati 's code-- Prims Algorithm \n");
    int current, totalvisited, mincost, i, n,cost=0;
    int weight[6][6] = {{0, 9, 0, 4, 0, 0}, {9, 0, 5, 1, 3, 0}, {0, 5, 0, 0, 3, 8}, {4, 1, 0, 0, 2, 0}, {0, 3, 3, 2, 0, 7}, {0, 0, 8, 0, 7, 0}};
    n = 6; // Number of nodes
    int dis[6], vis[6], predec[6];
    // Array Initialization
    for (i = 0; i < n; i++)
    {
        dis[i] = 9999;
        vis[i] = 0;
        predec[i] = 0;
    }
    //start with 1st node
    current = 0;
    dis[current] = 0;
    vis[current] = 1;
    predec[current] = 0;
    totalvisited = 1;
    printf("Currently visiting node %d",current+1);

    while (totalvisited != n)
    {
        //Finding direct nodes,updating their predecessor and distance matrix;
        for (i = 0; i < n; i++)
        {
            if (weight[current][i] != 0 && vis[i] == 0) // direct node exists and not yet visited
                    if (dis[i] > (weight[current][i]))
                    {
                        dis[i] = weight[current][i];
                        predec[i] = current;
                    }
        }
        //which node to visit next
        mincost = 9999;
        for (i = 0; i < n; i++)
        {
            if (vis[i] == 0)
                if (dis[i] < mincost)
                {
                    mincost = dis[i];
                    current = i;
                }
        }
        vis[current] = 1;
        totalvisited++;

        cost += dis[current];
        printf("\n Next visiting node %d ,its predecessor is %d, its wt is %d and currest cost is %d", current+1, predec[current]+1, dis[current], cost);
    }
    printf(" \n The minimum cost is %d",cost);
    return 0;
}