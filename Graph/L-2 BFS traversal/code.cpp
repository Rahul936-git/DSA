#include<iostream>
#include<vector>
#include<list>
#include<queue>
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

    // BFS traversal
    void bfs(){     // O(v+E)
        queue<int>q;
        vector<bool>vis(v,false);

        q.push(0);
        vis[0]=true;

        while(!q.empty()){
            int u = q.front();   // u=source
            q.pop();

            cout<<u<<" ";

            for(int v : l[u]){  // v = immediate neighbour

                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.bfs();

    return 0;
}

