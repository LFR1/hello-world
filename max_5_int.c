#include<stdio.h>
main()
{
	int a[5];
	int i,j;
	int temp;
	for(i = 0; i < 5; i++)
	scanf("%d", a + i);
	for(i = 0; i < 4; i++)
	for(j = 0; j < 4; j++)
	{
		if(a[j] <= a[j+1])
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
	}
	printf("%d",10000*a[0] + 1000*a[1] + 100*a[2] + 10*a[3] + a[4]);
}
