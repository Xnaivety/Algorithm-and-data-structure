#include <iostream>

#define maxsize 100
using namespace std;
typedef struct {
    int data;
    int parent;

} PTnode;
typedef struct {
    int n;
    PTnode nodes[maxsize];
} PTtree;