#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>vec1;
    vector<int>vec2 = {1,2,3};
    vector<int>vec(3,0);

    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl;

    vector<char>ch = {'a','b','c','d','e'};

    for(char c:ch){
        cout<<c<<" ";
    }

    cout<<endl;

    cout<<vec2.size()<<endl;  // 3

    vec[0]=1;

    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl;

    vec.push_back(7);

    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl;

    vec.pop_back();

    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(0)<<endl;

    return 0;
}