#include<bits/stdc++.h>

#include<iostream>
#include<deque>
using namespace std;

int main(){

          // Queue q;
          deque<int> dq;

          dq.push_back(1);
          dq.push_back(2);
          dq.push_front(4);
          dq.push_back(3); 
          dq.pop_back();

          cout << dq.front() << " " << dq.back() << endl;

          return 0;
}