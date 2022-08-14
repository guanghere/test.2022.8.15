#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//4.完成上课的猜数字游戏

////5.编写代码在一个整形有序数组中查找具体的某个数
////要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//
//
//int main() {
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//数组有10个元素，一个元素4字节
//	//			4*10		4
//	int sz = (sizeof(arr)/sizeof(arr[0]));
//	//int left = arr[0]-1;		//左下标
//	int left = 0;//左下标都为0
//
//	int right = sz-1;		//右下标
//
//	int num = 7;		//寻找的数
//
//	//			mid是一个值
//	//			arr[mid]才是数组的中间元素的下标
//	while (left <= right) {
//
//		int mid = left + (right - left) / 2;
//		//	可以理解为	0	+	[(10-0)/2]
//
//		if (arr[mid] < num) {
//			left = mid + 1;
//		}
//
//		else if (arr[mid] > num) {
//			right = mid - 1;
//		}
//
//		else //相等
//		{	
//			printf("找到了,下标是%d\n",mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到");
//	}
//	return 0;
//}










//3.在屏幕上输出9*9乘法口诀表

//int main() {
//	int a = 0;//列
//	int b = 0;//行
//
//	for (a = 1; a <= 9; a++) {
//		for (b = 1; b <= a; b++) {
//			printf("%d*%d=%2d ", b, a, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
// 
// 
//6.编写程序数一下 1到 100 的所有整数中出现多少个数字9
//
//int main() {
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++) {
//		if (a / 10 == 9) {
//			printf("%d ", a);
//			count++;
//		}
//		if (a % 10 == 9) {
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


