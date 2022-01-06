#include <iostream>
#include <cstdio>

#define ll long long

using namespace std;

int t;
ll a,b,c;

int main(){
	scanf("%d",&t);
	for(int i=1;i<=t;++i){
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("Case #%d: ",i);
		if(a>0&&b>0&&c>0){
			if(a>c-b) printf("true");
			else printf("false");
		}else if(a>0&&b>0&&c<0){
			printf("true");
		}else if(a>0&&b<0&&c>0){
			if(b>c-a) printf("true");
			else printf("false");
		}else if(a>0&&b<0&&c<0){
			if(a>c-b) printf("true");
			else printf("false");
		}else if(a<0&&b>0&&c>0){
			if(a>c-b) printf("true");
			else printf("false");
		}else if(a<0&&b>0&&c<0){
			if(b>c-a) printf("true");
			else printf("false");
		}else if(a<0&&b<0&&c>0){
			printf("false");
		}else if(a<0&&b<0&&c<0){
			if(a>c-b) printf("true");
			else printf("false");
		}else if(a==0||b==0){
			if(a+b>c) printf("true");
			else printf("false");
		}else if(c==0){
			if(a>0&&b>0) printf("true");
			else if(a<0&&b<0) printf("false");
			else if(a+b>c) printf("true");
			else printf("false");
		}
		if(i!=t) printf("\n");
	}
	return 0;
}