#include<stdio.h>
#include<windows.h>
void InsertionSort(int *arr, int size)
{
	int i, j, tmp;
	for (i = 1; i < size; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			tmp = arr[i];
			for (j = i - 1; j >= 0 && arr[j]>tmp; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = tmp;
		}
	}
}
int main()
{
	int i;
	int arr[] = { 3, 1, 5, 6, 4, 2, 7, 9, 8, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	InsertionSort(arr,size);
	for (i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}