#include"SeqList.h"

void SeqListTest1()
{//���Գ�ʼ��˳���Ͳ������ݣ�����ӡ,�������
	SqList L;
	IntitList(L);
	int e = 0;
	printf("������˳����е����ݣ�\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &e);
		ListInsert(L, 1, e);
	}
	printf("˳����е�����ӡΪ��\n");
	ListTraverse(L);
	printf("���Ԫ�ظ���Ϊ%d\n", ListLength(L));
	printf("���Ƿ�գ�%d(1:�� 0:��)\n", ListEmpty(L));
	ClearList(L); /* ������� */
	printf("��պ������Ƿ�գ�%d(1:�� 0:��)\n", ListEmpty(L));
	DestroyList(L);
}
void SeqListTest2()
{//���롢ɾ�������ҡ��޸����Ա��е����ݡ��������
	SqList L;
	IntitList(L);
	int e = 0, n = 0, j = 0;
	int i = 0;
	printf("������˳����е����ݣ�\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &e);
		ListInsert(L, 1, e);
	}
	printf("˳����е�����ӡΪ��\n");
	ListTraverse(L);
	n = 3;
	j = GetElem(L, n, e); /* ������ĵ�n��Ԫ�ظ�ֵ��e */
	if (j)
		printf("��ĵ�%d��Ԫ��ֵΪ%d\n", n, e);
	else
		printf("�����ڵ�%d��Ԫ��\n", n);
	n = 4;
	i = LocateElem(L, n);
	if (i)
		printf("����%d��Ԫ���ǵ�%d��\n", n, i);
	else
		printf("û�е���%d��Ԫ��\n", n);
	DestroyList(L);
}
void SeqListTest3()
{//����
	SqList L;
	IntitList(L);
	int e = 0, j = 0;
	int n = 0;
	printf("������˳����е����ݣ�\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &e);
		ListInsert(L, 1, e);
	}
	printf("˳����е�����ӡΪ��\n");
	ListTraverse(L);
	n = 4;
	j = PriorElem(L, n, e);
	if (j)
		printf("%d��ǰ����%d\n", n, e);
	else
		printf("������%d��ǰ��\n", n);
	j = NextElem(L, n, e);
	if (j)
		printf("%d�ĺ����%d\n", n, e);
	else
		printf("������%d�ĺ��\n", n);
	DestroyList(L);
}

int main()
{
	/*printf("�������Ա�Ĺ���SeqListTest1:\n");
	SeqListTest1();*/
	/*printf("�������б�Ĺ���SeqListTest2:\n");
	SeqListTest2();*/
	printf("�������б�Ĺ���SeqlistTest3:\n");
	SeqListTest3();
	return 0;
}