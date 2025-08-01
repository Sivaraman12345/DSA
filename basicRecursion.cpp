#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

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
vector<int> revarray(vector<int> arr){
    reverse(arr.begin(),arr.end());
    return arr;
}
void printvector(const vector<int>& arr){
    for (int i:arr){
        cout<<i<<' ';
    }
}
void revarray1(int n,int i,vector<int>& arr){
    if (i>=n/2) return;
    int dup=arr[i];
    arr[i]=arr[arr.size()-1-i];
    arr[arr.size()-1-i]=dup;
    revarray1(n,i+1,arr);
}


int main(){
    int n;
    int k;
    vector<int> arr;
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    
    revarray1(n,0,arr);
    printvector(arr);
    
    return 0;
}