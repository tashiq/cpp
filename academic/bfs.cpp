#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    vector<list<int> >adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

int main(){

}
