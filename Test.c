#include"SeqList.h"

//�˵�
void menu()
{
	printf("********************************\n");
	printf("1.����10λ��    2.��ӡ\n");	
	printf("3.���벢��ʾ  4ɾ������\n");
	printf("***********0.�˳�****************\n");
	printf("*********************************\n");

}
/*int val = 0;
	int op = 0;
	int pos = 0;
	int x = 0;
	do
	{
		menu();
		printf("���������ѡ�>");
		scanf("%d", &op);		
		switch (op)
		{
		case 0:break;
		case 1:
			printf("������10�����ݣ�-1������");
			scanf("%d", &val);
			while (val!=-1)
			{
				SeqListPushBack(&s, val);
				scanf("%d", &val);
			}
			break;
		case 2:
			printf("����˳�����ӡ���е�ÿ������Ԫ�أ�\n");
			SeqListPrint(&s);
			break;
		case 3:
			printf("�ڸ�˳����а�λ��pos����һ������Ԫ��X��Ȼ����Ļ��ʾ��˳����еĸ���Ԫ��:\n");
			scanf("%d%d", &pos,&x);
			SeqListInsert(&s,pos ,x);
			SeqListPrint(&s);
			break;
		case 4:
			printf("�ڸ�˳�����ɾ��һ������Ԫ�أ�Ȼ����Ļ��ʾ��˳����еĸ���Ԫ�أ�\n");
			scanf("%d", &pos);
			SeqListErase( &s, pos);
			SeqListPrint(&s);
			break;
		default:
			printf("����ѡ�����\n");
			break;
		}
	} while (op!=0);*/
int main()
{
	SLT L1,L2;
	SeqListInit(&L1);
	SeqListInit(&L2);
	
	int val1 = 0,val2=0;
	printf("������L!�����ݣ�-1������");
	scanf("%d", &val1);
	while (val1 != -1)
	{
		SeqListPushBack(&L1, val1);
		scanf("%d", &val1);
	}
	printf("������L2�����ݣ�-1������");
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
