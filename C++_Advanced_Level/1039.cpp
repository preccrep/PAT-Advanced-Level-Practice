#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n,k,idx,ni;
string name;
unordered_map<string,vector<int> >list;

int main(){
	cin>>n>>k;
	while(k--){
		cin>>idx>>ni;
		while(ni--){
			cin>>name;
			if(list.count(name)==0){
				list[name]=vector<int>(1);
				list[name][0]=idx;
			}else list[name].push_back(idx);
		}
	}
	while(n--){
		cin>>name;
		cout<<name;
		cout<<" "<<list[name].size();
		sort(list[name].begin(), list[name].end());
		for(int i=0;i<list[name].size();++i){
			cout<<" "<<list[name][i];
		}
		if(n) cout<<endl;
	}
	return 0;
}