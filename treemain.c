#include<stdio.h>
#include"BinaryTree.h"
#include"������ADT.c"
int main()
{
    BiTree T;
    if(InitBiTree(&T)==SUCCESS)
    {
    	printf("��ʼ���ɹ�\n");
	}
	else
	{
		printf("��ʼ��ʧ��\n");
	}
    CreateBiTree(&T);
    printf("������� :\n"); 
    PreOrderTraverse(T, visit);
    printf("������� :\n");
    InOrderTraverse(T, visit);
    printf("������� :\n");
    PostOrderTraverse(T, visit);
    printf("��α��� :\n");
    LevelOrderTraverse(T, visit);
    DestroyBiTree(&T);
    return 0;
}
