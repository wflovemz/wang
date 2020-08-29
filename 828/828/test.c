#include<stdio.h>
#include<windows.h>

//void select_sort(int *arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				int tmp;
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//void quick_sort(int *arr,int begin, int end)
//{
//	int first = begin;
//	int last = end;
//	int key = arr[first];
//	if (first >= last)
//		return;
//	while (first < last)
//	{
//		while (first<last&&arr[last]>key)
//		{
//			last--;
//		}
//		arr[first] = arr[last];
//		while (first < last&&arr[first] < key)
//		{
//			first++;
//		}
//		arr[last] = arr[first];
//	}
//	arr[first] = key;
//
//	quick_sort(arr, begin, first - 1);
//	quick_sort(arr, first + 1, end);
//}
void Bubble_sort(int *arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			int tmp;
			if (arr[j]>arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 2, 3, 4, 5, 7, 6, 8, 9, 0, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}