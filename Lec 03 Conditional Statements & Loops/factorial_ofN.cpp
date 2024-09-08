// Lec 03 Homework

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n value: ";
    cin >> n;
    int factorial =1;
    for(int i=1; i<=n;i++){
        factorial = factorial*i;
        cout << factorial << " ";
    }
    cout << endl << factorial;
}