#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, N,counter, sum;
    int test;
    cin>>test;
    while (test > 0){
        --test;
        cin>>a>>b>>N;
        for(int i=0 ; i<N; i++){
            sum = a;
            counter = i;
            while (counter >= 0){
                sum += ((pow(2 , counter)) * b);
                counter--;
            }
            cout<<sum<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
/*for (int j=0; j<N; j++){
           int term = a;
           int counter = j;
           while(counter>=0){
               term+=(Math.pow(2,counter)*b);
               counter--;
           }*/
