using namespace std;
#define maxsize 100
typedef struct {
    char ch[maxsize];//静态分配，每个分量存储一个字符
    int length;//串的实际长度
} SString;
typedef struct {
    char *ch;//按串长分配存储区，ch指向串的基地址
    int length;//串的长度
} HString;
