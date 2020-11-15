#define Maxvertexnum 100//顶点数目的最大值
typedef char vertextype;//顶点的数据类型
typedef int edgetype;//边上权值的数据类型
typedef struct {
    vertextype vex[Maxvertexnum];//顶点表
    edgetype edge[Maxvertexnum][Maxvertexnum];//邻接矩阵，边表
    int vexnum, arcnum;//图的当前顶点数和边树
} Mgraph;
