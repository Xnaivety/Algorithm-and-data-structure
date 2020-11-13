#include <iostream>

typedef struct binode {
    binode *lchild, *rchild;
    int data;
} binode, *bitree;

//二叉排序树插入操作的算法描述
int bst_insert(bitree &T, int n) {
    if (T == NULL) {
        T = (bitree) malloc(sizeof(binode));
        T->lchild = T->rchild = NULL;
        T->data = n;
        return 1;//插入成功
    } else {
        if (T->data < n) {
            bst_insert(T->rchild, n);
        } else if (T->data > n) {
            bst_insert(T->lchild, n);
        } else if (T->data == n) {//遇到相同的结点
            return 0;//返回0插入失败
        }
    }
}

//二叉排序树的构造
void create_bst(bitree &T, int s[], int n) {
    T = NULL;
    for (int i = 0; i < n; i++) {
        bst_insert(T, s[i]);
    }
}
