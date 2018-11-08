#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;
void partition3(vector<int> &a, int l, int r,int *lt,int *gt)
{
    *lt=l;
    *gt=r;
    int i=l;
	int x=a[l];
	int counter=0;
	while(i<=(*gt))
	{
		if(a[i]==x)
		{
			i++;
			counter++;
		}
		else if(a[i]<x)
		{
			swap(a[i++],a[(*lt)++]);
		}
		else
		{
			swap(a[i],a[(*gt)--]);
		}
	}
	std::cout<<"counter:"<<counter<<"\n";
}
int partition2(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
      j++;
      swap(a[i], a[j]);
    }
  }
  swap(a[l], a[j]);
  return j;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
	int m1,m2;
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  partition3(a, l, r,&m1,&m2);

  randomized_quick_sort(a, l, m1 - 1);
  randomized_quick_sort(a, m2 + 1, r);
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
