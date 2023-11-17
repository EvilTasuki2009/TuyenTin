#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("newss.inp", "r", stdin);
    freopen("newss.out", "w", stdout);

    string s1="", s2="";
    int n;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            s1="";
            s2="";
            long tmp1=a[i], tmp2=a[j];
            char t1, t2;
            while(tmp1 > 0){
                t1 = tmp1%10+48;
                s1 = t1 + s1;
                tmp1/=10;
            }
            while(tmp2 > 0){
                t2 = tmp2%10+48;
                s2 = t2 + s2;
                tmp2/=10;
            }
            if(s1.compare(s2) < 0){
            	swap(a[i], a[j]);
			}
        }
    }
    for(int i = 0; i < n; i++){
    	cout<<a[i]<<' ';
	}

    return 0;
}
