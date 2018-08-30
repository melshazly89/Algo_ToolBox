#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

string largest_number(vector<string> a) {
  int temp;
  std::vector<int> b;
  for (int i=0; i< a.size(); i++)
  {
      int num = atoi(a.at(i).c_str());
      while(num)
      {
          b.push_back(num%10);
          num /= 10;
          
      }
  }
  
  for (int i = 0; i < b.size(); i++)
  {
      for (int j = 0; j < b.size(); j++)
      {
          if(b[i]>b[j])
          {
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
          }
          
      }
  }
  std::stringstream ret;
  for (size_t i = 0; i < b.size(); i++) {
    ret << b[i];
  }
  
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}