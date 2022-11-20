#include"SeqList.h"

//����һ�����Ա�
int IntitList(SqList& L)
{
	L.elem = (int*)malloc(LIST_INIT_SIZE * sizeof(int));
	if (!L.elem)
		return 0;
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return 1;
}

//����һ�����Ա�
int DestroyList(SqList& L)
{
	free(L.elem);
	L.elem = NULL;
	L.length = 0;
	L.listsize = 0;
	return 1;
}

//���һ�����Ա�
int ClearList(SqList& L)
{
	L.length = 0;
	return 1;
}

//�ж�һ�����Ա��Ƿ�Ϊ�ձ�
int ListEmpty(SqList L)
{
	if (L.length == 0)
		return 1;
	else
	{
		return  0;
	}
}

//���Ա���
int ListLength(SqList L)
{
	return L.length;
}

//������Ա��iԪ�أ���ֵ��e
int GetElem(SqList L, int i, int& e)
{
	if (i<1 || i>L.length)
		return 0;
	e = L.elem[i - 1];
	return 1;

}
//����Ԫ��e�ڼ���λ���ϣ�
int LocateElem(SqList L, int e)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (L.elem[i] == e)
		{
			return i + 1;
		}
	}
		return 0;
	
}

//�����Ԫ��cue_e��ǰһ��Ԫ�أ���ֵ��pre_e
int PriorElem(SqList L, int cur_e, int& pre_e)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (L.elem[i] == cur_e)
		{
			break;
		}
	}
		if (i==0 || i==L.length-1)
		{
			return 0;
		}
		pre_e = L.elem[i - 1];
		return 1;
	
}

//�����Ԫ��cue_e�ĺ�һ��Ԫ�أ���ֵ��pre_e
int NextElem(SqList L, int  cur_e, int& next_e)
{

	int i;
	for (i = 0; i < L.length; i++)
	{
		if (L.elem[i] == cur_e)
		{
			break;
		}
	}
		if (i == L.length-1 || i == L.length)
		{
			return 0;
		}
		next_e = L.elem[i - 1];
		return 1;
	
}

//��i��Ԫ��֮ǰ����
int ListInsert(SqList& L, int i, int e)
{
	int j;
	if (i<1 || i>L.length + 1)
	{
		return 0;
	}
	for ( j = L.length; j >= i; j--)
	{
		L.elem[j] = L.elem[j - 1];		
	}
	L.elem[i - 1] = e;
	L.length++;
	return 1;
}

//ɾ����i��Ԫ��
int ListDelete(SqList& L, int i, int e)
{
	int j;
	if (i<1||i>L.length)
	{
		return 0;
	}
	e = L.elem[i - 1];
	for ( j = i; j < L.length; j++)
	{
		L.elem[j - 1] = L.elem[j];
	}
	L.length--;
	return 1;
}

//������ӡ
int ListTraverse(SqList L)
{
	int i = 0;
	for ( i = 0; i < L.length; i++)
	{
		printf("%d  ", L.elem[i]);

	}
	printf("\n");
	return 1;
}