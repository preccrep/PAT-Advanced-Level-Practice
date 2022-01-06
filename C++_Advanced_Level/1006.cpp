#include <iostream>
#include <string.h>
using namespace std;

struct ti {
	int h, m, s;
};

int main() {
	int n;
	ti t1, t2, tmax, tmin;
	char idmin[20], idmax[20], s[20];
	tmax.h = 0, tmax.m = 0, tmax.s = 0;
	tmin.h = 24, tmin.m = 59, tmin.s = 59;
	scanf("%d", &n);
	while(n--) {
		scanf("%s %d:%d:%d %d:%d:%d", s, &t1.h, &t1.m, &t1.s, &t2.h, &t2.m, &t2.s);
		if(t1.h < tmin.h) {
			tmin.h = t1.h, tmin.m = t1.m, tmin.s = t1.s;
			strcpy(idmin, s);
		} else if(t1.m < tmin.m) {
			tmin.m = t1.m, tmin.s = t1.s;
			strcpy(idmin, s);
		} else if(t1.s < tmin.s) {
			tmin.s = t1.s;
			strcpy(idmin, s);
		}
		if(t2.h > tmax.h) {
			tmax.h = t2.h, tmax.m = t2.m, tmax.s = t2.s;
			strcpy(idmax, s);
		} else if(t2.m > tmax.m) {
			tmax.m = t2.m, tmax.s = t2.s;
			strcpy(idmax, s);
		} else if(t2.s > tmax.s) {
			tmax.s = t2.s;
			strcpy(idmax, s);
		}
	}
	printf("%s %s", idmin, idmax);
	return 0;
}
