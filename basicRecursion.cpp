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
void print3(int n){
    static int i=n;
    if (i<1) return;
    cout<<i<<endl;
    i--;
    print3(n);
}
void printsum(int n){
    static int sum=0;
    if (n<1) {
        cout<<sum;
        return ;}
    sum+=n;
    printsum(n-1);
    
}
int  printsum1(int n){
    if (n==0) return 0;
    return n+printsum1(n-1);
}
int factorial(int n){
    if (n==0) return 1;
    return n*factorial(n-1);
}





int main(){
    int n;
    cin>>n;
    cout<<(n);
    return 0;
}