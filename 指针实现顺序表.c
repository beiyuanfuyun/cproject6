//#define _CRT_SECURE_NO_WARNINGS
////ָ�����̬�ڴ�
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef int Type;
//
////1.���붯̬�ڴ棬��Ϊ˳���
////����һ���Ѷ�̬�ڴ���׵�ַ���س�ȥ
//Type* initArr1(int* max)//����maxsize������
//{
//	(*max) = 10;
//	//temp��ʱ�����ڴ�
//	Type* temp = (Type*)malloc((*max) * sizeof(Type));
//	memset(temp, 0, (*max)*sizeof(Type));//���ֽڳ�ʼ��Ϊ0
//	return temp;
//}
////�����������ú�������ֵ������Ϊvoid  ���붯̬�ڴ�  ��buffֻ��˳���
//void initArr2(Type**p,int*max)//p=&buff   *p=buff
//{
//	(*max) = 10;
//	(*p) = (Type*)malloc((*max) * sizeof(Type));
//	memset((*p), 0, (*max) * sizeof(Type));
//}
//
//
////2.Ԫ�ص�����
//void ElemAdd(Type**p,int*cnt,int*max,Type data)//���ܻᷢ�����ݡ�����̬�ڴ���׵�ַ���������Ҳ��ı䣬len��ֵҲ��ı�
//{
//	if ((*cnt) >= (*max))
//	{
//		(*max) = (*max) + (*max) / 2;//�涨����ԭ����1.5��
//		(*p) = (Type*)realloc((*p), (*max) * sizeof(Type));
//		if (*p == NULL)
//		{
//			printf("����ʧ��\n");
//		}
//		printf("��ǰ��������С��%d\n", *max);
//	}
//	(*p)[*cnt] = data;//��������
//	(*cnt)++;//Ԫ�ظ���+1
//	
//}
//
////3.�������
//void print(Type*p,int len)
//{
//	for (int j = 0; j <= len - 1; j++)
//	{
//		printf("%d\t", p[j]);
//	}
//	printf("\n\n");
//}
//
////ɾ��Ԫ��
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
////�޸�Ԫ��
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
////����Ԫ��
//void ElemFind(Type* p, int val,int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		if (p[i] == val)
//		{
//			printf("Ԫ��ֵΪ��%d\tλ��Ϊ��%d\n", p[i], i + 1);
//		}
//	}
//}
//int main()
//{
//	Type* buff = NULL;//ָ�����̬�ڴ� BUFFֻ��˳���
//	int len = 0;//len��ʾԪ�صĸ���
//	int maxsize = 0;//��ʾ˳����������С
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
//	//printf("˳���ĵ�ǰ����:%d\n", maxsize);
//	return 0;
//}
//
////˳���Ĳ�����ɾ����Ч�ʺܵͣ�������ܼ򵥣�
////˳���ķ����Ǻܷ����