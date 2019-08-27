
// C++ program to find sum of two large numbers.
#include<iostream>
#include<math.h>
#include<string>
#include<cstring>
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

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
    for (ll i=0; i<b.length(); i++)
        mod = (mod*10 + (b[i] - '0'))%a;

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



// Function for finding sum of larger numbers
string findSum(string str1, string str2)
{
   // Before proceeding further, make sure length
   // of str2 is larger.
   if (str1.length() > str2.length())
       swap(str1, str2);

   // Take an empty string for storing result
   string str = "";

   // Calculate lenght of both string
   ll n1 = str1.length(), n2 = str2.length();
   ll diff = n2 - n1;

   // Initialy take carry zero
   ll carry = 0;

   // Traverse from end of both strings
   for (ll i=n1-1; i>=0; i--)
   {
       // Do school mathematics, compute sum of
       // current digits and carry
       ll sum = ((str1[i]-'0') +
                  (str2[i+diff]-'0') +
                  carry);
       str.push_back(sum%10 + '0');
       carry = sum/10;
   }

   // Add remaining digits of str2[]
   for (ll i=n2-n1-1; i>=0; i--)
   {
       ll sum = ((str2[i]-'0')+carry);
       str.push_back(sum%10 + '0');
       carry = sum/10;
   }

   // Add remaining carry
   if (carry)
       str.push_back(carry+'0');

   // reverse resultant string
   reverse(str.begin(), str.end());

   return str;
}

// Driver code
int main()
{


   int t;
      cin>>t;
      while(t--){


       // first number which is integer
       ll a ,c,n;
       cin>>a>>c>>n;

  //     char *longest = new char[(ll) pow(a,n)+(ll) pow(c,n)];
    //   longest[0]=0;
       string str1,str2;
      //  strcpy(*longest, str1);
      //  strcpy(*longest, str2);

    str1= to_string((ll) pow(a,n));
    str2 = to_string((ll) pow(c,n));
   a=abs(a-c);
   cout<<findSum(str1, str2)<<"\n";
   cout << gcdLarge(a, findSum(str1, str2))%1000000007<<"\n";

 }
   return 0;
}
