#include<bits/stdc++.h>
using namespace std;

int main(){

     vector<int>vec;

     vec.push_back(1);  // capacity = 1
     vec.push_back(2);  // capacity = 2
     vec.push_back(3);  // capacity = 4                                                                                                                  
     vec.push_back(4);  // capacity = 4
     vec.push_back(5);  // capacity = 8

     cout<<"Capacity : "<<vec.capacity()<<endl;  // 8
     cout<<"Size : "<<vec.size()<<endl;          // 5

    return 0;
}