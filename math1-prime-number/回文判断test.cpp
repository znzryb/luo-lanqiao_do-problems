#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

bool check_hui(int i){
    string i_string=to_string(i);
    if (i<10) return true;
    int pi=0,pj=i_string.size()-1;
    while (pi<pj){
        if (i_string[pi]!=i_string[pj]) return false;
        pi+=1;
        pj-=1;
    }
    return true;
}

int a;
int main(){
    scanf("%d",&a);
    printf("%d",check_hui(a));
    return 0;
}