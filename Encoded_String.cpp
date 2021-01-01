#include<bits/stdc++.h>
using namespace std;
string s="abcdefgh ijklmnop";
int main(){
    
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string answer;
        long long n;
        cin>>n;
        string t;
        cin>>t;
        for(int i=0;i<t.size()-3;){
            string sub=t.substr(i,4);
            int ans= stoi(sub, 0, 2);

            if(ans<8){
                answer+=s[ans];
            }
            else {
                answer+=s[ans+1];
            }
            i+=4;
            
        }
        cout<<answer<<endl;
    }




    return 0;
}