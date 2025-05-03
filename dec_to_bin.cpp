#include<bits/stdc++.h>
using namespace std;

int main() {
     int decNum, ans = 0, rem, pow = 1;
     cout<<"Enter decimal number : ";
     cin >> decNum;

     while(decNum > 0) {
          rem = decNum % 2;
          decNum /= 2;
          ans += rem * pow;
          pow = pow * 10; // for backward calculation
     }

     cout << "Equivalent binary : " << ans;
     return 0;
}