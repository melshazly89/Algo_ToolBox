#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int maximum(vector<int> &a);
int get_majority_element(vector<int> &a, int left, int right);
int maximum(vector<int> &a)
{
    int n=a.size();
    int max=a[0];
    for(int i=0;i<n;i++)
    {
      if(a[i]>max)
      {
          max=a[i];
      }
        
    }
  return max;
}
int get_majority_element(vector<int> &a, int left, int right) {
  int n=a.size();
  int max=maximum(a);
  int count[max+1]={0};

  for(int i=0;i<n;i++)
  {
	  count[a[i]]++;
	  if(count[a[i]]>(n/2))
	  {
		  //std::cout <<a[i]<<" "<<count[a[i]]<<"\n" ;
		  return 1;
	  }

  }
  //std::cout<<"Majority Not Found"<<"\n";
  return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << get_majority_element(a, 0, a.size()) << '\n';
}
