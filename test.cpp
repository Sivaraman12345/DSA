#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
int countdigitsbrute(int n){
    int count=0;
    while (n>0){
        n/=10;
        count++;
    }
    return count;
}
int better(int n){
    return log10(n)+1;
}
int reverseNumber(int n){
    int result=0;
    while(n>0){
        int d=n%10;
        result=result*10+d;
        n/=10;
    }
    cout<< result;
    return 0;
}
int gcd(int a,int b){
    int result=0;
    for (int i=1;i<=min(a,b);i++){
        if ((b%i==0 && a%i==0)&&i>=result)
        result=i;
            
    }
    cout<<result;
    return 0;

}
int gcdoptimal(int a, int b){
    int maxi=0;
    int mini=0;
    while(a>0||b>0){
        if (a>b)a-=b;
        else b-=a;
        }
    
    cout<<max(a,b);
    return 0;
}
void armstrong(int n){
    int digitsum=0;
    int cop=n;
    int noOfDigits=to_string(n).length();
    
    while(cop>0){
        digitsum+=pow(cop%10,noOfDigits);
        cop/=10;
    }
    if (digitsum==n){
        cout<<"This is an Armstrong Number"<<endl;
    }
    else cout<<"This is not an Armstrong Number"<<endl;
    cout<<digitsum;
}
void printDivisors(int n){
    vector<int>divisors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(n/i!=i){
                divisors.push_back(n/i);
            }
        }
        
    }
    for(int i:divisors){
        cout<<i<<' ';
    }
}
bool isPrime(int n){
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if (isPrime(n)) cout<<"This is a prime number";
    else cout<<"This is not a prime number";
    return 0;
}