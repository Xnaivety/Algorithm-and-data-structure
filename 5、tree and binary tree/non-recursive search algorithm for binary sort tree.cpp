#include <iostream>

typedef struct binode {
    binode *lchild, *rchild;
    int data;
} binode, *bitree;

//二叉排序树非递归查找算法
bitree bitree_search(bitree T, int n) {
    while (T != NULL && n != T->data) {
        if (T->data < n) {
            T = T->rchild;
        } else {
            T = T->lchild;
        }
    }
    return T;
}
