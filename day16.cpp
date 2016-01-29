#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

  int min=10000000;
  int N;

vector <int> ar;
vector <int> vec;
cin>>N;
 for(int i=0;i<N;++i)
    {
    int v;
    cin>>v;
    ar.push_back(v);
}
sort(ar.begin(),ar.end());
for(int i=0;i<N;++i)
   {
   int d=ar[i+1]-ar[i];
   if(d<0)
       d=d*(-1);
   if(min==d)
       {

       vec.push_back(ar[i]);
       vec.push_back(ar[i+1]);

       }

  else  if(min>d)
       {
      min=d;
       vec.clear();

       vec.push_back(ar[i]);
       vec.push_back(ar[i+1]);
   } }



for(int i=0;i<vec.size();++i)
    {
    cout<<vec[i]<<" ";
}

return 0;}
