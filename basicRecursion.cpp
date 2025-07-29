#include<iostream>
using namespace std;

void print(int i , int n){
    if (i>n) return;
    cout<<"Sivaraman";
    if (i<n) cout<<endl;
    print(++i,n);
}
void print2(int n){
    static int i=1;
    if (i>n) return;
    cout<<i<<endl;
    i++;
    print2(n);
}





int main(){
    int n;
    cin>>n;
    print2(n);
    return 0;
}