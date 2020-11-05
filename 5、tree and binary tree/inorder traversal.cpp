void inorder(bitree T) {
    if (T != NULL) {
        inorder(T->lchild);
        visit(T);
        inorder(T->rchild);
    }
}