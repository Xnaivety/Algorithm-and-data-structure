void levelorder(bitree T) {
    bitree a[99999];
    int i = 0;
    int j = 0;
    a[0] = T;
    j++;
    while (i != j) {
        visit(a[i])
        if (T->lchild != NULL) {
            a[j++] = T->lchild;
        }
        if (T->rchild != NULL) {
            a[j++] = T->rchild;
        }
        i++;
    }
}