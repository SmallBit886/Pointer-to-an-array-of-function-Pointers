#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数指针数组
//案例
//void menu()
//{
//	printf("*******************************************\n");
//	printf("*******  1.add               2.sub  *******\n");
//	printf("*******  3.mul               4.div  *******\n");
//	printf("*******            0.exit           *******\n");
//	printf("*******************************************\n");
//}
////优化（通过回调函数）
//void calc(int(*pf)(int, int))	//消除下方冗余
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("输入操作数：");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			//printf("输入操作数：");
//			//scanf("%d %d", &x, &y);
//			//ret = add(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 2:
//			calc(sub);
//			//printf("输入操作数：");
//			//scanf("%d %d", &x, &y);
//			//ret = sub(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 3:
//			calc(mul);
//			//printf("输入操作数：");
//			//scanf("%d %d", &x, &y);
//			//ret = mul(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 4:
//			calc(div);
//			//printf("输入操作数：");
//			//scanf("%d %d", &x, &y);
//			//ret = div(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


/********************************函数指针数组的用途：转移表*****************************/
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add 2:sub \n");
//		printf(" 3:mul 4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}

//7. 指向函数指针数组的指针
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfarr[4])(int, int);//pfarr是一个函数指针数组 ----- 数组每个元素的类型为函数指针
//	int(*(*ppfarr)[4])(int, int) = &pfarr;//ppfarr --是一个指向【 函数指针数组 】的指针
//	//
//	//ppfarr 是一个数组指针 ，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(* )(int ,int)
//
//	return 0;
//}

////8. 回调函数
////
////机制：回调函数机制
//void print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//void test(void(*p)(char*))
//{
//	printf("text\n");
//	p("bit");//调用print函数：print函数被称为回调函数
//
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//研究qsort内置函数
// 
//冒泡排序函数
void BubbleSort(int arr[], int sz)
{
	//....
}

//qsort -- 可以排序任意类型的数据

int main()
{
	//冒泡排序函数只能排序整形数组
	int arr[] = { 1,3,4,5,2,6,7,9,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}