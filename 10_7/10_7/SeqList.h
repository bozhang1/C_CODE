#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int  SQDataType;

/* ˳��洢���� */
typedef  struct SeqList
{
	SQDataType* a;
	int size;
	int capacity;
}SLT;

// ��ʼ��˳��� 
void SeqListInit(SLT* psl);

void SeqListDestory(SLT* psl);

void SeqListPrint(SLT* psl);


void SeqListCheckCapacity(SLT* psl);

//β��βɾ   ,ͷ��ͷɾ
void SeqListPushBack(SLT* psl, SQDataType x);
void SeqListPushFront(SLT* psl, SQDataType x);
void SeqListPopBack(SLT* psl );
void SeqListPopFront(SLT* psl);


//����
int SeqListFind(SLT* psl, SQDataType x);

//�м����
void SeqListInsert(SLT* psl, size_t pos, SQDataType x);

//ɾ��
/* ��˳�����ɾ��Ԫ�� */
void SeqListErase(SLT* psl, size_t pos);

//
size_t SeqListSize(SLT* psl);
void SeqListAt(SLT* psl, int pos, SQDataType x);

void merge(SLT* L1, int m, SLT* L2, int n);
void AddCapacity(SLT* psl);