#include <iostream>
using namespace std;
void print9(int n){
    for (int i=1;i<=n-1;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=2*(i-1)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1;i<=n;i++){
        
        for (int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for (int j=1;j<=2*n-2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            cout<<"*";
        }
    cout<<endl;
    }  
}
void print11(int n){
    int i,j,start;
    for(i=0;i<n;i++){
        if (i%2==0) start=1;
        else start=0;
        for (j=0;j<=i;j++){
            cout<<start<<' ';
            start=1-start;
        }
        cout<<endl;
    }
}
void print12(int n){
    int i,j;
    for (i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<j+1;
        }
        for (j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(j=i;j>=0;j--){
            cout<<j+1;
            
        }
               cout<<endl;
            }
        }
void print13(int n){
    int i,j,k=1;
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
void print14(int n){  
    int i;
    for(i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void print15(int n){
    int i;
    for(i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n-i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void print16(int n){
    int i;
    char ch='A';
    for(i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
        }
}
void print17(int n){
    int i;
    for(i=0;i<n;i++){
        char ch ='A';
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int j=0;j<i;j++){
            ch--;;
            cout<<ch;
        }
        cout<<endl;
    }
}
void print18(int n){
    int i;
    for(i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print19(int n){
    for (int i=0;i<n;i++){
        //stars
        for (int j=0;j<n-i;j++){
            cout<<"*";
        }
        //spaces
        for (int j=0;j<2*i;j++){
            cout<<" ";
        }
        for (int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=0;j<n-i;j++){
            cout<<"*";
        }
        for (int j=0;j<2*i;j++){
            cout<<" ";
        }
        for (int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}
void print20(int n){
     int i,j;
     for (i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }

        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for (i=0;i<n-1;i++){
        for(j=n-1-i;j>0;j--){
            cout<<"*";
        }
        //spaces
        for(j=0;j<2*(i+1);j++){
            cout<<" ";
        }

        for(j=n-1-i;j>0;j--){
            cout<<"*";
        }
        if (i<n-2)
        cout<<endl;
    }
}
void print21(int n){
    int i,j;
    for (i=0;i<2*n-1;i++){
        for (j=0;j<n;j++){
            if (i==0 || i==2*n-2){
                cout<<"*";
            }
            else if (i%2==0 && (j==0 || j==n-1)){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void print22(int n){
    int i,j;
    for (i=0;i<2*n-1;i++){
        for (j=0;j<2*n-1;j++){
            cout<<n-min(min(i,j),min(2*n-2-i,2*n-2-j));
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    print22(n);
    return 0;
}