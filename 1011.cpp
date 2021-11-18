#include <iostream>
#include <cstdio>
using namespace std;

double game[3][3];
struct mynode{
    double ma;
    char ch;
};
char bet[3]={'W','T','L'};
mynode maxElement(int i){
    double ma=game[i][0];
    int k=0;
    for(int j=1;j<3;j++){
        if(game[i][j]>ma){
            ma=game[i][j];
            k=j;
        }
    }
    return mynode({ma,bet[k]});
}

int main() {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%lf",&game[i][j]);
    double cnt=1.0;
    for(int i=0;i<3;i++){
        mynode tmp=maxElement(i);
        printf("%c ",tmp.ch);
        cnt*=tmp.ma;
    }
    cnt=(cnt*0.65-1)*2;
    printf("%.2lf",cnt);
    return 0;
}