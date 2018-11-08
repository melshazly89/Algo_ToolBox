#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;
int Find_Major(vector<long long> &a, int left, int right);
int get_majority_element_Naive(vector<long long> &a, int left, int right);
int get_majority_element_Fast(vector<long long> &a, int left, int right);
int get_majority_element_Naive(vector<long long> &a, int left, int right) {
  int current=0;
  int n=a.size();
  int count=0;
for(int i=0;i<n;i++)
{
    current=a[i];
    count=0;
    for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count>(n/2))
            {
                std::cout <<"current:"<<current<<"\n" ;
                return 1;
            }
        }
}
        std::cout <<"no majority element"<<"\n" ;
        return 0;
}

int get_majority_element_Fast(vector<long long> &a, int left, int right) {
  int n=a.size();
  int count=0;
  int Major=Find_Major(a,left,right);
  for(int i=0;i<n;i++)
  {
	  if(a[i]==Major)
		  count++;
	  
	  if(count>(n/2))
		  return 1;
  }
//std::cout <<"no majority element"<<"\n" ;
return 0;

        
}

int Find_Major(vector<long long> &a, int left, int right)
{
    int maj_index=0;
    int count=1;
    int n=a.size();
    for(int i=1;i<n;i++)
    {
		if(a[maj_index]==a[i])
			count++;
        else
			count--;
        
        if(0==count)
        {
            maj_index=i;
            count=1;
        }
    }
    return a[maj_index];
}
int main() {
  int n;
  std::cin >> n;
  vector<long long> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << get_majority_element_Fast(a, 0, a.size()) << '\n';
}
