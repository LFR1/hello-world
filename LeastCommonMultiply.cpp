#include<stdio.h>
#include<math.h>
main()
{
	int i;
	int j;
	int s1;
	int s2 = 0;
	printf("请输入第一个数：");
	scanf("%d",&i);
	printf("请输入第二个数：");
	scanf("%d",&j);
	s1 = 2;
	for(;s1 < i;s1++)
	{
		if(i%s1 == 0)
		if(j%s1 == 0)
		s2 = s1;
	}
	if(s2 == 0)
	printf("无最大公约数");
	else
	printf("最大公约数为%d",s2);
	
}
