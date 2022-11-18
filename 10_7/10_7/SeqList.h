#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int  SQDataType;

/* 顺序存储类型 */
typedef  struct SeqList
{
	SQDataType* a;
	int size;
	int capacity;
}SLT;

// 初始化顺序表 
void SeqListInit(SLT* psl);

void SeqListDestory(SLT* psl);

void SeqListPrint(SLT* psl);


void SeqListCheckCapacity(SLT* psl);

//尾插尾删   ,头插头删
void SeqListPushBack(SLT* psl, SQDataType x);
void SeqListPushFront(SLT* psl, SQDataType x);
void SeqListPopBack(SLT* psl );
void SeqListPopFront(SLT* psl);


//查找
int SeqListFind(SLT* psl, SQDataType x);

//中间插入
void SeqListInsert(SLT* psl, size_t pos, SQDataType x);

//删除
/* 从顺序表中删除元素 */
void SeqListErase(SLT* psl, size_t pos);

//
size_t SeqListSize(SLT* psl);
void SeqListAt(SLT* psl, int pos, SQDataType x);

void merge(SLT* L1, int m, SLT* L2, int n);
void AddCapacity(SLT* psl);