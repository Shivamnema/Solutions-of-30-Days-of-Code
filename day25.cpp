
#include <math.h>
#include <iostream>
//THE SOLUTION DID NOT PASSES ALL THE TEST CASES.
using namespace std;

int IS_prime(long long int );
int main(void){
    int test,check;
    long long int number;
    cin>>test;
    while ( test-- > 0){
        cin>>number;

        check = IS_prime(number);
        if(check == 0) cout<<"Prime";
        else if(check == 1) cout<<"Not prime";
            cout<<endl;
    }
        return 0;
}
int IS_prime(long long int num)
{// Returns '0' if its prime, and a '1' if its not prime.
	int isprime = 0;
	for(long i = 2; i <= sqrt(num); i += 2)
	{
		if(i % 2 == 0)
			i++;

		if((int(num)% i) == 0)
		{
			isprime = 1;
			break;
		}
	}

	return isprime;
}
