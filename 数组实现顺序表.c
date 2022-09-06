//#define _CRT_SECURE_NO_WARNINGS
////顺序表是一种数据结构，结构是一种将数据依次存放在地址连续的储存单元
////顺序标的储存特点是：
////1.储存元素的地址是连续的（数组与动态内存分配）
////2.通过对首地址的偏移，可以访问所有元素
//
////1.顺序表元素的增加
////2.顺序表元素的删除
////3.顺序表的修改
////4.顺序表的查找
//
////数组的实现
//#include<stdio.h>
//#define ARRSIZE 20
////假设元素的类型为int
//int arr[ARRSIZE] = { 0 };
//int len = 0;//数组当前保存的个数//计数器
////1.顺序表元素的增加
//void ElemAdd(int data)//Elem元素
//{
//	arr[len] = data;
//	len++;
//}
////2.顺序表元素的删除
//   //1.找到要删除的元素，遍历顺序表的元素， 
//     //2.输出后后面的所有元素的下标要向前移动一位，范围为j+1到len-1，j为删除元素的1下标，len为计数器的个数
//       //3元素的个数减1.
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
//				j--;//防止漏减
//			}
//		}
//	}
//}
//	   
////3.顺序表的修改
//void ElemChange(int val,int data,int point)
//{
//	for (int j = 0; j < len - 1; j++)
//	{
//		//if (arr[j] == val)
//		//{
//		//	arr[j] = data;//会将所有的要修改的元素修改，当然可以利用break进行和if、&&进行确定性修改
//		//}
//		if (arr[j] == val)
//		{
//			 static int i = 0; 
//			i++;
//			if (i == point)
//			{
//				arr[j] = data;
//				break;//break跳出所在的循环，for,switch,while而if不是循环
//			}
//		}
//	}
//}
////4.顺序表的查找
//
//void ElemFind(int data)
//{
//	for (int i = 0; i <= len - 1; i++)
//	{
//		if (arr[i] ==data)
//		{
//			printf("%d元素值，位置为%d\n", data, i + 1);
//		}
//	}
//}
////输出顺序表的元素
//void print()
//{
//	for (int i = 0; i < len; i++)//len可以有效防止print多打印，防止打印出来是0而不知道这位真实数据还是没有数据
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int main()
//{
//	//元素的增加
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