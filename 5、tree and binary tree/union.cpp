#include <iostream>

#define maxsize 100
//并查集的结构定义
int ufsets[maxsize];

//并查集的初始化操作
void initial(int s[]) {
    for (int i = 0; i < maxsize; i++) {
        s[i] = -1;
    }
}

//find操作，函数在并查集S中查找并返回包含元素x的树的根
int find(int s[], int x) {
    while (s[x] >= 0) {
        x = s[x];
    }
    return x;
}

//union操作，函数求两个不相交子集合的并集
void Union(int s[], int root1, int root2) {
    s[root2] = root1;
}