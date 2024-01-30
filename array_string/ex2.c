#include <stdio.h>
#include <stdlib.h>

int main()
{

	int n;
	float sum=0,Average;
	printf("Enter Numbers of data :");
	scanf("%d",&n);
	float a[n];
	for (int i = 0; i < n; i++)
	{

		printf("\n%d.Enter number:",i+1);
		scanf("%f", &a[i]);
		sum+=a[i];

	}
	Average=sum/n;

	printf("Average =%.2f\n",Average);
	
	return 0;
}