#include"SeqList.h"

void SeqListTest1()
{//测试初始化顺序表和插入数据，并打印,最后销毁
	SqList L;
	IntitList(L);
	int e = 0;
	printf("请输入顺序表中的数据：\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &e);
		ListInsert(L, 1, e);
	}
	printf("顺序表中的数打印为：\n");
	ListTraverse(L);
	printf("表的元素个数为%d\n", ListLength(L));
	printf("表是否空：%d(1:是 0:否)\n", ListEmpty(L));
	ClearList(L); /* 清空链表 */
	printf("清空后，链表是否空：%d(1:是 0:否)\n", ListEmpty(L));
	DestroyList(L);
}
void SeqListTest2()
{//插入、删除、查找、修改线性表中的数据。最后销毁
	SqList L;
	IntitList(L);
	int e = 0, n = 0, j = 0;
	int i = 0;
	printf("请输入顺序表中的数据：\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &e);
		ListInsert(L, 1, e);
	}
	printf("顺序表中的数打印为：\n");
	ListTraverse(L);
	n = 3;
	j = GetElem(L, n, e); /* 将链表的第n个元素赋值给e */
	if (j)
		printf("表的第%d个元素值为%d\n", n, e);
	else
		printf("不存在第%d个元素\n", n);
	n = 4;
	i = LocateElem(L, n);
	if (i)
		printf("等于%d的元素是第%d个\n", n, i);
	else
		printf("没有等于%d的元素\n", n);
	DestroyList(L);
}
void SeqListTest3()
{//测试
	SqList L;
	IntitList(L);
	int e = 0, j = 0;
	int n = 0;
	printf("请输入顺序表中的数据：\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &e);
		ListInsert(L, 1, e);
	}
	printf("顺序表中的数打印为：\n");
	ListTraverse(L);
	n = 4;
	j = PriorElem(L, n, e);
	if (j)
		printf("%d的前驱是%d\n", n, e);
	else
		printf("不存在%d的前驱\n", n);
	j = NextElem(L, n, e);
	if (j)
		printf("%d的后继是%d\n", n, e);
	else
		printf("不存在%d的后继\n", n);
	DestroyList(L);
}

int main()
{
	/*printf("测试线性表的功能SeqListTest1:\n");
	SeqListTest1();*/
	/*printf("测试现行表的功能SeqListTest2:\n");
	SeqListTest2();*/
	printf("测试现行表的功能SeqlistTest3:\n");
	SeqListTest3();
	return 0;
}