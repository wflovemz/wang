
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
//	DataType* _arr;  //动态数组存储
//	size_t _size;     //有效元素个数
//	size_t _capacity;  //容量
//}SeqList;
//
//void Init(SeqList* s);   // 初始化
//void Destory(SeqList* s);  //  销毁
//void Reserve(SeqList* s, size_t new_capacity);  //扩容
//void PushBack(SeqList* s, DataType val);  //尾插
//void PopBack(SeqList* s);  //尾插
//void PushFront(SeqList* s, DataType val); //头插
//void PopFront(SeqList* s);   //头删
//void Insert(SeqList* s, size_t pos, DataType val); //pos位置插入
//void Erase(SeqList* s, size_t pos);  //POS位置删除
//void Find(SeqList* s, DataType val);  //查找
//typedef char dataype_bt;  //声明二叉树中存放的数据类型，便于后续更改
//
//typedef struct btreenode       //二叉树的节点结构  存放的数据 该节点的左  右子节点地址
//{
//	dataype_bt data;
//	struct btreenode *lchild, *rchild;
//}btree_node,*btree_pnode;
//
//void create_btree(btree_pnode *T)          //通过递归方法创建一个二叉树（功能同上）
//{
//	dataype_bt ch;
//	scanf("%c", &ch);
//	if ('#' == ch)
//	{
//		return;
//	}
//	else{
//		//创建根结点
//		(*T) = (btree_pnode)malloc(sizeof(btree_node));
//		if (NULL == (*T))
//		{
//			perror("malloc");
//			exit(-1);
//		}
//		(*T)->data = ch;
//		//用相同方法创建左子数
//		create_btree(&((*T)->lchild));
//		//用相同方法创建右子数
//		create_btree(&((*T)->rchild));
//	}
//}
//void pre_order(btree_pnode t)     //采用递归方法先序遍历
//{
//	if (t != NULL)
//	{
//		//访问根节点
//		printf("%c", t->data);
//		//先序遍 历左子树
//		pre_order(t->lchild);
//		//先序遍历右子树
//		pre_order(t->rchild);
//	}
//}
//
//void mid_order(btree_pnode t)    //采用递归方法中序遍历
//{
//	if (t != NULL)
//	{
//		//中序遍历左子树
//		mid_order(t->lchild);
//		//访问根节点
//		printf("%c", t->data);
//		//中序遍历右子树
//		mid_order(t->rchild);
//	}
//}
//
//void post_order(btree_pnode t)    //采用递归方法后序遍历
//{
//	if (t != NULL)
//	{
//		//后序遍历右子树
//		post_order(t->rchild);
//		//后序遍历左子树
//		post_order(t->lchild);
//	    //访问根节点
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
//	while (h < size / 3)   //计算步长
//	{
//		h = 3 * h + 1;
//	}
//	int i, j, temp;
//	while (h >= 1)
//	{
//		for (i = h; i < size; i++)
//		{
//			//将a[i]插入到a[i-h]，a[i-2h],a[i-3h]..中
//			for (j = 1; j >= h && (arr[j] < arr[j - h]); j -= h)
//			{
//				temp = arr[j];
//				arr[j] = arr[j - h];
//				arr[j - h] = temp;
//			}
//		}
//		//每轮内循环后输出数组的现状
//		int k;
//		printf("step=%d: ", h);
//		for (k = 0; k < size; k++)
//		{
//			printf("%d", arr[k]);
//		}
//		printf("\n");
//		h = h / 3;  //计算下一步步长
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
	int h = 1; /* 关于步长，取值没有统一标准，必须小于size，最后一次步长要为1 */

	/* 计算首次步长 */
	while (h < size / 3)
		h = 3 * h + 1;

	int i, j, temp;
	while (h >= 1) {
		for (i = h; i < size; ++i) {
			/* 将a[i]插入到a[i-h]、a[i-2h]、a[i-3h]...中 */
			for (j = i; j >= h && (arr[j] < arr[j - h]); j -= h) {
				temp = arr[j];
				arr[j] = arr[j - h];
				arr[j - h] = temp;
			}
		}

		/* 每轮内循环后输出数组的现状 */
		int k;
		printf("the step=%d : ", h);
		for (k = 0; k < size; ++k) {
			printf("%d ", arr[k]);
		}
		printf("\n");

		/* 计算下一轮步长 */
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
