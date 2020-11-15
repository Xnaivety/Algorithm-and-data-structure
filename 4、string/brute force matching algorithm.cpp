#include<iostream>
using namespace std;
#define maxsize 100
typedef struct {
    char ch[maxsize];//静态分配，每个分量存储一个字符
    int length;//串的实际长度
} SString;
int index(SString s,SString t){
    int i = 1;
    int j = 1;
    while(i<=s.length&&j<=t.length){
        if(s.ch[i] == t.ch[j]){
            i++;
            j++;
        }
        else{
            j = j-i+2;
            i = 1;
        }
    }
    if(i>s.length){
        return j-s.length;
    }
    else{
        return 0;
    }
}