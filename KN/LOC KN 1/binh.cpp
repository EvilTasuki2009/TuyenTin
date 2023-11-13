#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("binh.out", "w", stdout);

    for(int i = 1000; i <= 1500; i++){
        if((i % 3 == 1) && (i % 5 == 2) && (i % 7 == 3) && (i % 11 == 9)){
            cout<<i;
            return 0;
        }
    }
    return 0;
}
