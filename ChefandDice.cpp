#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        sum = (n/4)*44;
        int a = (n%4);
        if(n>=4){
            if(a==0){
                sum+=16;
            }
            if(a==1){
                sum+=32;
            }
            if(a==2){
                sum+=44;
            }
            if(a==3){
                sum+=55;
            }
            cout<<sum<<endl;
        }
        else{
            int b;
            if(a==1){
                b=20;
            }
            if(a==2){
                b=36;
            }
            if(a==3){
                b=51;
            }
            cout<<b<<endl;
            
        }
        
    }
    
	// your code goes here
	return 0;
}
