#include <iostream>

using namespace std;
typedef struct threadnode {
    int data;
    struct threadnode *lchild, *rchild;
    int ltag, rtag;
} threadnode, *threadtree;

threadtree firstnode(threadtree p) {
    while (p->ltag == 0) {
        p = p->rchild;
    }
    return p;
}

threadtree nextnode(threadtree p) {
    if (p->rtag == 0) {
        p = firstnode(p->rchild);
    } else {
        p = p->rchild;
    }
    return p;
}

void inorderthread_traversal(threadtree T) {
    for (threadtree k = firstnode(T); k != NULL; k = nextnode(k)) {
        cout << k->data << endl;
    }
}