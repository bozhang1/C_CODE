#include"SeqList.h"
/* 初始化顺序表   Status InitList_Sq*/
void SeqListInit(SLT* psl)
{
	assert(psl);

	psl->a =NULL;
	psl->size =psl->capacity= 0;

}
//释放空间
void SeqListDestory(SLT* psl)
{
	assert(psl);
	if (psl->a)
	{
		free(psl->a);
		psl->a = NULL;
	}
	psl->size = psl->capacity = 0;
}


void SeqListPushBack(SLT* psl, SQDataType x)
{ 
	assert(psl);
	SeqListCheckCapacity(psl);
	psl->a[psl->size] = x;
	psl->size++;
}
//访问函数-打印出数组中的数据元素值
void SeqListPrint(SLT* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}
//增容
void SeqListCheckCapacity(SLT* psl)
{
	assert(psl);
	//看满了没？增容
	if (psl->capacity == psl->size)
	{
		size_t newcapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		psl->a = realloc(psl->a, newcapacity * sizeof(SQDataType));
		psl->capacity = newcapacity;
	}
}
void AddCapacity(SLT* psl,SLT*sl)
{
	size_t newcapacity = psl->capacity + sl->capacity;
	psl->a = realloc(psl->a, newcapacity * sizeof(SQDataType));
	psl->capacity = newcapacity;
}

void SeqListPushFront(SLT* psl, SQDataType x)
{
	assert(psl);
	SeqListCheckCapacity(psl);
	//挪动数据

	int end = psl->size - 1;
	while (end>=0)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}

	psl->a[0] = x;
	psl->size++;
}
void SeqListPopBack(SLT* psl)
{
	assert(psl);
	assert(psl->size > 0);
	psl->size--;
}
void SeqListPopFront(SLT* psl)
{
	assert(psl);
	assert(psl->size > 0);
	/*int begin = 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;*/
	SeqListErase(psl, 0);
}
//查找   从顺序表中查找与给定元素值相同的元素在顺序表中的位置  int LocateElem(SqList L, ElemType e)
int SeqListFind(SLT* psl, SQDataType x)
{
	assert(psl);
	for (size_t i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//插入  向顺序表中插入元素  Status ListInsert_Sq(SqList &L, int i, ElemType e)
void SeqListInsert(SLT* psl, size_t pos, SQDataType x)
{
	assert(psl);
	assert(pos <= psl->size);
	SeqListCheckCapacity(psl);
	//这里容易出错！要多借用一个空间，避免pos和end为0导致整形提升
	size_t end = psl->size ;
	while (end >= pos)
	{
		psl->a[end] = psl->a[end - 1];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;
}
//消除 Status ListDelete_Sq(SqList &L , int i, ElemType e)
void SeqListErase(SLT* psl, size_t pos)
{
	assert(psl);
	assert(pos < psl->size);
	//begin和pos不同，逻辑可以说清楚就行
	size_t begin = pos + 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		++begin;
	}
	psl->size--;
	//pos和begin在同一位置
	/*size_t begin = pos ;
	while (begin < psl->size-1)
	{
		psl->a[begin] = psl->a[begin+1];
		++begin;
	}
	psl->size--;*/
}

//查数据
size_t SeqListSize(SLT* psl)
{
	assert(psl);
	return psl->size;
}
//检查位置.覆盖
void SeqListAt(SLT* psl, size_t pos, SQDataType x)
{
	assert(psl);
	assert(pos < psl->size);
	psl->a[pos] = x;

}



void merge(SLT* L1, int m, SLT* L2, int n)
{
	m = L1->size;
	n = L2->size;
	int i1 = m - 1;
	int i2 = n - 1;
	int dst = m + n - 1;
	int i = 0;
	while (i1 >= 0 && i2 >= 0)
	{
		if (L1->a[i1] > L2->a[i2])
		{
			L1->a[dst--] = L1->a[i1--];
		}
		else
		{
			L1->a[dst--] = L2->a[i2--];
		}
	}
	while (i2 >= 0)
	{
		L1->a[dst--] = L2->a[i2--];
	}
	printf("合并后的线性表为：\n");
	while (i<m+n)
	{
	printf("%d ", L1->a[i]);
	i++;
	}
		
	
	printf("\n");
}