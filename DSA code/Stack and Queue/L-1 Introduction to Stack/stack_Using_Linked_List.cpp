#include<iostream>
#include<list> // #include<stack>
#include<vector>
using namespace std;

class Stack{

          list<int> ll;  // vector<int> v;

public:

          void push(int val){
                    ll.push_front(val); // v.push_back(val);
          }

          void pop(){
                    ll.pop_front(); // v.pop_back();
          }

          int top(){
                    return ll.front(); // return v[v.size() - 1];
          }

          bool empty(){
                    return ll.size() == 0; // return v.size() == 0;
          }
};

int main(){

          Stack s;

          s.push(10);
          s.push(20);
          s.push(30);

          while(!s.empty()){
                    cout<<s.top()<<" ";
                    s.pop();
          }

          cout << endl;
          return 0;
}