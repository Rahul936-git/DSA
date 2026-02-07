#include<bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n){

    int power = 1;
    int number = 0;

    while(n>0){
        int last_digit = n % 2;

    n/=2;

    number += (last_digit * power);

    power *= 10;
    }

    return number;
}

int binary_to_decimal(int n){  // Because & means “modify the original variable”.

    int power = 1;
    int number = 0;

    while(n>0){

        int lastDigit = n%10;

        n/=10;

        number += lastDigit * power;

        power *= 2;
    }

    return number;
}

int main(){

    int num = 60;

    cout << decimal_to_binary(num)<<endl;
    cout << binary_to_decimal(num);

    return 0;
}