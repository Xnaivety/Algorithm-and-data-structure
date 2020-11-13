#include <iostream>

using namespace std;
typedef struct threadnode {
    int data;
    struct threadnode *lchild, *rchild;
    int ltag, rtag;
} threadnode, *threadtree;

void inthread(threadtree &now, threadtree &pre) {
    if (now != NULL) {
        inthread(now->lchild, pre);
        if (now->lchild == NULL) {
            now->lchild = pre;
            now->ltag = 1;
        }
        if (pre != NULL && pre->rchild == NULL) {
            pre->rchild = now;
            pre->rtag = 1;
        }
        pre = now;
        inthread(now->rchild, pre);
    }
}

void create_inthread(threadtree T) {
    threadtree pre = NULL;
    if (T != NULL) {
        inthread(T, pre);
        pre->rchild = NULL;
        pre->rtag = 1;

    }

}