#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#pragma warning (disable:4996)

	//int arr1[10];

	//int count = 10;
	//int arr2[count];

	//char arr3[10];

	//int arr4[] = "abc";
	//int arr5[3] = { 'a', 'b', 'c' };
	//float arr4[1];
	//double arr5[20];
	/*int arr[10] = { 0 };*/
	/*int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i<10; i++)
	{
		printf("%d\n",arr[i]);
	}
	system("pause");*/



	//int arr[3][4] = { 1, 2, 3, 4 };//  长度为3的一维数组，每个元素又是长度为4
	//int arr1[3][4] = { { 1, 2 }, { 3, 4 } };
	//int arr2[][4] = { { 2.3 }, { 4, 5 } };
	
//int main()
//{

	//int arr[3][4];
	//int i = 0;
	//for (i = 0; i<3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j<4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
	//	}
	//}
	//system("pause");
	/*int num1 = 1;
	int num2 = 2;
	num1 & num2;
	num1 | num2;
	num1 ^ num2;*/
	//int a = 5;
	//int b = 6;
	//a = a^b;
	//b = a^b;
	//a = a^b;
	//printf("%d  %d", a, b);
int main()
{
	/*int a;
	scanf("输入:%d",&a);
	printf("%d", a);*/
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
	{
		printf("a");
	}
	if (b == 0xb600)
	{
		printf("b");
	}
	if (c == 0xb6000000)
	{
		printf("c");
	}
	system("pause");
	return 0;
}