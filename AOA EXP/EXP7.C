#include<stdio.h>
int max=100;

void printMatrix(int A[4][4],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d \t",A[i][j]);
		printf("\n");
	}
}

int main()
{	int i,j,k,n=4;
	int D[4][4]={{0,9,-4,100},{6,0,100,2},{100,5,0,100},{100,100,1,0}};
	int node[4]={1,2,3,4};
	int P[4][4];
	/*printf("How many nodes ?");
	scanf("%d",&n);
	printf("Enter the elements \n");
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
		scanf("%d",&D[i][j]);
	printf("\n");
	}*/

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i==j) || D[i][j]==max)
				P[i][j]=max;
			else
				P[i][j]=node[i];

		}
	}
		printf("Initially The Distance Matrix D is \n");
		printMatrix(D,4);
		printf("\n");
		printf("And The Path Matrix P is \n");
		printMatrix(P,4);
	
	for(k=0;k<n;k++) //Intermediate Vertex
	{
		for(i=0;i<n;i++) //row
		{
			for(j=0;j<n;j++)//column
			{
			if(D[i][j] > (D[i][k] +D[k][j]))
				{
				D[i][j]= D[i][k]+D[k][j];
				P[i][j]=P[k][j];
				}
			}
		}
		printf("The Distance Matrix D%d is \n",k+1);
		printMatrix(D,4);
		printf("\n");
		printf("The Path Matrix P%d is \n",k+1);
		printMatrix(P,4);
	}

	printf("The Path between each pair of vertices is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i !=j)
			{
				if(node[i]!=P[i][j])
				printf("The path between %d and %d: %d->%d->%d and cost is: %d",node[i],node[j],node[i],P[i][j],node[j],D[i][j]);
				else
				printf("The path between %d and %d: %d->%d and cost is: %d",node[i],node[j],node[i],node[j],D[i][j]);
			printf("\n");
			}
		}
		printf("\n");
	}

return 0;
}