#include <iostream>
using namespace std;

#define maxe 1000
#define maxn 1000000

int main() {
	int tmpn, k;
	float tmpa;
	float a1[maxe+5] = {0};
	float res[maxn+5] = {0};
	scanf("%d", &k);
	for(int i = 0; i < k; i++) {
		scanf("%d%f", &tmpn, &tmpa);
		a1[tmpn] = tmpa;
	}
	scanf("%d", &k);
	for(int i = 0; i < k; i++) {
		scanf("%d%f", &tmpn, &tmpa);
		for(int j = 0; j <= maxe; j++) {
			res[j + tmpn] += a1[j] * tmpa;
		}
	}
	int cnt = 0;
	for(int i = 0; i <= maxn; i++)
		if(res[i]) cnt++;
	printf("%d", cnt);
	for(int i = maxn; i >= 0; i--)
		if(res[i]) printf(" %d %.1f", i, res[i]);
	return 0;
}
