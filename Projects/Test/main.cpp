#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int First(const vector<int> &a, int x)
{
  int l=0;
  int u=a.size()-1;
  int mid=l+(u-l)/2;
  while(1)
  {
      if(a[mid-1]<a[mid] && a[mid]==x)
      {
          return mid;
      }
      else if(a[mid-1]==a[mid] &&a[mid]==x)
      {
          mid=mid-1;
      }
      else if(a[mid+1]==a[mid] &&a[mid]==x)
      {
          mid=mid+1;
      }
      else if(a[mid]>x)
      {
          u=mid-1;
          mid=l+(u-l)/2;
      }
      else if(a[mid+1]==a[mid] || a[mid]<x)
      {
          l=mid+1;
          mid=l+(u-l)/2;
      }
      else
      {
      return -1;
      }
  }

}

int Last(const vector<int> &a, int x)
{
  int l=0;
  int u=a.size()-1;
  int mid=l+(u-l)/2;
  while(l<=u)
  {

      if(a[mid+1]>a[mid] && a[mid]==x)
      {
          return mid;
      }
      else if(a[mid-1]==a[mid] &&a[mid]==x)
      {
          mid=mid-1;
      }
      else if(a[mid+1]==a[mid] &&a[mid]==x)
      {
          mid=mid+1;
      }
      else if(a[mid]>x)
      {
          u=mid-1;
          mid=l+(u-l)/2;
      }
      else if(a[mid]<x)
      {
          l=mid+1;
          mid=l+(u-l)/2;
      }
      else
      {
      /*DO NOTHING*/
      }
  }
return -1;
}

int binary_search(const vector<int> &a, int x) {
  int l=0;
  int u=a.size()-1;
  int mid=0;
  while(l<=u)
  {
      mid=l+(u-l)/2;
      if(a[mid]==x)
      {
          return mid;
      }
      else if(a[mid]<x)
      {
          l=mid+1;
      }
      else if(a[mid]>x)
      {
         u=mid-1;
      }
      else
      {
          /*DO NOTHING*/
      }
  }
  return -1;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    //std::cout << binary_search(a, b[i]) << "\n";
    std::cout <<First(a, b[i]) << " ";
  }


}
