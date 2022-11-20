#pragma once
#include<stdio.h>
#include<stdlib.h>
#define LIST_INIT_SIZE 10

typedef struct
{
	int* elem;
	int length;
	int listsize;

}SqList;

//����һ�����Ա�
int IntitList(SqList& L);

//����һ�����Ա�
int DestroyList(SqList& L);

//���һ�����Ա�
int ClearList(SqList& L);

//�ж�һ�����Ա��Ƿ�Ϊ�ձ�
int ListEmpty(SqList L);

//���Ա���
int ListLength(SqList L);

//������Ա��iԪ�أ���ֵ��e
int GetElem(SqList L, int i, int& e);

//����Ԫ��e�ڼ���λ���ϣ�
int LocateElem(SqList L, int e);

//�����Ԫ��cue_e��ǰһ��Ԫ�أ���ֵ��pre_e
int PriorElem(SqList L, int cue_e, int& pre_e);

//�����Ԫ��cue_e�ĺ�һ��Ԫ�أ���ֵ��pre_e
int NextElem(SqList L, int  cur_e, int& next_e);

//��i��Ԫ��֮ǰ����
int ListInsert(SqList& L, int i, int e);

//ɾ����i��Ԫ��
int ListDelete(SqList& L, int i, int e);

//������ӡ
int ListTraverse(SqList L);

void merge(SqList* L1, int m, SqList* L2, int n);
