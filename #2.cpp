#include <math.h>
#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<vector>
#include<algorithm>

using namespace std;


int main(){


    long int t;
  cin>>t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin>>n;
        vector<long long int> fib;
         fib.push_back(1);
    fib.push_back(2);
for(int j=2; ;j++){

    fib.push_back(fib[j-1]+fib[j-2]);
    if(fib[j]>=n){break;}
}
 long long int sum=0;
        for(int i=1;fib[i-1]<n;i++){
            if(fib[i-1]%2==0){sum+=fib[i-1];}
        }
       cout<<sum<<endl;

    }
    return 0;
}

