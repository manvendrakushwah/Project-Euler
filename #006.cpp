#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;cin>>t;
    while(t){
       long long int n;
        cin>>n;
        long long int a=(n*n*(n+1)*(n+1))/4;
        long long int b=(n*(n+1)*((2*n)+1))/6;
        long long int c=a-b;
        cout<<c<<endl;
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

