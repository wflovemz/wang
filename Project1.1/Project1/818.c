#include<windows.h>
#include<stdio.h>
#pragma warning (disable:4996)
//int a = 10;//全局变量
//int main()
//{
//	int c = 4;//局部变量
//	int b = 5;//局部变量
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}
//enum sex
//{
//	wo,
//	shi,
//};
//int main()
//{
//	4;//字面常量
//	5.3;
//	const float c = 3.14f;//const修饰的常量
//    #define MAX 100   //#define的标识符常量

//	//printf("%s\n", "\"");
//	int main()

//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//int main()
//{
//	int a=0;
//	scanf("%d",&a);
//	if (a == 1)
//	{
//		printf("加油\n");
//	}
//	else
//		printf("放弃\n");
//int main()
//{
//	int a = 0;
//	while (a < 4)
//	{
//		a++;
//		printf("%d\n", a);
//	}
//int main()
//{
//	int i = 0;
//	int array[4] = { 1, 2, 3, 4 };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", array[i]);
//	}
//	system("pause");
//#define MAX 100
//#define add(x,y)(x+y)
//int main()
//{
//	int sum = add(2, 3);
//	printf("sum=%d\n", sum);
//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", &a);
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	system("pause");
//    return 0;
//}

struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[5];
};
//int main()
//{
//	struct Stu s = { "王帆",22, "男","2827" };
//	printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
//	struct Stu *ps = &s;
//	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf("周一\n");
//		break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周天\n");
//		break;
//	}
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf(" %d" , i);
//	}
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int a = 9;
//	int b = 8;
//	int max = get_max(a, b);
//	printf("max=%d", max);
//	system("pause");
//	return 0;
//}
void print(int a)
{
	if (a > 9)
	{
		print(a / 10);
	}
	printf(" %d\n", a % 10);
}
int main()
{
	int a = 567;
	print(a);
	system("pause");
	return 0;
}