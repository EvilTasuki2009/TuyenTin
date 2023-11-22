#include <bits/stdc++.h>
using namespace std;
#define TIME ( 1.0 * clock() / CLOCKS_PER_SEC)

string s = "";
string b = "";
void plusString(long long n){
    b = "";
    while(n > 0){
        b += (n%10)+48;
        n /= 10;
    }
    for(long long i = b.size()-1; i >= 0; i--){
        s += b[i];
    }
}

bool isPrime(long long n){
    if(n <= 1){
        return false;
    }
    else{
        for(long long i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    freopen("dongchu.inp", "r", stdin);
    freopen("dongchu.out", "w", stdout);
    unsigned long long n, sum = 0;
    cin >> n;
    for(unsigned long long i = 2; i < n+150; i++){
        if(isPrime(i)){
           plusString(i*i*i);
        }
    }
    cout<<s[n-1]<<endl;
    cout<<s;
    return 0;
}
