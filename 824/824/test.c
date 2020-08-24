
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//{
//	int arr = (int )malloc(10 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//	   free(arr);
//}
//void test()
//{
//	int *p = (int *)malloc(sizeof(100));
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int  main()
//{
//	  test();
//	  return  0;
//}

//typedef struct st_type
//{
//	int i;
//	int a[0];
//}type_a;
//printf("%d\n", sizeof(type_a));
//typedef unsigned int size_t;
//typedef int DataType;
//typedef struct SeqList
//{
//	DataType* _arr;  //��̬����洢
//	size_t _size;     //��ЧԪ�ظ���
//	size_t _capacity;  //����
//}SeqList;
//
//void Init(SeqList* s);   // ��ʼ��
//void Destory(SeqList* s);  //  ����
//void Reserve(SeqList* s, size_t new_capacity);  //����
//void PushBack(SeqList* s, DataType val);  //β��
//void PopBack(SeqList* s);  //β��
//void PushFront(SeqList* s, DataType val); //ͷ��
//void PopFront(SeqList* s);   //ͷɾ
//void Insert(SeqList* s, size_t pos, DataType val); //posλ�ò���
//void Erase(SeqList* s, size_t pos);  //POSλ��ɾ��
//void Find(SeqList* s, DataType val);  //����
//typedef char dataype_bt;  //�����������д�ŵ��������ͣ����ں�������
//
//typedef struct btreenode       //�������Ľڵ�ṹ  ��ŵ����� �ýڵ����  ���ӽڵ��ַ
//{
//	dataype_bt data;
//	struct btreenode *lchild, *rchild;
//}btree_node,*btree_pnode;
//
//void create_btree(btree_pnode *T)          //ͨ���ݹ鷽������һ��������������ͬ�ϣ�
//{
//	dataype_bt ch;
//	scanf("%c", &ch);
//	if ('#' == ch)
//	{
//		return;
//	}
//	else{
//		//���������
//		(*T) = (btree_pnode)malloc(sizeof(btree_node));
//		if (NULL == (*T))
//		{
//			perror("malloc");
//			exit(-1);
//		}
//		(*T)->data = ch;
//		//����ͬ��������������
//		create_btree(&((*T)->lchild));
//		//����ͬ��������������
//		create_btree(&((*T)->rchild));
//	}
//}
//void pre_order(btree_pnode t)     //���õݹ鷽���������
//{
//	if (t != NULL)
//	{
//		//���ʸ��ڵ�
//		printf("%c", t->data);
//		//����� ��������
//		pre_order(t->lchild);
//		//�������������
//		pre_order(t->rchild);
//	}
//}
//
//void mid_order(btree_pnode t)    //���õݹ鷽���������
//{
//	if (t != NULL)
//	{
//		//�������������
//		mid_order(t->lchild);
//		//���ʸ��ڵ�
//		printf("%c", t->data);
//		//�������������
//		mid_order(t->rchild);
//	}
//}
//
//void post_order(btree_pnode t)    //���õݹ鷽���������
//{
//	if (t != NULL)
//	{
//		//�������������
//		post_order(t->rchild);
//		//�������������
//		post_order(t->lchild);
//	    //���ʸ��ڵ�
//		printf("%c", t->data);
//	}
//}

//void InsertionSort(int *arr, int size)
//{
//	int i, j, tmp;
//	for (i = 1; i < size; i++)
//	{
//		if (arr[i] < arr[i - 1])
//		{
//			tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j]>tmp; j--)
//			{
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

//void shell_sort(int arr[], int size)
//{
//	if (arr == NULL)
//		return;
//	int h = 1;
//	while (h < size / 3)   //���㲽��
//	{
//		h = 3 * h + 1;
//	}
//	int i, j, temp;
//	while (h >= 1)
//	{
//		for (i = h; i < size; i++)
//		{
//			//��a[i]���뵽a[i-h]��a[i-2h],a[i-3h]..��
//			for (j = 1; j >= h && (arr[j] < arr[j - h]); j -= h)
//			{
//				temp = arr[j];
//				arr[j] = arr[j - h];
//				arr[j - h] = temp;
//			}
//		}
//		//ÿ����ѭ��������������״
//		int k;
//		printf("step=%d: ", h);
//		for (k = 0; k < size; k++)
//		{
//			printf("%d", arr[k]);
//		}
//		printf("\n");
//		h = h / 3;  //������һ������
//		
//	}
//}
//int main()
//{
//	int arr[] = { 6, 5, 3, 1, 8, 7, 2, 4, 9, 0 };
//	int size = sizeof(arr) / sizeof(int);
//
//	shell_sort(arr, size);
//	 
//	int i = 0;
//	for (i; i < size; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

void shell_sort(int arr[], int size)
{
	if (arr == NULL)
		return;
	int h = 1; /* ���ڲ�����ȡֵû��ͳһ��׼������С��size�����һ�β���ҪΪ1 */

	/* �����״β��� */
	while (h < size / 3)
		h = 3 * h + 1;

	int i, j, temp;
	while (h >= 1) {
		for (i = h; i < size; ++i) {
			/* ��a[i]���뵽a[i-h]��a[i-2h]��a[i-3h]...�� */
			for (j = i; j >= h && (arr[j] < arr[j - h]); j -= h) {
				temp = arr[j];
				arr[j] = arr[j - h];
				arr[j - h] = temp;
			}
		}

		/* ÿ����ѭ��������������״ */
		int k;
		printf("the step=%d : ", h);
		for (k = 0; k < size; ++k) {
			printf("%d ", arr[k]);
		}
		printf("\n");

		/* ������һ�ֲ��� */
		h = h / 3;
	}

}

int main()
{
	int arr[] = { 6, 5, 3, 1, 8, 7, 2, 4, 9, 0 };
	int size = sizeof(arr) / sizeof(int);

	//sort
	shell_sort(arr, size);

	//print
	int i = 0;
	for (i; i < size; ++i) {
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}
