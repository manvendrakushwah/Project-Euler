#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define N 1000001


int main(){
    vector<ll> v(N,1);
    for(int i=2;i*i<N;i++){
        for(int j=2*i;j<N;j+=i){
            v[j]=0;
        }
    }


    vector<ull> sum(N);
        sum[0]=0;
        sum[1]=0;
        sum[2]=2;

    for(int i=0;i<N;i++){
        if(v[i]==0){sum[i]=sum[i-1];}
        else{sum[i]=sum[i-1]+i;}
    }

    int t;
    cin>>t;
    while(t--){
         ll n;
         cin>>n;
         cout<<sum[n]<<"\n";


    }
    return 0;
}
