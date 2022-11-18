#include"SeqList.h"
/* ��ʼ��˳���   Status InitList_Sq*/
void SeqListInit(SLT* psl)
{
	assert(psl);

	psl->a =NULL;
	psl->size =psl->capacity= 0;

}
//�ͷſռ�
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
//���ʺ���-��ӡ�������е�����Ԫ��ֵ
void SeqListPrint(SLT* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}
//����
void SeqListCheckCapacity(SLT* psl)
{
	assert(psl);
	//������û������
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
	//Ų������

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
//����   ��˳����в��������Ԫ��ֵ��ͬ��Ԫ����˳����е�λ��  int LocateElem(SqList L, ElemType e)
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
//����  ��˳����в���Ԫ��  Status ListInsert_Sq(SqList &L, int i, ElemType e)
void SeqListInsert(SLT* psl, size_t pos, SQDataType x)
{
	assert(psl);
	assert(pos <= psl->size);
	SeqListCheckCapacity(psl);
	//�������׳���Ҫ�����һ���ռ䣬����pos��endΪ0������������
	size_t end = psl->size ;
	while (end >= pos)
	{
		psl->a[end] = psl->a[end - 1];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;
}
//���� Status ListDelete_Sq(SqList &L , int i, ElemType e)
void SeqListErase(SLT* psl, size_t pos)
{
	assert(psl);
	assert(pos < psl->size);
	//begin��pos��ͬ���߼�����˵�������
	size_t begin = pos + 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		++begin;
	}
	psl->size--;
	//pos��begin��ͬһλ��
	/*size_t begin = pos ;
	while (begin < psl->size-1)
	{
		psl->a[begin] = psl->a[begin+1];
		++begin;
	}
	psl->size--;*/
}

//������
size_t SeqListSize(SLT* psl)
{
	assert(psl);
	return psl->size;
}
//���λ��.����
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
	printf("�ϲ�������Ա�Ϊ��\n");
	while (i<m+n)
	{
	printf("%d ", L1->a[i]);
	i++;
	}
		
	
	printf("\n");
}