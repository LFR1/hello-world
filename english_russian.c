#include<stdio.h>
main()
{
   	int people, english, russian, allcan, allcannot;
   	printf("输入旅馆共有多少人\n");
   	scanf("%d",&people);
   	printf("输入会英语的有多少人\n");
   	scanf("%d",&english);
   	printf("输入会俄语的有多少人\n");
   	scanf("%d",&russian);
   	printf("输入两者都不会的有多少人\n");
   	scanf("%d",&allcannot);
   	allcan = english + russian +allcannot - people;
   	if(allcan >= 0)
   	printf("两者都会的有%d人\n",allcan);
   	else
   	printf("输入数据错误，无法计算\n");
} 
