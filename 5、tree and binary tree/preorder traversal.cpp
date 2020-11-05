void preorder(bitree T){
    if(T!=NULL){
        visit(T);
        preorder(T->lchild);
        preorder(T->rchild);
    }
}