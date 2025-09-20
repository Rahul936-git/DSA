#include<iostream>
using namespace std;

class Print{
public:
    void show(int n){
        cout<<"int: "<<n<<endl;
    }

    void show(char c){
        cout<<"char: "<<c<<endl;
    }
};

int main(){
    Print p1;
    p1.show('%');
    p1.show(9);
}