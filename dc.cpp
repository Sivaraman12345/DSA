#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    stringstream ss(str);
    string word;
    vector<string> words;

    while (ss>>word){
        words.push_back(word);
    }
    for(int i=words.size()-1;i>=0;i--){
        cout<<words[i];
        if (i>0)cout<<" ";
    }
    
}
