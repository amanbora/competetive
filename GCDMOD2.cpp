// C++ program to find GCD of two numbers such that
// the second number can be very large.
#include<iostream>
#include <boost/lexical_cast.hpp> // for lexical_cast()
#include <string> // for st

using namespace std;
typedef long long int ll;

// function to find gcd of two integer numbers
ll gcd(ll a, ll b)
{
    if (!a)
       return b;
    return gcd(b%a,a);
}

// Here 'a' is integer and 'b' is string.
// The idea is to make the second number (represented
// as b) less than and equal to first number by
// calculating its mod with first integer number
// using basic mathematics
ll reduceB(ll a, string b)
{
    // Initialize result
    ll mod = 0;

    // calculating mod of b with a to make
    // b like 0 <= b < a
    for (int i=0; i<b.length(); i++)
        mod = (mod*10 + (b[i] - 48))%a;

    return mod; // return modulo
}

// This function returns GCD of 'a' and 'b'
// where b can be very large and is represented
// as a character array or string
ll gcdLarge(ll a, string b)
{
    // Reduce 'b' (second number) after modulo with a
    ll num = reduceB(a, b);

    // gcd of two numbers
    return gcd(a, num);
}

// Driver program
int main()
  {   int t;
      cin>>t;
      while(t--){


       // first number which is integer
       ll a ,c,n;
       cin>>a>>c>>n;

       char * p= new char[((ll)pow(a,n) +1 + (ll)pow(c,n) -1)];

      p=((ll)pow(a,n) +1 + (ll)pow(c,n) -1);


        a=abs(a-c);

          cout << gcdLarge(a, b)%1000000007 ;

          cout<<"\n";
        }
        return 0;
}
