//#define _CRT_SECURE_NO_WARNINGS
////指针管理动态内存
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef int Type;
//
////1.申请动态内存，作为顺序表
////方法一：把动态内存的首地址返回出去
//Type* initArr1(int* max)//接受maxsize的数据
//{
//	(*max) = 10;
//	//temp临时管理内存
//	Type* temp = (Type*)malloc((*max) * sizeof(Type));
//	memset(temp, 0, (*max)*sizeof(Type));//逐字节初始化为0
//	return temp;
//}
////方法二：设置函数返回值的类型为void  申请动态内存  让buff只想顺序表
//void initArr2(Type**p,int*max)//p=&buff   *p=buff
//{
//	(*max) = 10;
//	(*p) = (Type*)malloc((*max) * sizeof(Type));
//	memset((*p), 0, (*max) * sizeof(Type));
//}
//
//
////2.元素的增加
//void ElemAdd(Type**p,int*cnt,int*max,Type data)//可能会发生扩容——动态内存的首地址、最大容量也会改变，len的值也会改变
//{
//	if ((*cnt) >= (*max))
//	{
//		(*max) = (*max) + (*max) / 2;//规定扩大原来的1.5倍
//		(*p) = (Type*)realloc((*p), (*max) * sizeof(Type));
//		if (*p == NULL)
//		{
//			printf("扩容失败\n");
//		}
//		printf("当前的容量大小：%d\n", *max);
//	}
//	(*p)[*cnt] = data;//覆盖数据
//	(*cnt)++;//元素个数+1
//	
//}
//
////3.输出函数
//void print(Type*p,int len)
//{
//	for (int j = 0; j <= len - 1; j++)
//	{
//		printf("%d\t", p[j]);
//	}
//	printf("\n\n");
//}
//
////删除元素
//void ElemDelete(Type*p,int *len,int data)
//{
//	for (int i = 0; i < (* len) - 1; i++)
//	{
//		if (p[i] == data)
//		{
//			for (int k = i+1; k <= len - 1; k++)
//			{
//				p[k - 1] = p[k];
//
//			}
//			(*len)--;
//			i--;
//		}
//	}
//}
//
////修改元素
//void ElemChange(int len,Type*p,int val,int data)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (p[i] == val)
//		{
//			p[i] = data;
//		}
//	}
//}
//
////查找元素
//void ElemFind(Type* p, int val,int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		if (p[i] == val)
//		{
//			printf("元素值为：%d\t位置为：%d\n", p[i], i + 1);
//		}
//	}
//}
//int main()
//{
//	Type* buff = NULL;//指针管理动态内存 BUFF只想顺序表
//	int len = 0;//len表示元素的个数
//	int maxsize = 0;//表示顺序表的容量大小
//	//buff = initArr1(&maxsize);//int*
//	initArr2(&buff, &maxsize);
//	for (int i = 0; i < 20; i++)
//	{
//		ElemAdd(&buff, &len, &maxsize, i+1);
//	}
//	print(buff, len);
//	ElemDelete(buff, &len,5);
//	//ElemFind(buff, 3, len);
//	print(buff, len);
//	//printf("顺序表的当前容量:%d\n", maxsize);
//	return 0;
//}
//
////顺序表的插入与删除的效率很低（单链表很简单）
////顺序表的访问是很方便的