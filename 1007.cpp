#include <iostream>
using namespace std;

int k, arr[10000];

int main() {
	scanf("%d", &k);
	int tmp = 0, tmpindex = 0, l = 0, r = k - 1, maxn = -1;
	for(int i = 0; i < k; i++) {
		scanf("%d", &arr[i]);
		tmp += arr[i];
		if(tmp < 0) {
			tmp = 0;
			tmpindex = i + 1;
		} else if(tmp > maxn) {
			maxn = tmp;
			l = tmpindex;
			r = i;
		}
	}
	if(maxn < 0) maxn = 0;
	printf("%d %d %d", maxn, arr[l], arr[r]);
	return 0;
}
