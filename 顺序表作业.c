#define _CRT_SECURE_NO_WARNINGS
////1.d  2.c 3.
//#include<stdio.h>
//#include<stdlib.h>
////void initArr(int**p,int*max)
////{
////      (*max) = 10;
////	(*p) = (int*)(malloc((*max) * sizeof(int)));
////	memset((*p), 0, (*max) * sizeof(int));
////}
////int main()
////{
////	int* buff = NULL;
////	int len = 0;
////	int maxsize = 0;
////  initArr(&buff,&maxsize)
////}
//
////typedef int Type;
////Type* initArr(int *max)
////{
////	(*max) = 10;
////	Type* temp = (Type*)malloc((*max) *sizeof(Type));
////	memset((temp), 0, (*max) * sizeof(Type));
////	return temp;
////}
////int main()
////{
////	int len = 0;
////	int max = 0;
////	int* buff = NULL;
////	buff = initArr(&max);
////}
//
////#define  size 10
////int arr[size] = {0};
////int len = 0;
////void ArrAdd(int data)
////{
////	arr[len] = data;
////	len++;
////}
//
////typedef struct
////{
////	int arr[10];
////	int len ;
////	int max;
////}Node;
////Node n;
////void insert(int data)
////{
////	if (n.len < n.max)
////	{
////		n.arr[n.len] = data;
////		n.len++;
////	}
////
////}
//
////4.
//#define size 20
//#define size2 10
//void  initArr(int**p,int*max)
//{
//	(*max) = 10;
//	(*p) = (int*)malloc((*max) * sizeof(int));
//	memset((*p), 0, (*max) * sizeof(int));
//}
//
//
//void ElemAdd(int**p,int*len,int *max,int data)
//{
//	if ((* len) >= (* max))
//	{
//		if (len == size&&size>size2)
//		{
//			len = 0;
//			(*max)=10;
//		}
//		if (len == size && size < size2)
//		{
//			int count = 0;
//			count++;
//			if (count == 1)
//			{
//				len = 0;
//				(*max) = 10;
//			}
//		}
//		(*max) = (*max) + (*max) / 2;
//		(*p) = (int*)(realloc((*p), (*max) * sizeof(int)));
//		if ((*p) == NULL)
//		{
//			printf("内存申请失败\n");
//		}
//		printf("内存值为%d\n", (*max));
//	}
//	
//		(*p)[*len] = data;
//		(*len)++;
//		
//}
////
////void print(int len,int*buff)
////{
////	for (int i = 0; i < len; i++)
////	{
////		printf("%d位置上的值为%d\n", i+1, buff[i]);
////	}
////}
//
//void print(int* p, int len)
//{
//	for (int j = 0; j <= len - 1; j++)
//	{
//		printf("%d\t", p[j]);
//	}
//	printf("\n\n");
//}
//int ElemDelete(int *len,int a,int*p,int data)
//{
//	for (int i = 0; i < (*len); i++)
//	{
//		if (p[i] == data)
//        {  
//		  static int  count = 0;
//		  count++;
//		  if (count == a)
//		  {
//			for (int k = i; k < len; k++)
//				p[i] = p[i + 1];
//		  }
//		  (*len)--;
//		  i--;
//	    }
//	}
//	return data;
//}
//
//void arr_message(int**p1,int**p2,int len)
//{
//	for (int i = 0; i < size; i++)
//	{
//		(*p1) = (int*)realloc((*p1), (size + size2) * sizeof(int));
//		if (size > size2)
//		{
//		  for (int i = 1; i < (size - size2); i++)
//		  {
//			  (*p1)[size + i] = (*p2)[i];
//		  }
//	    }
//		else
//			for (int i = 1; i < (size2 - size); i++)
//			{
//				(*p1)[size + i] = (*p2)[i];
//			}
//	}
//}
//int main()
//{
//	int* buff = NULL;
//	int len = 0;
//	int max = 0;
//	int* buff2 = NULL;
//	initArr(&buff2, &max);
//	initArr(&buff, &max);
//	for (int i = 0; i < size; i++)
//	{
//	ElemAdd(&buff, &len, &max, i);
//    }
//	for (int i = 0; i < size2; i++)
//	{
//		ElemAdd(&buff2, &len, &max, i);
//	}
//	/*int a = 0;
//	scanf_s("%d", &a);
//	int b=ElemDelete(&len, a, buff, 3);
//	printf("删除数据：%d\n", b);*/
//	/*printf(buff, len);
//	print(buff2, len);*/
//
//	arr_message(&buff, &buff2,&len);
//	print(buff, size + size2);
//} 
#define size 3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ElemInit(int** buff, int* len, int data)
{
	if (*buff == NULL)
	{
		(*buff) = (int*)malloc(size * sizeof(int));
		if (*buff != NULL)
		{
			memset(*buff, 0, sizeof(int));
			(*buff)[*len] = data;
			(*len)++;
		}
		else 
		{
			printf("内存申请失败\n");
		}
	}
}
void ElemInset(int *buff,int*buff2)
{
	for (int a = 0; a < size + 2; a++)
	{
		int b = size + a;
		ElemInit(&buff, &b, buff2[a]);
	}
}
void print(int len,int*buff)
{
	for (int a = 0; a < len; a++)
	{
		printf("%d\t", buff[a]);
	}
	printf("\n\n");
}

void ElemDelete(int *len,int *buff,int data)
{
	for (int a = 0; a < *len; a++)
	{
		if (buff[a] == data)
		{
			for(int k=a+1;k<=(*len) - 1; k++)
			buff[k-1] = buff[k];
			(* len) -= 1;
			a--;
		}

	}
}
void ElemFind(int len,int*arr,int data)
{
	for (int a = 0; a < len; a++)
	{
		if (arr[a] == data)
		{
			printf("找到目标数字%d位置为：%d\n", data, a + 1);
		}
	}
}


int main()
{
	int* buff = NULL;
	//int* buff2 = NULL;
	int len = 0;
	//int len2 = 0;
	int max = size;
	for (int a = 0; a < size; a++)
	{
		ElemInit(&buff, &len, a);
	}
	print(len, buff);
	/*for (int a = 20; a < 23; a++)
	{
		ElemInit(&buff2, &len2, a);
	}
	print(len2, buff2);*/
	/*ElemInset(buff, buff2);
	print((len+len2), buff);*/


	/*int a = 0;
	scanf_s("%d", &a);
	ElemDelete(&len, buff, a);
	printf("余下数据:\n");
	print(len, buff);*/


	//int b = 0;
	//scanf_s("%d", &b);
	////printf("%d\n", b);
	//ElemFind(len, buff, b);

	
}
