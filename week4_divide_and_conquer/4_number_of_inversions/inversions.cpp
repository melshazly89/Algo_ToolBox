#include <iostream>
#include <vector>

using std::vector;
int Merge(vector<int> &a,size_t l,size_t m,size_t r);
int Mergesort(vector<int> &a,size_t l,size_t r);
long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
  long long number_of_inversions = 0;
  if (right <= left + 1) return number_of_inversions;
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, b, left, ave);
  number_of_inversions += get_number_of_inversions(a, b, ave, right);
  //write your code here
  return number_of_inversions;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  vector<int> b(a.size());
  std::cout << Mergesort(a, 0, a.size()) << '\n';
}

int Mergesort(vector<int> &a,size_t l,size_t r)
{
	int Inv=0;
if(l<r)
{
    int m=l+(r-l)/2;
    Inv=Mergesort(a,l,m);
    Inv+=Mergesort(a,m+1,r);
    Inv+=Merge(a,l,m,r);
}
return Inv;
    }
int Merge(vector<int> &a,size_t l,size_t m,size_t r)
{
    int inv=0;
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i]=a[l+i];
    for(int j=0;j<n2;j++)
        R[j]=a[j+m+1];

    i=0;  /*Initial index of the left array*/
    j=0;  /*Initial index of the right array*/
    k=l;  /*Initial index of the Merged array*/
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k++]=L[i++];
        }

        else
        {
            a[k++]=R[j++];
            inv+=m-i;
        }

    }

    while(i<n1)
        a[k++] = L[i++];

    while (j < n2)
        a[k++] = R[j++];
    return inv;
}
