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

//创建一个线性表
int IntitList(SqList& L);

//销毁一个线性表
int DestroyList(SqList& L);

//清空一个线性表
int ClearList(SqList& L);

//判断一个线性表是否为空表
int ListEmpty(SqList L);

//线性表长度
int ListLength(SqList L);

//获得线性表第i元素，赋值给e
int GetElem(SqList L, int i, int& e);

//查找元素e在几号位置上，
int LocateElem(SqList L, int e);

//获得新元素cue_e的前一个元素，赋值给pre_e
int PriorElem(SqList L, int cue_e, int& pre_e);

//获得新元素cue_e的后一个元素，赋值给pre_e
int NextElem(SqList L, int  cur_e, int& next_e);

//在i个元素之前插入
int ListInsert(SqList& L, int i, int e);

//删除第i个元素
int ListDelete(SqList& L, int i, int e);

//遍历打印
int ListTraverse(SqList L);

void merge(SqList* L1, int m, SqList* L2, int n);
