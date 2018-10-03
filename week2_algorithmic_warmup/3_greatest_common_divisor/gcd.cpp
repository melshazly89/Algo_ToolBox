#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

long long gcd_fast(int a,int b)
{
int b_dashed=b;
int gcd=a;
  while(true)
  {
    if(gcd==0)
      {
          return a;
      }
      gcd=a%b_dashed;
      a=b_dashed;
      b_dashed=gcd;
  }
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
