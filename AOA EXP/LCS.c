#include <stdio.h>
#include <string.h>

void print_lcs(char b[20][20], char X[], int i, int j)
{
	if (i == 0 || j == 0)
		return;

	if (b[i][j] == 'D')
	{
		print_lcs(b, X, i - 1, j - 1);
		printf("%c", X[i - 1]);
	}
	else if (b[i][j] == 'U')
		print_lcs(b, X, i - 1, j);
	else
		print_lcs(b, X, i, j - 1);
}

int main()
{
	char s1[10], s2[10];
	int m, n, i, j, len;

	printf("Niyati's Code For LCS \n");
	printf("Enter elements of string 1: ");
	scanf("%s", s1);
	printf("Enter elements of string 2: ");
	scanf("%s", s2);
	m = strlen(s1);
	n = strlen(s2);

	char b[20][20];
	int c[20][20];

	for (j = 0; j < n + 1; j++)
	{
		c[0][j] = 0;
		b[0][j] = 'X';
	}
	for (i = 0; i < m + 1; i++)
	{
		c[i][0] = 0;
		b[i][0] = 'X';
	}

	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				c[i][j] = c[i - 1][j - 1] + 1;
				b[i][j] = 'D';
			}
			else
			{
				if (c[i - 1][j] >= c[i][j - 1])
				{
					c[i][j] = c[i - 1][j];
					b[i][j] = 'U';
				}
				else
				{
					c[i][j] = c[i][j - 1];
					b[i][j] = 'L';
				}
			}
		}
	}
	len = c[m][n];

	for (i = 1; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d \t", c[i][j]);
		}
		printf("\n");
	}

	printf("FOR DIRECTION \n");
	for (i = 1; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%c \t", b[i][j]);
		}
		printf("\n");
	}
	printf("\n The length of longest substring is %d", len);
	printf("\nThe substring is: \n");
	print_lcs(b, s1, m, n);
	return 0;
}