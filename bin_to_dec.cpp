#include<bits/stdc++.h>
using namespace std;

int main() {
     int binNum, ans = 0, rem, pow = 1;
     cout << "Enter binary number : ";
     cin >> binNum;

     while(binNum > 0) {
          rem = binNum % 10;
          binNum /= 10;
          ans += rem * pow;
          pow *= 2;
     }

     cout << "Equivalent decimal : " << ans << endl;
     return 0;
}