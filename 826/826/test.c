#include<stdio.h>
#include<windows.h>

//void insert_sort(int *arr, int size)
//{
//	for (int i = 1; i < size; i++)
//	{
//		int key = arr[i];
//		int end = i - 1;
//		while (key<arr[end] && end>=0)
//		{
//			arr[end+1] = arr[end];
//			end--;
//		}
//		arr[end+1]=key;
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 5, 6, 7, 4, 3, 1, 8, 9 ,0};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	insert_sort(arr, size);
//	for (int i = 0; i < size; i++){
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//void Shell_Sort(int arr[], int size)
//{
//	int gap = size;
//	while (gap >1)
//	{
//		gap = gap / 3 + 1;
//		for (int i = gap; i < size;i++)
//		{
//			int key = arr[i];
//			int end = i - gap;
//			while (key<arr[end] && end>=0)
//			{
//				arr[end + gap] = arr[end];
//				end-=gap;
//			}
//			arr[end + gap] = key;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 63, 5, 78, 9, 12, 52, 8 };
//	int size = sizeof(arr) / sizeof(int), i;
//	Shell_Sort(arr, size);
//	for (i = 0; i<size; i++)
//		printf("%d ", arr[i]);
//	system("pause");
//	return 0;
//}

////void Select_Sort(int *arr, int size)
//{
//	for (int i = 0; i < size; i++){
//		for (int j = i + 1; j < size; j++)
//		{
//			if (arr[i] >arr[j])
//			{
//				int tmp;
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 63, 5, 78, 9, 12, 52, 8 };
//	int size = sizeof(arr) / sizeof(int), i;
//	Select_Sort(arr, size);
//	for (i = 0; i<size; i++)
//		printf("%d ", arr[i]);
//	system("pause");
//	return 0;
//}

//void HeapAdjust(int *arr, int size,int parent)
//{
//	//优先标记左孩子
//	int child = parent*2 + 1;
//	while (child<size)
//	{
//		//找最大孩子
//		if (child+1<size&&arr[child + 1] > arr[child])
//			child += 1;
//		//检测双亲是否比较大孩子大
//		if (arr[child] > arr[parent])
//		{
//			     Swap(&arr[parent], &arr[child]);
//				parent = child;
//			child = parent * 2 + 1;
//		}
//		else{
//			return;
//		}
//
//	}
//}
//void Heap_sort(int *arr, int size)
//{
//	int end = size - 1;
//	//建堆
//	//找倒数第一个非叶子节点
//	for (int root = ((size - 2) >> 1); root >= 0; --root)
//	{
//		HeapAdjust(arr, size,root);
//	}
//	//利用堆删除排序
//	while (end)
//	{
//	    Swap(&arr[0], &arr[end]);
//		HeapAdjust(arr, end, 0);
//		end--;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 63, 5, 78, 9, 12, 52, 8 };
//	Printarr(arr, sizeof(arr) / size(arr[0]));
//	system("pause");
//	return 0;
//} 




void Bubble_Sort(int *arr, int size)
{
	//外层循环控制冒泡的趟数，即需要冒泡多少趟
	for (int i = 0; i < size-1; i++)
	{
		//具体冒泡的方式;依次用相邻两个元素比较，将大的元素往后翻
		//j:表示数组下标--》j表述前一个元素下标
		for (int j = 0; j < size-i-1; j++)
		{
			int tmp = 0;
			if (arr[j]>arr[j + 1])
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
	int arr[] = { 1, 3, 63, 5, 78, 9, 12, 52, 8 };
	int size = sizeof(arr) / sizeof(int), i;
	Bubble_Sort(arr, size);
	for (i = 0; i<size; i++)
		printf("%d ", arr[i]);
	system("pause");
	return 0;
}