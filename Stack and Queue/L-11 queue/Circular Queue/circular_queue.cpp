#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class CircularQueue{

          int *arr;
          int currSize, capacity;
          int f = 0; // front
          int r = -1; // rear

public:
          CircularQueue(int size){
                    capacity = size;
                    arr = new int[capacity];
                    currSize = 0;
                    f = 0;
                    r = -1;
          }

          void push(int data){

                    if(currSize == capacity){
                              cout << "CQ is Full";
                              return;
                    }

                    r = (r + 1) % capacity;
                    arr[r] = data;
                    currSize++;
          }

          void pop(){
                    if(empty()){
                              cout << "CQ is empty" << endl;
                              return;
                    }

                    f = (f + 1) % capacity;
                    currSize--;
          }

          int front(){
                    if(empty()){
                              cout << "CQ is empty" << endl;
                              return -1;
                    }
                    return arr[f];
          }

          bool empty(){
                    return currSize == 0;
          }

          void printArr(){

                    for (int i = 0; i < capacity;i++){
                              cout << arr[i] << " ";
                    }
                    cout << endl;
          }
};

int main(){
          CircularQueue cq(3);

          cq.push(1);
          cq.push(2);
          cq.push(3);
          cq.pop();
          cq.push(4);

          // cq.printArr();

          while(!cq.empty()){
                    cout << cq.front() << " ";
                    cq.pop();
          }

          return 0;
}

