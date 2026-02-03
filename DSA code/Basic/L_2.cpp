#include<iostream>  // preProcessor directive
using namespace std;  // here std is standard namespace used in c++

int main(){
    int age = 25;
    char grade = 'a';
    float PI = 3.14;
    bool isSafe = false;
    double price = 100.99;

    cout<<isSafe<<endl;
    cout<<grade<<endl;

    int value = grade;  // conversion
    cout<<value<<endl;  

    cout<<(int)grade<<endl; // typeCasting

    cout<<(int)price<<endl;  // typeCasting

    // cout<<"Enter the price : ";
    // cin>>price;

    // cout<<"you entered price : "<< price << endl;

// Arithmetic operator

    int a = 120 , b = 12;

    cout<<"Addition : " << a+b << endl;
    cout<<"Subtration: " << a-b <<endl;
    cout<<"Multiplication : "<< a*b <<endl;
    cout<<"Division : "<< a/b <<endl;
    cout<<"modulo : " << a%b << endl;

    int x = 5 , y = 2;

    cout<<"division using typeCasting : "<< (double)x / y << endl;
    cout<<"division using typeCasting : "<< (double)x / (double)y << endl;
    cout<<"division using typeCasting : "<< x / (double)y << endl;

// Relational operator

    cout << (3<5) << endl;  // 1
    cout << (3>5) << endl;  // 0
    cout << (3<=5) << endl; // 1
    cout << (3>=5) << endl;  // 0
    cout << (3==5) << endl; // 0
    cout << (3!=5) << endl; // 1

// Logical operator

    cout << (3<1) << endl; // 0
    cout << !(3<1) << endl; // 1

    cout << ( (3<5) || (3<1))<< endl; // 1
    cout << ( (3<5) ||  (3>1))<< endl; // 1
    cout << ( (3>5) || (3<1))<< endl; // 0

    cout << ( (3<5) && (7>6))<< endl; // 1
    cout << ( (3<5) && (7<6))<< endl; // 0
    cout << ( (3>5) && (7<6))<< endl; // 0

// Unary operator

    // Increment ++; 
    // Decrement --;

    // a++ // first use then increment  // post increment operator
    // ++a // first incremant then use;  // pre increment operator

    int m = 10 ;
    int n = m++;

    cout << "m: "<< m << endl; // 11
    cout << "n: "<< n << endl; // 10  // first use then increment 
    cout << "n: "<< n << endl; // 10
    cout << "m: "<< m << endl; // 11

    int p = ++m;

    cout << "p:" << p << endl; // 12  // first incremant then use;
    cout << "m:" << m << endl; // 12  

    int s = 50;
    int t = s--;

    cout << "s: "<< s << endl; // 49;
    cout << "t: "<< t << endl; // 50;
    cout << "s: "<< s << endl; // 49;

    int u = --s;

    cout << "s: "<< s << endl; // 48;
    cout << "u: "<< u << endl; // 48;


    return 0;

}

// 1 byte = 8 bit

// int -> 4 bytes
// char -> 1 bytes
// float -> 4 bytes
// bool -> 1 bytes
// double -> 8 bytes