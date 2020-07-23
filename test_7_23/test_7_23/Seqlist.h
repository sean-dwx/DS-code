# pragma once
typedef struct SeqList
{
	SDataType* array;  //存放元素的空间，不够时再申请更大的
	int capacity;  //空间总的大小
	int size;  //空间中有效元素的个数
}SeqList;


void SeqListInit(struct SeqList* s, int initCapacity);

//尾插
void SeqListPushBack(struct SeqList* s,SDataType data);

//尾删
void SeqListPopBack(SeqList* s);

//头插
void SeqListPushFront(SeqList* s, SDataType data);

//头删
void SeqListPopFront(SeqList* s);

//任意位置插入
void SeqListInsert(SeqList* s, int pos, SDataType data);

//任意位置删除
void SeqListErase(SeqList* s,int pos);

//获取顺序表中有效元素个数
int SeqListSize(SeqList* s);

//获取顺序表的容量
int SeqListCapacity(SeqList* s);

//检测顺序表是否为空
int SeqListEmpty(SeqList* s);

//清空
int SeqListClear(SeqList* s);

//查找值为data的元素是否在顺序表中,如果在返回下标，不在，返回-1
int SeqListFind(SeqList* s,SDataType data);

//销毁
void SeqListDestroy(SeqList* s);