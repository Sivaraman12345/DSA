#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reversearray(int arr[],int start, int end){
    if (start>end) return;
    swap(arr[start],arr[end]);
    reversearray(arr,start+1,end-1);
}
void printarray(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int i,n,k;
    int arr[7];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        arr[i]=k;
    }
    reversearray(arr,0,n-1);
    printarray(n,arr);
    return 0;
}