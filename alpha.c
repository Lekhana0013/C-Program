#include<stdio.h>
main()
{
	int i,j,rows;
	for(i=1;i<=26;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
}
