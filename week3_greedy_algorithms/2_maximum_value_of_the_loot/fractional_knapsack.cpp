#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int n=weights.size();
  double V_Per_W[n];
  for(int i=0;i<weights.size();i++)
  {
	  V_Per_W[i]=values[i]/weights[i];
  }
	 
  }

  // write your code here

  //return value;
}
void bubble_Sort(double *arr)
{
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i)
		{
			if(arr[i]>arr[j+1])
			{
				swap(&arr[i],&arr[j+1]);
			}
		}
}
void swap(double *a,double *b)
{
	double temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
