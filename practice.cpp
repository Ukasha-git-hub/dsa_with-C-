#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
 void p (double x, int n){
    
double fv = pow(x,n);
    cout<< fv<< endl;
 }
int main()
{
   // double x =4;
   // double n = 4;
   double x = 0;
   int n = 3;
    p(x,n);
   return 0;
}
//pow(x, n)