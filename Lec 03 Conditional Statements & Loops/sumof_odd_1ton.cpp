#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int sum =0;
    for(i=1;i<=n;i=i+2){
        sum +=i;
        cout << i << " ";
    }
    cout << endl;
    cout << sum << endl;
}