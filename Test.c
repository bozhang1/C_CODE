#include"SeqList.h"

//菜单
void menu()
{
	printf("********************************\n");
	printf("1.输入10位数    2.打印\n");	
	printf("3.插入并显示  4删除数据\n");
	printf("***********0.退出****************\n");
	printf("*********************************\n");

}
/*int val = 0;
	int op = 0;
	int pos = 0;
	int x = 0;
	do
	{
		menu();
		printf("请输入操作选项：>");
		scanf("%d", &op);		
		switch (op)
		{
		case 0:break;
		case 1:
			printf("请输入10的数据，-1结束：");
			scanf("%d", &val);
			while (val!=-1)
			{
				SeqListPushBack(&s, val);
				scanf("%d", &val);
			}
			break;
		case 2:
			printf("遍历顺序表，打印表中的每个数据元素：\n");
			SeqListPrint(&s);
			break;
		case 3:
			printf("在该顺序表中按位序pos插入一个数据元素X，然后屏幕显示该顺序表中的各个元素:\n");
			scanf("%d%d", &pos,&x);
			SeqListInsert(&s,pos ,x);
			SeqListPrint(&s);
			break;
		case 4:
			printf("在该顺序表中删除一个数据元素，然后屏幕显示该顺序表中的各个元素；\n");
			scanf("%d", &pos);
			SeqListErase( &s, pos);
			SeqListPrint(&s);
			break;
		default:
			printf("输入选项错误\n");
			break;
		}
	} while (op!=0);*/
int main()
{
	SLT L1,L2;
	SeqListInit(&L1);
	SeqListInit(&L2);
	
	int val1 = 0,val2=0;
	printf("请输入L!的数据，-1结束：");
	scanf("%d", &val1);
	while (val1 != -1)
	{
		SeqListPushBack(&L1, val1);
		scanf("%d", &val1);
	}
	printf("请输入L2的数据，-1结束：");
	scanf("%d", &val2);
	while (val2 != -1)
	{
		SeqListPushBack(&L2, val2);
		scanf("%d", &val2);
	}
	AddCapacity(&L1, &L2);
	merge(&L1,L1.size,&L2,L2.size);
	SeqListDestory(&L1);
	SeqListDestory(&L2);
	return 0;
}
