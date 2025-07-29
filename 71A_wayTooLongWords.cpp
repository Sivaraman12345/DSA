#include<iostream>
#include<string>
using namespace std;

string shortener(string str){
    int ln=str.size();
    string result;
    if (ln>10){
        result=str[0]+to_string(ln-2)+str[ln-1];
    }
    else result=str;
    return result;
}


int main(){
    string str;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>str;
        cout<<shortener(str);
        if (i<n-1) cout<<endl;
    }
    return 0;
}