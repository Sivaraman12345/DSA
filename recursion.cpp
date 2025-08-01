#include<iostream>
#include<algorithm>

using namespace std;

void reversearray1(int n, int arr[]){
    reverse(arr,arr+n);
    
}
void printarray(int n,int arr[]){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

/*void reversearray(int n,vector<int> arr){
    int p1=0,p2=n-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
    printarray(arr);

}*/

int main(){
    int i,n,k;
    cin>>n;
    int arr[6];

    for (i=0;i<n;i++){
        cin>>k;
        arr[i]=k;
    }
    reversearray1(n,arr);
    printarray(n,arr);
    return 0;
}