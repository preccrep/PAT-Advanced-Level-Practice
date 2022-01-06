#include <iostream>
#include <string>
using namespace std;

int n;
int order[55],place[2][55];
char ch[5]={'S','H','C','D','J'};

int main(){
	cin>>n;
	for(int i=1;i<=54;++i){
		cin>>order[i];
	}
	int f=0;
	for(int i=1;i<=54;++i){
		place[f][i]=i;
	}
	while(n--){
		for(int i=1;i<=54;++i){
			place[!f][order[i]]=place[f][i];
		}
		f=!f;
	}
	for(int i=1;i<54;++i){
		int j=place[f][i]-1;
		cout<<ch[j/13]<<j%13+1<<" ";
	}
	int j=place[f][54]-1;
	cout<<ch[j/13]<<j%13+1;
	return 0;
}