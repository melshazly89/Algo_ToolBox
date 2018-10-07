#include <iostream>

int get_change(int m) {
  int n=0;
  while(0!=m)
  {
     if(m%10==0)
     {
         m=m-10;
         
     }
     else if(m%5==0)
     {
        m=m-5;
     }
     else
     {
         m=m-1;
     }
     n++;
  }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
