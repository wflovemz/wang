#include<stdio.h>
#include<windows.h>
//void quickSort(int arr[], int low, int high)
//{
//	int first = low;
//	int last = high;
//	int key = arr[first];
//	if (low >= high)
//		return;
//	while (first < last)
//	{
//		while (first < last && arr[last] > key)
//		{
//			last--;
//		}
//		arr[first] = arr[last];
//
//		while (first < last && arr[first] < key)
//		{
//			first++;
//		}
//		arr[last] = arr[first];
//	}
//	arr[first] = key;
//
//	quickSort(arr, low, first - 1);
//	quickSort(arr, first + 1, high);
//}

//int main()
//{
//	int i;
//	int arr[] = { 2,3,5,4,1,0,7,8,9,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	quickSort(arr, 0, size-1);
//
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//void MergeData(int* arr, int left, int mid, int  right, int* tmp)
//{
//	int begin1 = left;
//	int end1 = mid;
//	int begin2 = mid;
//	int end2 = right;
//	int count = left;
//
//	while ((begin1 < end1) && (begin2 < end2))
//	{
//		if (arr[begin1] <= arr[begin2])
//		{
//			tmp[count++] = arr[begin1++];
//		}
//		else{
//			tmp[count++] = arr[begin2++];
//		}
//	}
//
//	while (begin1 < end1) {
//		tmp[count++] = arr[begin1++];
//	}
//
//	while (begin2 < end2) {
//		tmp[count++] = arr[begin2++];
//	}
//}

//void R_MergeSort(int* arr, int size)
//{
//	int* tmp = (int*)malloc(sizeof(arr[0])*size);
//	if (NULL == tmp)
//		return;
//	int gap = 1;
//	int left, mid, right;
//	int i;
//	while (gap < size)
//	{
//		for (i = 0; i < size; i += 2 * gap)
//		{
//			left = i;
//			mid = left + gap;
//			if (mid > size){
//				mid = size;
//			}
//			right = mid + gap;
//			if (right > size){
//				right = size;
//			}
//			MergeData(arr, left, mid, right, tmp);
//		}
//		memcpy(arr, tmp, sizeof(arr[0]) * size);
//		gap *= 2;
//	}
//
//	free(tmp);
//}
//
//
//void printf_arr(int arr[], int size)
//{
//	int i = 0;
//	for (; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	//int arr[10] = {2,7,1,4,3,9,6,0,5,8};
//	int arr[10] = { 4, 4, 6, 7, 3, 0, 9, 3, 5, 2 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	R_MergeSort(arr, size);
//	printf_arr(arr, size);
//
//	system("pause");
//	return 0;
//}

//void Insert(int *arr, int size)
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


//void select_sort(int *arr,int size)
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
//void maopao_sort(int *arr, int size)
//{
//	for (int i = 0; i < size-1; i++)
//	{
//		for (int j = 0; j<size-i-1; j++)
//		{
//			int tmp;
//			if (arr[j]>arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 63, 5, 78, 9, 12, 52, 8 };
//	int size = sizeof(arr) / sizeof(int), i;
//	Bubble_Sort(arr, size);
//	for (i = 0; i<size; i++)
//		printf("%d ", arr[i]);
//	system("pause");
//	return 0;
//}
		void quickSort(int arr[], int low, int high)
{
			int first = low;
			int last = high;
			int key = arr[first];
			if (low >= high)
				return;
			while (first < last)
			{
				while (first < last && arr[last] > key)
				{
					last--;
				}
				arr[first] = arr[last];

				while (first < last && arr[first] < key)
				{
					first++;
				}
				arr[last] = arr[first];
			}
			arr[first] = key;

			quickSort(arr, low, first - 1);
			quickSort(arr, first + 1, high);
		}

int main()
{
	int i;
	int arr[] = { 2, 3, 5, 4, 1, 0, 7, 8, 9, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	quickSort(arr, 0, size - 1);

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	system("pause");
	return 0;
}