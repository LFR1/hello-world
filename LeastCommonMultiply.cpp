#include<stdio.h>
#include<math.h>
main()
{
	int i;
	int j;
	int s1;
	int s2 = 0;
	printf("�������һ������");
	scanf("%d",&i);
	printf("������ڶ�������");
	scanf("%d",&j);
	s1 = 2;
	for(;s1 < i;s1++)
	{
		if(i%s1 == 0)
		if(j%s1 == 0)
		s2 = s1;
	}
	if(s2 == 0)
	printf("�����Լ��");
	else
	printf("���Լ��Ϊ%d",s2);
	
}
