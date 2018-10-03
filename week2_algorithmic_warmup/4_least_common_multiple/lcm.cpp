#include <iostream>

long long lcm_naive(int a, int b) {
  for (long long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;
}

unsigned long long gcd_fast(int a,int b)
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

unsigned long long lcm_fast(long long a,long long b) {
return (unsigned long long)(a*b)/gcd_fast(a,b);
}
int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
