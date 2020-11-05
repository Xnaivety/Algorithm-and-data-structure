void postorder(bitree T) {
    if (T != NULL) {
        inorder(T->lchild);
        inorder(T->rchild);
        visit(T);
    }
}