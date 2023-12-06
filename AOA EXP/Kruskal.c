#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i,j,k,a,b,u,v,n,ne=1;

int min,mincost=0,cost[10][10],parent[10];

int find(int i)
{
	while(parent[i])
	    i=parent[i];
	return i;
}

int uni(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}

int main()
{
	printf("\nImplementation of Kruskal's algorithm\n");
    printf("\n Enter 999 incase there is no direct edge");
	printf("\nEnter the no. of vertices:");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix:\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);

		}
	}

	printf("The edges of Minimum Cost Spanning Tree are\n");
	while(ne < n)
	{
        //find min edge
		for(i=1;i<=n;i++)
		{
            min=999;
			for(j=1;j <= n;j++)
			{
				if(cost[i][j] < min && i!=j)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}

		u=find(u);
		v=find(v);
		if(uni(u,v))
		{
			printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
			mincost +=min;
		}

		cost[a][b]=cost[b][a]=999;
	}
	printf("\n\tMinimum cost = %d\n",mincost);
    return 0;
}

