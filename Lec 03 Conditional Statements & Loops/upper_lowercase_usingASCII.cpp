#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>=97 && ch<=123){
        cout<<"The character is a lowercase letter.";
    }
    else if(ch>=65 && ch<=90){
        cout<<"The character is an uppercase letter.";
    }
}