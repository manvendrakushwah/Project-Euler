#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define N 1000100


int main(){
    vector<ll> v(N,1);
    for(int i=2;i*i<N;i++){
        for(int j=2*i;j<N;j+=i){
            v[j]=0;
        }
    }

    vector<ll> primes;
    for(int i=2;i<N;i++){
        if(v[i]==1){primes.pb(i);}
    }

    int t;
    cin>>t;
    while(t--){
        ll n;
        bool ans=0;
        cin>>n;
        ll maxm=INT_MIN;
        ll count=0;
        while(n!=1){
            if(n%primes[count]==0){
                n/=primes[count];
                maxm=max(maxm,primes[count]);
                count=0;    
            }
            else{
                if(count+1==primes.size()){ans=1;break;}
                count++;
            }
        }
        if(!ans){cout<<maxm<<"\n";}
        else{cout<<n<<"\n";}
    }
return 0;}
