#include<iostream>
using namespace std;
#define maxsize 100
typedef struct {
    char ch[maxsize];//静态分配，每个分量存储一个字符
    int length;//串的实际长度
} SString;

void get_next(SString s, int next[]) {
    int i = 0;
    int j = 0;
    next[1] = 0;
    while (j < s.length) {
        if (i == 0 || s.ch[i] == s.ch[j]) {
            i++;
            j++;
            next[j] = i;
        } else {
            i = next[i];
        }
    }
}

void get_nextval(SString s, int nextval[]) {
    int i = 0;
    int j = 0;
    nextval[1] = 0;
    while (j < s.length) {
        if (i == 0 || s.ch[i] == s.ch[j]) {
            i++;
            j++;
            if (s.ch[j] != s.ch[i]) {
                nextval[j] = i;
            } else {
                nextval[j] = nextval[i];
            }
        } else {
            i = nextval[i];
        }
    }
}

int kmp(SString s, SString t, int nextval[]) {
    int i = 0;
    int j = 0;
    while (i <= s.length && j <= t.length) {
        if (i == 0 || s.ch[i] == t.ch[j]) {
            i++;
            j++;
        } else {
            i = nextval[i];
        }
    }
    if (i > s.length) {
        return j - s.length;
    } else {
        return 0;
    }
}