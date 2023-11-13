#include <bits/stdc++.h>
using namespace std;

string s = "";
string b = "";
void plusString(long long n){
    b = "";
    while(n > 0){
        b += (n%10)+48;
        n /= 10;
    }
    for(int i = b.size()-1; i >= 0; i--){
        s += b[i];
    }
}

bool isPrime(long n){
    if(n <= 1){
        return false;
    }
    else{
        for(int i = 2; i*i <= n; i++){
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
    int n, sum = 0;
    cin >> n;
    for(int i = 2; i < n+100; i++){
        if(isPrime(i)){
           plusString(i*i*i);
        }
    }
    cout<<s[n-1];

    return 0;
}
