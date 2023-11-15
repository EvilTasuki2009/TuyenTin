#include<bits/stdc++.h>
using namespace std;

long tripleresult(long n){
    long sum = 0;
    while(n > 0){
        sum += (n % 10)*(n % 10)*(n % 10);
        n/=10;
    }
    return sum;
}

int main(){
    freopen("timso.out", "w", stdout);

    for(int i = 100; i <= 999; i++){
        if(tripleresult(i) == i){
            cout<<i<<' ';
        }
    }

    return 0;
}
