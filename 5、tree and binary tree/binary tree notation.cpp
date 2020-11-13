#define maxsize 100
using namespace std;
typedef struct CSnode {
    int data;
    struct node *firstchild, *nextsibling;
} CSnode, *CStree;