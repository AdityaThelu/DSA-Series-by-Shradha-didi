// Lec 03 Homework 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n value: ";
    cin >> n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl << sum;

}