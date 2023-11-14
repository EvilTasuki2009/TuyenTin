#include <bits/stdc++.h>
using namespace std;

bool isdx(string x){
    string s="";
    for(int i = x.size()-1; i >= 0; i--){
        s = s+x[i];
    }
    if(s.compare(x) == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    freopen("findst.inp", "r", stdin);
    freopen("findst.out", "w", stdout);

    string s="", s1="";
    char ch[80];
    bool own = false;
    long sum = 0, dx = 0, maxx = 0;
    cin >> s;
	cout<<s<<endl;
    for(int i = 0; i < s.size(); i++){
        own = false;
        for(int j = 0; j < s1.size(); j++){
            if(s[i] == s1[j]){
                own = true;
            }
        }
        if(own == false){
            s1 += s[i];
            sum++;
        }
    }
    cout<<sum<<endl;

    for(int i = 0; i < s.size(); i++){
        for(int j = i+1; j < s.size(); j++){
        	/*if(i == 19){
        		cout<<"i: "<<i<<' '<<"j: "<<j<<' '<<"j - i: "<<j - i + 1<<' '<<s.substr(i, j-i+1)<<endl;
			}*/
			if(isdx(s.substr(i, j-i+1))){
				//cout<<"i: "<<i<<' '<<"j: "<<j<<' '<<"j - i: "<<j - i + 1<<' '<<s.substr(i, j-i+1)<<endl;
				if(maxx < j-i+1){
					
					maxx = j-i+1;
				}
			}
        }
    }
    
    cout<<maxx;
	
    return 0;
}
