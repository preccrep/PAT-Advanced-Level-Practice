#include <iostream>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;

bool isprime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
    return true;
}

int rev(int n,int d){
    int s[20];
    int tmp=n,i=0;
    while(tmp){
        s[i++]=tmp%d;
        tmp/=d;
    }
    int cnt=0,siz=i-1;
    for(i=0;i<=siz;i++){
        cnt+=s[i]*pow(d,siz-i);
    }
    return cnt;
}

void isrevprime(int n,int d){
    if(!isprime(n)){
        cout<<"No"<<endl;
        return;
    }
    if(isprime(rev(n,d))){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}

int main(){
    int n,d;
    while(cin>>n && n>=0){
        cin>>d;
        isrevprime(n,d);
    }
    return 0;
}

