#include<iostream>
using namespace std;


int main(){
    int N;
    cin >> N;

    /*Given an integer N as input, check the following:

If N is odd, print "Weird".
If N is even and, in between the range of 2 and 5(inclusive), print "Not Weird".
If N is even and, in between the range of 6 and 20(inclusive), print "Weird".
If N is even and N>20, print "Not Weird".*/

    if(N%2)
        cout<<"Weird";
    
    else if(N%2 == 0){
        if(N>1 && N<6){
            cout<<"Not Weird";
        }
        if(N>6 && N<21){
            cout<<"Weird";
        }
        if(N>20){
            cout<<"Not Weird";
        }
    }

    return 0;
}
