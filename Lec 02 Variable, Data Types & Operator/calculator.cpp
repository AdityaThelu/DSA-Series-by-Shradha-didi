// This Lec 02 Homework to build simple calculator

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;

    int Add,Sub,Multi;
    Add = a + b;
    Sub = a - b;
    Multi = a * b;
    float Div = a/b;

    cout << "The Addition of a &  b are: " << Add << endl;
    cout << "The Subtraction of a &  b are: " << Sub << endl;
    cout << "The Multiplication of a &  b are: " << Multi << endl;
    cout << "The Division of a &  b are: " << Div << endl;
}