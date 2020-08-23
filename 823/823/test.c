#include<stdio.h>
#include<windows.h>
#include<assert.h>
#include<string.h>
//int strlen(const char *a)
//{
//	int count = 0;
//	while ((*a++) != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//void strcpy(char *dest, char *src)
//{
//	while ((*dest++ = *src++) && *src != '\0')
//		*dest++ = '\0';
//}
//int main()
//{
	/*int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int*)(&a + 1);
	printf("%d,%d",*(a+1),*(ptr-1));*/
	/*int a[4] = { 1, 2, 3, 4 };
	int *ptr = (int*)(&a + 1);
	int *ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr[-1], *ptr2);*/
	/*int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	system("pause");
	return 0;*/
	/*char a[] = "abcdef";
	int len = strlen(a);
	printf("%d\n", len);*/
//	char a[] = "abcdef";
//	char c[7];
//	strcpy(c, a);
//	printf("%s\n", c);
//	system("pause");
//	return 0;
//}

//void My_strcpy(char *dest, const char *src)             //加const的目的是为了保证src所指向的字符串不被外界因素改变
//{
//	while ((*dest++ = *src++) && *src != '\0')        //将src里的字符复制给dest
//		;
//	*dest++ = '\0';                              //上面的复制并没有将\0复制给dest，所以这里要加上
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char aim[7];
//	My_strcpy(aim, arr);
//	printf("%s\n", aim);
//	system("pause");
//	return 0;
//}
//char* my_strcat(char* dest, char* src)
//{
//	char *cp = dest;
//	assert(src && dest);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//
//	}
//	return cp;
//}
//
//int main()
//{
//	char str[32] = "abcd";
//	char buf[32] = "efgh";
//	printf("%s\n", my_strcat(str, buf));
//	system("pause");
//	return 0;
//}
//int atrcmp(const char* arr1, const char *arr2)
//{
//	int ret = 0;
//	assert(arr1);
//	assert(arr2);
//	while (ret = (*(unsigned char*)arr1 - *(unsigned char *)arr2) && *arr1)
//	{
//		arr2++;
//		arr1++;
//	}
//	if (ret < 0)
//		return -1;
//	else if (ret>0)
//		return 1;
//	else
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "123abcd";
//	char arr2[] = "123Abcd";
//	char arr3[] = "123Abcd";
//	printf("%d\n", strcmp(arr1, arr2));
//	printf("%d\n", strcmp(arr2, arr3));
//	printf("%d\n", strcmp(arr3, arr1));
//	system("pause");
//	return 0;
//}
//char* my_strstr(const char*str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//下面这个if语句判断str2是不是空的，
//	//如果是空则直接返回str1
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//
//	while (*str1 != '\0')//当str1没到‘\0’时，执行下面，否则返回NULL
//	{
//		const char* p1 = str1;//创建新指针指向str1
//		const char* p2 = str2;//同上
//		while (*p2 != '\0')
//		{
//			if (*p1 != *p2)
//			{
//				break;
//			}
//			else
//			{
//				p1++;
//				p2++;
//			}
//		}
//		if ('\0' == *p2)
//		{
//			return (char*)str1;
//		}
//		++str1;
//	}
//	return NULL;
//}
//int main()
//{
//	char *str1 = "hello world";
//	char *str2 = "llo";
//	printf("%s", strstr(str1, str2));
//
//	system("pause");
//	return 0;
//}

//void memcpy(void *dest, void *src, size_t n)
//{
//	assert(dest);
//	assert(src);
//	char* dpest = (char*)dest;
//	const char* psrc = (const char*)src;
//	while (n--)
//	{
//		*dpest++ = *psrc++;
//	}
//	return dpest;
//}

//void *memove(void *dest, const void* src, size_t num)
//{
//	void *ret = dest;
//	char *str1 = (char*)dest;
//	char *str2 = (char*)src;
//	if (str1 < str2)
//	{
//		while (num--)
//		{
//			*(str1 + num) = *(str2 + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*str1++ = str2++;
//		}
//	}
//	return ret;
//}

void *memcmp(void *dest, const void* src, size_t num)
{
	void *ret = dest;
	assert(dest);
	assert(src);
	while (num--)
	{
		*(char*)dest = *(char *)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return (ret);
}