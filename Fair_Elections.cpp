#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long  n,m;
        cin>>n>>m;
       vector<int>q;
       vector<int>s;
        long long  sum1=0;
        long long  sum2=0;
        for(long long  i=0;i<n;i++){
            long long  data;
            cin>>data;
            sum1+=data;
            q.push_back(data);
        }
        for(long long  i=0;i<m;i++){
            long long  data;
            cin>>data;
            sum2+=data;
            s.push_back(data);
        }
        long long  swaps=0;
        sort(q.begin(),q.end());
        sort(s.begin(),s.end(),greater<int>());
        long long  k=0;
        while( sum1<=sum2 and k<n){
           sum1+=(s[k]-q[k]);
           sum2+=(q[k]-s[k]);
           if(sum1>sum2){
               swaps++;
               break;
           }
           if(sum2<=0){
            
               break;
           }
           swaps++;
           k++;
        }   
        if(sum2<=0 || k==n){
            cout<<"-1";
        }
        else 
        cout<<swaps<<endl;
    }
    return 0;
}