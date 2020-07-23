#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include <assert.h>
#include <malloc.h>




//初始化
void SeqListInit(struct SeqList* s, int initCapacity);
{
	assert(s);
	initCapacity = initCapacity <= 10 ? 10 : initCapacity;
	s->array = (SDataType*)malloc(sizeof(SDataType)*initCapacity);
	if (NULL = s->array)
		return;
	s->Capacity = initCapacity;
	s->size = 0;
}

//尾插
void SeqListPushBack(struct SeqList* s, SDataType data);
{
	assert(s);
	s->array[s->size++] = data;
	//s->size++;
}

//尾删
void SeqListPopBack(SeqList* s);
{
	assert(s);
	if (SeqListEmpty(s))
		return;
	s->size--;
}

//头插
void SeqListPushFront(SeqList* s, SDataType data);

//头删
void SeqListPopFront(SeqList* s);

//任意位置插入
void SeqListInsert(SeqList* s, int pos, SDataType data);

//任意位置删除
void SeqListErase(SeqList* s, int pos);

//获取顺序表中有效元素个数
int SeqListSize(SeqList* s);
{
	assert(s);
	return s->size;
}

//获取顺序表的容量
int SeqListCapacity(SeqList* s);

//检测顺序表是否为空
int SeqListEmpty(SeqList* s);
{
	assert(s);
	return 0 == s->size;
}

//清空
int SeqListClear(SeqList* s);
{
	assert(s);
	s->size = 0;
}

//查找值为data的元素是否在顺序表中,如果在返回下标，不在，返回-1
int SeqListFind(SeqList* s, SDataType data);
{
	assert(s);
	for (int i = 0; i < s->size; ++i)
	{
		if (s->array[i] == data)
			return i;
	}
	return -1;
}


void SeqListDestroy(SeqList* s);
{
	assert(s);
	if (s->array)
	{
		free(s->array);
		s->array = NULL;
		s->capacity = 0;
		s->size = 0;
	}
}



/////////////////////////
//测试方式
void SeqListprint(SeqList* s)
{
	assert(s);
	for (int i = 0; i < s->size; ++i)
	{
		printf("&d ",s->array[i]);
		printf("\n");
	}
}


void TestSeqList()
{
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);


	printf("%d\n", SeqListSize(&s));
	printf("%d\n", SeqListCapacity(&s));
	SeqListPrint(&s);

	SeqListDestroy(&s);
	
}