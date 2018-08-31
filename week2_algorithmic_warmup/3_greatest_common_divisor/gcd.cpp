#include <iostream>

int gcd_fast(int a, int b) {
  int a_prime;
do
  {
	  a_prime=a%b;
	  if(a_prime==0)
	  {
	  break;
	  }
	  a=b;
	  b=a_prime;
  }
  while(1);
  return b;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
