#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
    float M,T,X;
    int finalPrice;
    float tip, tax;
    cin>>M>>T>>X;
    
    /*M=12, T=20, X=8 
tip=(20×12)/100=2.4 
tax=(8×12)/100=0.96 
final price=12+2.4+0.96=15.36 */
    
    tip = (T*M)/100;
    
    tax = (X*M)/100;
    
    finalPrice = round(M + tip + tax);
    
    cout<<"The final price of the meal is $"<<finalPrice<<".";
    
    return 0;
}
