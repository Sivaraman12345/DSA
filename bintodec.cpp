#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int bintodec(string str){
    int i,j;
    int decimal=0;
    int power=0;
    for (i=str.size()-1;i>=0;i--){
        if (str[i]=='1'){
        decimal+=pow(2,power);
        
        }
        power++;
    }
    
    return decimal;
}

int main(){
    string str;
    cin>>str;
    cout<<bintodec(str);
    return 0;
}