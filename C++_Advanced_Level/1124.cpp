#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

int m,n,s;
char nickname[25];
unordered_map<string,int>_map;

int main(){
	scanf("%d%d%d",&m,&n,&s);
	int i=1,j=s,f=0;
	for(;i<=m;++i){
		scanf("%s",nickname);
		if(i==j){
			if(_map.count(nickname)==0){
				printf("%s\n",nickname);
				f=1;
				_map[nickname]=1;
				j+=n;
			}else ++j;
		}
	}
	if(!f) printf("Keep going...\n");
	return 0;
}