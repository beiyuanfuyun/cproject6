//#define _CRT_SECURE_NO_WARNINGS
////˳�����һ�����ݽṹ���ṹ��һ�ֽ��������δ���ڵ�ַ�����Ĵ��浥Ԫ
////˳���Ĵ����ص��ǣ�
////1.����Ԫ�صĵ�ַ�������ģ������붯̬�ڴ���䣩
////2.ͨ�����׵�ַ��ƫ�ƣ����Է�������Ԫ��
//
////1.˳���Ԫ�ص�����
////2.˳���Ԫ�ص�ɾ��
////3.˳�����޸�
////4.˳���Ĳ���
//
////�����ʵ��
//#include<stdio.h>
//#define ARRSIZE 20
////����Ԫ�ص�����Ϊint
//int arr[ARRSIZE] = { 0 };
//int len = 0;//���鵱ǰ����ĸ���//������
////1.˳���Ԫ�ص�����
//void ElemAdd(int data)//ElemԪ��
//{
//	arr[len] = data;
//	len++;
//}
////2.˳���Ԫ�ص�ɾ��
//   //1.�ҵ�Ҫɾ����Ԫ�أ�����˳����Ԫ�أ� 
//     //2.�������������Ԫ�ص��±�Ҫ��ǰ�ƶ�һλ����ΧΪj+1��len-1��jΪɾ��Ԫ�ص�1�±꣬lenΪ�������ĸ���
//       //3Ԫ�صĸ�����1.
//void ElemDelete(int data)
//{
//	for (int j = 0; j <= len - 1; j++)
//	{
//		if (arr[j] == data)
//		{
//			for (int k = j + 1; k <= len - 1;)
//			{
//				arr[k - 1] = arr[k];
//				len--;
//				j--;//��ֹ©��
//			}
//		}
//	}
//}
//	   
////3.˳�����޸�
//void ElemChange(int val,int data,int point)
//{
//	for (int j = 0; j < len - 1; j++)
//	{
//		//if (arr[j] == val)
//		//{
//		//	arr[j] = data;//�Ὣ���е�Ҫ�޸ĵ�Ԫ���޸ģ���Ȼ��������break���к�if��&&����ȷ�����޸�
//		//}
//		if (arr[j] == val)
//		{
//			 static int i = 0; 
//			i++;
//			if (i == point)
//			{
//				arr[j] = data;
//				break;//break�������ڵ�ѭ����for,switch,while��if����ѭ��
//			}
//		}
//	}
//}
////4.˳���Ĳ���
//
//void ElemFind(int data)
//{
//	for (int i = 0; i <= len - 1; i++)
//	{
//		if (arr[i] ==data)
//		{
//			printf("%dԪ��ֵ��λ��Ϊ%d\n", data, i + 1);
//		}
//	}
//}
////���˳����Ԫ��
//void print()
//{
//	for (int i = 0; i < len; i++)//len������Ч��ֹprint���ӡ����ֹ��ӡ������0����֪����λ��ʵ���ݻ���û������
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int main()
//{
//	//Ԫ�ص�����
//	//ElemAdd(3)
//	/*for (int j = 1; j <= 6; j++)
//	{
//		ElemAdd(j);
//	}*/
//	ElemAdd(1);
//	ElemAdd(2);
//	ElemAdd(3);
//	ElemAdd(3);
//	ElemAdd(4);
//	ElemAdd(3);
//	ElemAdd(3);
//	ElemAdd(0);
//	//ElemDelete(3);
//	//ElemChange(3, 66, 2);
//	ElemFind(3);
//	print();
//	return 0;
//}