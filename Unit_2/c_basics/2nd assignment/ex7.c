#include <stdio.h>

int main() {
	int i,n,f=1;

	printf("Enter an integer:\n");
	scanf("%d", &n);
	if(n<0)
	{
		printf("Error!!");
	}
	else{

	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("factorial=%d",f);
	return 0;
	}
}


