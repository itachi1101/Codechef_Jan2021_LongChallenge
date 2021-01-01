#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        long long n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x==y){
            cout<<n<<" "<<n<<endl;
        }
        else {
            map<long long ,pair<long long,long long  >>m;
            if(x<y){
                m[0]={x+n-y,n};
                m[1]={n,n-y+x};
                m[2]={y-x,0};
                m[3]={0,y-x};
            }
            else {
                 m[0]={n,y+n-x};
                m[1]={y+n-x,n};
                m[2]={0, x-y};
                m[3]={x-y,0};
            }
            cout<<m[(k-1)%4].first<<" "<<m[(k-1)%4].second<<endl;
        }
    }




    return 0;
}