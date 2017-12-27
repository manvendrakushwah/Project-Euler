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
        long long int n,a,b,c;
        cin>>n;
        n=n-1;
        a=((n-(n%3))*(3+n-(n%3)))/6;
        b=((n-(n%5))*(5+n-(n%5)))/10;
        c=((n-(n%15))*(15+n-(n%15)))/30;

        t--;
        cout<<a+b-c<<endl;
    }
    return 0;
}
