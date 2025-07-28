#include<iostream>
using namespace std;

bool check(int n){
    if (n%2==0) return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    if(check(n)) cout<<"YES";
    else cout<<"NO";
}