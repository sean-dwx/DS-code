#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include <assert.h>
#include <malloc.h>




//��ʼ��
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

//β��
void SeqListPushBack(struct SeqList* s, SDataType data);
{
	assert(s);
	s->array[s->size++] = data;
	//s->size++;
}

//βɾ
void SeqListPopBack(SeqList* s);
{
	assert(s);
	if (SeqListEmpty(s))
		return;
	s->size--;
}

//ͷ��
void SeqListPushFront(SeqList* s, SDataType data);

//ͷɾ
void SeqListPopFront(SeqList* s);

//����λ�ò���
void SeqListInsert(SeqList* s, int pos, SDataType data);

//����λ��ɾ��
void SeqListErase(SeqList* s, int pos);

//��ȡ˳�������ЧԪ�ظ���
int SeqListSize(SeqList* s);
{
	assert(s);
	return s->size;
}

//��ȡ˳��������
int SeqListCapacity(SeqList* s);

//���˳����Ƿ�Ϊ��
int SeqListEmpty(SeqList* s);
{
	assert(s);
	return 0 == s->size;
}

//���
int SeqListClear(SeqList* s);
{
	assert(s);
	s->size = 0;
}

//����ֵΪdata��Ԫ���Ƿ���˳�����,����ڷ����±꣬���ڣ�����-1
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
//���Է�ʽ
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