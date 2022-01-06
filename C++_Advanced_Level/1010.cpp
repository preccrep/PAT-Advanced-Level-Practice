#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

typedef long long ll;

ll convert(string s,ll radix){
    ll cnt=0,s_size=s.size();
    for(ll i=0;i<s_size;i++){
        int tmp=isdigit(s[i])?(s[i]-'0'):(s[i]-'a'+10);
        cnt+=tmp*pow(radix,s_size-1-i);
    }
    return cnt;
}

ll find_radix(string s,ll val){
    char maxele=*max_element(s.begin(),s.end());
    ll left=(isdigit(maxele)?(maxele-'0'):(maxele-'a'+10))+1;
    ll right=max(val,left);
    while(left<=right){
        ll mid=(left+right)>>1;
        ll v2=convert(s,mid);
        // if(v2==val) return mid;
        // else if(v2<val) left=mid+1;
        // else right=mid-1;
        //这里没有考虑溢出，应该用下面这种方式：
        if(v2==val) return mid;
        else if(v2<0||v2>val) right=mid-1;
        else left=mid+1;
    }
    return -1;
}

int main() {
    string n1,n2;
    ll tag,radix;
    cin>>n1>>n2>>tag>>radix;
    if(tag==2) swap(n1,n2);
    ll v1=convert(n1,radix);
    ll rd=find_radix(n2,v1);
    if(rd==-1) cout<<"Impossible"<<endl;
    else cout<<rd<<endl;
    return 0;
}