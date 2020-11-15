#define Maxvertexnum 100//顶点数目的最大值
typedef char vertextype;//顶点的数据类型
typedef int edgetype;//边上权值的数据类型
typedef struct arcnode {
    arcnode *next;//连接的下一个结点
    int vertex;//
} arcnode;
typedef struct {
    arcnode *first;//结点连接的第一个指针
    vertextype data;//结点保存的数据
} vertexnode, adjlist[Maxvertexnum];
typedef struct {
    int vexnum, arcnum;//顶点数和边数
    adjlist vertices;//邻接表
} ALgraph;
