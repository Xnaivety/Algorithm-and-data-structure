#include <iostream>

using namespace std;

#define Initsize 10
typedef struct {
    int *data;  //为动态分配做准备
    int Maxsize; //顺序表的最大容量
    int length; //顺序表当前长度
} SeqList;

void InitList(SeqList &L) {
    L.data = (int *) malloc(Initsize * sizeof(int)); //动态分配空间
    L.length = 0;
    L.Maxsize = Initsize;
}

void IncreaseSize(SeqList &L, int len) {
    int *p = L.data;
    L.data = (int *) malloc((L.Maxsize + len) * sizeof(int));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];
    }
    L.Maxsize = L.Maxsize + len;
    free(p);
}
