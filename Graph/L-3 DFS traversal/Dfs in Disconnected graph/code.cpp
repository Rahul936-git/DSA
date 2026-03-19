#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int v;
    list<int>*l;

public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];
    }

    void addEdge(int u,int v){
        l[v].push_back(u);
        l[u].push_back(v);
    }

    // DFS traversal

    void dfsHelper(int u, vector<bool>&vis){  // O(v+E)
        cout<<u<<" ";
        vis[u]=true;

        for(int v:l[u]){
            if(!vis[v]){
                dfsHelper(v,vis);
            }
        }
    }

    void dfs(){
        int src=0;
        vector<bool>vis(v,false);

        for(int i=0;i<v;i++){
            if(!vis[i]){
                dfsHelper(i,vis);
            }
        }
    }
};

int main(){

    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    g.dfs();

    return 0;
}
