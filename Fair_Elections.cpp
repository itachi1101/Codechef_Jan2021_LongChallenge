#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,m;
        cin>>n>>m;
        vector<long long >v;
        vector<long long >v1;
        long long sum=0;
        long long sum1=0;
        long long answer=0;
        for(int i=0;i<n;i++){
            long long data;
            cin>>data;
            sum+=data;
            v.push_back(data);
        }
        for(int i=0;i<m;i++){
            long long data;
            cin>>data;
            sum1+=data;
            v1.push_back(data);
        }
        if(sum1>sum2){
            cout<<"0"<<'\n';
        }
        else {
            sort(v.begin(),v.end());
            sort(v1.begin(),v1.end(),greater<int>());
            int k=0;
            while(sum1<=sum2 and k<n){
                 long long temp=v1[k]-v[k];
                 sum1+=abs(temp);
                 sum2+=temp;
                 if(sum2<=0){
                     answer++;
                     break;
                 }
                 else {
                     answer++;
                     k+=1;
                 }

            }
            
        }
        if(sum1<=sum2 || sum2<0 || k==n){
            cout<<"-1";
        }
        else {
            cout<<answer
        }

    }




    return 0;
}