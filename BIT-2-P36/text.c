#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ָ������
//����
//void menu()
//{
//	printf("*******************************************\n");
//	printf("*******  1.add               2.sub  *******\n");
//	printf("*******  3.mul               4.div  *******\n");
//	printf("*******            0.exit           *******\n");
//	printf("*******************************************\n");
//}
////�Ż���ͨ���ص�������
//void calc(int(*pf)(int, int))	//�����·�����
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("�����������");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			//printf("�����������");
//			//scanf("%d %d", &x, &y);
//			//ret = add(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 2:
//			calc(sub);
//			//printf("�����������");
//			//scanf("%d %d", &x, &y);
//			//ret = sub(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 3:
//			calc(mul);
//			//printf("�����������");
//			//scanf("%d %d", &x, &y);
//			//ret = mul(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 4:
//			calc(div);
//			//printf("�����������");
//			//scanf("%d %d", &x, &y);
//			//ret = div(x, y);
//			//printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


/********************************����ָ���������;��ת�Ʊ�*****************************/
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //ת�Ʊ�
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add 2:sub \n");
//		printf(" 3:mul 4:div \n");
//		printf("*************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("��������\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}

//7. ָ����ָ�������ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int(*pfarr[4])(int, int);//pfarr��һ������ָ������ ----- ����ÿ��Ԫ�ص�����Ϊ����ָ��
//	int(*(*ppfarr)[4])(int, int) = &pfarr;//ppfarr --��һ��ָ�� ����ָ������ ����ָ��
//	//
//	//ppfarr ��һ������ָ�� ��ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(* )(int ,int)
//
//	return 0;
//}

////8. �ص�����
////
////���ƣ��ص���������
//void print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//void test(void(*p)(char*))
//{
//	printf("text\n");
//	p("bit");//����print������print��������Ϊ�ص�����
//
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//�о�qsort���ú���
// 
//ð��������
void BubbleSort(int arr[], int sz)
{
	//....
}

//qsort -- ���������������͵�����

int main()
{
	//ð��������ֻ��������������
	int arr[] = { 1,3,4,5,2,6,7,9,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}