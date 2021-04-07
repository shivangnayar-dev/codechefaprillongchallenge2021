#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i <= b; i++)
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count =0;
        int max=0;
        REP(i,0,n){
            if(s[i]=='*'){
                count++;
                if(count>max)
                max=count;
            }
            else
            count=0;
            
        }
        if(max>=k){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
}
