#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector<int> v;
        vector<int> v1;
        for(int l=2;l<=n;l++){
            v.push_back(l);
        }
        for(int i=2;i<=n;i++){
            v1.push_back(v[i-2]);
            for(int j=i;j<=n;j++){
                if(v[j]%v[i-2]==0){v[j]=v[j]/v[i-2];}
            }
        }
        long long int product =1;
        for(int k=0;k<v1.size();k++){
            product*=v1[k];
        }
        cout<<product<<endl;
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
