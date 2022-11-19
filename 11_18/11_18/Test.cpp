#include"stdio.h"
#include"stdlib.h"
typedef char TElemType;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode*lchild, *rchild;
}BiTNode,*BiTree;

void CreateBiTree(BiTree& T)
{
	TElemType ch;
	scanf("%c", &ch);
	if (ch == ' ')
		T = NULL;
	else
	{
		T = (BiTree)malloc(sizeof(BiTNode));
		if (!T)
			exit(-1);
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);

	}
}
void DestoryBiTree(BiTree& T)
{
	if (T)
	{
		if (T->lchild)
			DestoryBiTree(T->lchild);
		if (T->rchild)
			DestoryBiTree(T->rchild);
		free(T);
		T = NULL;
	}
}

void PreOrderTraverse(BiTree T)
{
	if (T)
	{
		printf("%c ", T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}

void InOrderTraverse(BiTree T)
{
	if(T)
	{
		
		InOrderTraverse(T->lchild);
        printf("%c ", T->data);
		InOrderTraverse(T->rchild);
	}
}

void PostOrderTraverse(BiTree T)
{
	if (T)
	{

		PostOrderTraverse(T->lchild);		
		PostOrderTraverse(T->rchild);
		printf("%c ", T->data);
	}
}
int main()
{
	BiTree T;
	printf("请输入建立的二叉树的字符序列（包括空格）;\n");
	CreateBiTree(T);
	printf("\n先序递归遍历二叉树；\n");
	PreOrderTraverse(T);
	printf("\n中序递归遍历二叉树；\n");
	InOrderTraverse(T);
	printf("\n后序递归遍历二叉树；\n");
	PostOrderTraverse(T);
	printf("\n");
	DestoryBiTree(T);
	return 0;
}