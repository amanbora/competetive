#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

unsigned int bigmodulus(string bignumber, int m) {
    static const int modulus_multiply_e6 = 100000 % m;

    if (bignumber.length() <= 5) {
        int currNumber;
        stringstream(bignumber) >> currNumber;

        return (currNumber % m);
    }

    string rightFiveDigit = bignumber.substr(bignumber.length()-5, 5);

    bignumber = bignumber.substr(0, bignumber.length()-5);

    int remainder;
    stringstream(rightFiveDigit) >> remainder;
    int modulusRemainder = remainder % m;

    return (bigmodulus(bignumber, m)*modulus_multiply_e6 + modulusRemainder) % m;
}

int gcd(int n1, int n2);

int gcd(string bignumber, int othernumber) {
    int m = bigmodulus(bignumber, othernumber);

    if (m == 0)
        return othernumber;

    return gcd(othernumber, m);
}

int gcd(int n1, int n2) {
    if (n1 < n2) {
        int temp = n1;
        n1 = n2;
        n2 = n1;
    }

    if (n1 % n2 == 0)
        return n2;
    else
        n1 = n1 % n2;

    return gcd(n2, n1);
}

int main ()
{
    int t;
    cin>>t;
    while(t--){
       long n,p,q;
       cin>>n;

       if(n%2==0)
          p=pow(10,n/2-1);
       else
         p=pow(10,(n-1)/2);
       q=pow(10,n-1);

      stringstream qu;
      qu<<q;
      string str =qu.str();

      cout<<p/gcd(str,p)<<" "<<q/gcd(str,p)<<endl;

  }






}
