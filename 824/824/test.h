#include"test.c"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


void Init(SeqList* s)
{
	s->_arr = NULL;
	s->_size = s->_capacity = 0;
}
void Destory(SeqList* s)
{
	if (s->_arr)
	{
		free(s->_arr);
		s->_arr = NULL;
		s->_size = s->_capacity = 0;
	}
}
void Reserve(SeqList* s, size_t new_capacity)
{
	DataType* temp = (DataType*)malloc(sizeof(DataType)*new_capacity);

		if (s->_arr)
		{
			memcpy(temp, s->_arr, sizeof(DataType)*s->_size);
		}
		free(s->_arr);
		s->_arr = temp;
		s->_capacity = new_capacity;
}
void PushBack(SeqList* s, DataType val)
{
	if (s->_size == s->_capacity)
	{
		size_t new_capacity = s->_capacity == 0 ? 2 : s->_capacity * 2;
		Reserve(s, new_capacity);
	}
	s->_arr[s->_size++] = val;
}
void PopBack(SeqList* s)
{
	assert(s->_arr != NULL);
		--s->_size;
}
void PushFront(SeqList* s, DataType val)
{
	if (s->_size == s->_capacity)
	{
		size_t new_capacity = s->_capacity == 0 ? 2 : s->_capacity * 2;
		Reserve(s, new_capacity);
	}
	size_t end = s->_size;
	while (end > 0)
	{
		s->_arr[end] = s->_arr[end - 1];
		--end;
	}
	s->_arr[0] = val;
	++s->_size;
}
void PopFront(SeqList* s)
{
	assert(s->_arr != NULL);
	size_t begin = 1;
	while (begin < s->_size)
	{
		s->_arr[begin - 1] = s->_arr[begin];
		++begin;
	}
	--s->_size;
}
void Insert(SeqList* s, size_t pos, DataType val)
{
	assert(pos <= s->_size);
	if (s->_size == s->_capacity)
	{
		size_t new_capacity = s->_capacity == 0 ? 2 : s->_capacity * 2;
		Reserve(s, new_capacity);
	}

	size_t end = s->_size;
	while (end > pos)
	{
		s->_arr[end] = s->_arr[end - 1];
		--end;
	}
	s->_arr[pos] = val;
	++s->_size;
}
void Erase(SeqList* s, size_t pos)
{
	assert(pos < s->_size);
	size_t begin = pos + 1;
	while (begin < s->_size)
	{
		s->_arr[begin - 1] = s->_arr[begin];
		++begin;
	}
	--s->_size;
}
int Find(SeqList* s, DataType val)
{
	for (size_t i = 0; i < s->_size; ++i)
	{
		if (s->_arr[i] == val)
		{
			return i;
		}
	}
	return -1;
}

