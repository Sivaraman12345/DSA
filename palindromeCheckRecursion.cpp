#include<string>
#include<iostream>
#include<cctype>

using namespace std;
 
bool checkPalindrome(string str){
    for(int i=0;i<str.length()/2;i++){
        if (toupper(str[i])!=toupper(str[str.size()-i-1])){
            return false;
        }
    }
    return true;
}

bool checkPalindromere(int start,int end,string s){
    while (true){
        if (!isalnum(s[start])){
            start++;
        }
        else break;
    }
    while (true){
        if (!isalnum(s[end])){
            end--;
        }
        else break;
    }

    if (start>=s.length()/2){
        return true;
    }
    if (toupper(s[start])!=toupper(s[end])){
        return false;
    }
    return checkPalindromere(start+1,end-1,s);
}


int main(){
    string str;
    getline(cin,str);
    
    if (checkPalindromere(0,str.size()-1,str)) cout<<"This is a palindrome";
    else cout<<"This is not a palindrome";
    return 0;
}