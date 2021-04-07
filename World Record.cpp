#include <bits/stdc++.h>
using namespace std;
float round2 (float var){
    float value = (int)(var*100.00+0.5);
    return (float)value/100.00;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        v=k1*k2*k3*v;
        float maxs = (float)100.00/(v);
        maxs = round2(maxs);
        maxs = maxs*100;
        if(maxs>=958){
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
}
