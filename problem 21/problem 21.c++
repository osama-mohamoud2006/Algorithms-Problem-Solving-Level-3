#include <iostream>
using namespace std;

int main()
{


  short prev1 =1;
  short prev2 = 0;
  for(short f=0; f<10; f++){
    cout<<prev1+prev2<<" ";
    prev2=prev1+prev2;
    prev1= prev2-prev1;

  }
}