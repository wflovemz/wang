#include<stdio.h>
#include<windows.h>

	/*char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));*/

//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//void print(struct stu* ps)
//{
//	printf("name=%s,age=%d", (*ps).name, (*ps).age);
//	//使用结构体指针访问指向对象的成员
//	printf("name=%s,age=%d", ps->name, ps->age);
//}
//int main()
//{
//	struct stu s= { "wangfan", 22 };
//	printf(&s);
//	system("pause");
//	return 0;
//}



//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { { 1, 2, 3, 4 }, 1000 };
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int check_sys()
//{
//	int i = 1;
//	return(*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	system("pause");
//	return 0;
//}
//int check_sys()
//{
//	union
//	{
//		int i;
//		int c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char *pstr = "hello bit";
//	printf("%s\n", pstr);
//	system("pause");
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr= %p\n", &arr);
	printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1= %p\n", &arr + 1);
	system("pause");
	return 0;
}
