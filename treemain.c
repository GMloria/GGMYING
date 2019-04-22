#include<stdio.h>
#include"BinaryTree.h"
#include"二叉树ADT.c"
int main()
{
    BiTree T;
    if(InitBiTree(&T)==SUCCESS)
    {
    	printf("初始化成功\n");
	}
	else
	{
		printf("初始化失败\n");
	}
    CreateBiTree(&T);
    printf("先序遍历 :\n"); 
    PreOrderTraverse(T, visit);
    printf("中序遍历 :\n");
    InOrderTraverse(T, visit);
    printf("后序遍历 :\n");
    PostOrderTraverse(T, visit);
    printf("层次遍历 :\n");
    LevelOrderTraverse(T, visit);
    DestroyBiTree(&T);
    return 0;
}
