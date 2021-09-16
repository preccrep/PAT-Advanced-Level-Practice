#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int k1, k2, n, cnt = 0;
    float term[1001] = {0};
    float a;
    cin >> k1;
    for(int i = 0; i < k1; i++) {
        cin >> n >> a;
        term[n] += a;
    }
    cin >> k2;
    for(int i = 0; i < k2; i++) {
        cin >> n >> a;
        term[n] += a;
    }
    for(int i = 1000; i >= 0; i--)
        if(term[i] != 0.0) cnt++;
    cout << cnt;
    for(int i = 1000; i >= 0; i--)
        if(term[i] != 0.0)
            cout << " " << i << " " << fixed << setprecision(1) << term[i];
    return 0;
}
