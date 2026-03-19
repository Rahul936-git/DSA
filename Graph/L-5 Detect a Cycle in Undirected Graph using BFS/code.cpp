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
        l[u]=push_back(v);
        l[v]=push_back(u);
    }

    bool isCycleUndirBFS(int src,vector<int>&vis){
        queue<pair<int,int>>q;

        q.push({src,-1});
        vis[src]=true;

        while(!q.empty()){
            int curr=q.front().first;
            int parent=q.front().second;

            list<int>neighbour=l[curr];

            for(int n:neighbour){
                if(!vis[n]){
                    q.push({n,curr});
                    vis[n]=true;
                }
                else if(v!=parent){
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(){
        vector<bool>vis(v,false);

        for(int i=0;i<v;i++){
            if(!vis[v]){
                isCycleUndirBFS(i,vis){
                    return true;
                }
            }
        }
        return false;
    }

};

int main(){

    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    g.isCycle()<<endl;

    return 0;
}
