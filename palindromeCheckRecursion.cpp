#include<string>
#include<iostream>
#include<cctype>

using namespace std;
 
bool checkPalindrome(string str){
    for(int i=0;i<str.size()/2;i++){
        if (toupper(str[i])!=toupper(str[str.size()-i-1])){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    getline(cin,str);
    if (checkPalindrome(str)) cout<<"This is a palindrome";
    else cout<<"This is not a palindrome";
    return 0;
}