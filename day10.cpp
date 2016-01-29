#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t;
    
    
    
    while(t-- > 0){
        cin>>n;
        int v[32] = {0};
       int j=0;
       if(n == 1){
                cout<<"1";
        }
        else{
            for(int i=n ; i>0 ; i/=2)
            {
                v[j]=i%2;
                j++;

            }

            for(int i=j-1 ; i>=0; i--)
            {
               cout<<v[i];

            }
            
        }
      cout<<endl;  
    }
    return 0;
}
