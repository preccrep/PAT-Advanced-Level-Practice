#include <iostream>
#include <unordered_map>
using namespace std;

int n,m,a;
unordered_map<int,int>pixel;

int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			scanf("%d",&a);
			pixel[a]++;
		}
	}
	unordered_map<int,int>::iterator it=pixel.begin();
	int ans,maxp=0;
	for(;it!=pixel.end();++it){
		if(it->second>maxp){
			maxp=it->second;
			ans=it->first;
		}
	}
	printf("%d",ans);
	return 0;
}