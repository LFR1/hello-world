#include<stdio.h>
main()
{
   	int people, english, russian, allcan, allcannot;
   	printf("�����ùݹ��ж�����\n");
   	scanf("%d",&people);
   	printf("�����Ӣ����ж�����\n");
   	scanf("%d",&english);
   	printf("����������ж�����\n");
   	scanf("%d",&russian);
   	printf("�������߶�������ж�����\n");
   	scanf("%d",&allcannot);
   	allcan = english + russian +allcannot - people;
   	if(allcan >= 0)
   	printf("���߶������%d��\n",allcan);
   	else
   	printf("�������ݴ����޷�����\n");
} 
