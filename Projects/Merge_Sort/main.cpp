#include <iostream>

using namespace std;
void Merge(int a[],int l,int m,int r);
void printArray(int A[], int size);
void sort(int a[],int l,int r);
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
int main()
{
    std::cout<<"Given array is "<<"\n";
    printArray(arr, arr_size);
    sort(arr, 0, arr_size-1);

    std::cout<<"Sorted array is  "<<"\n";
    printArray(arr, arr_size);
    return 0;
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        std::cout<< A[i];
    std::cout<<"\n";
}
void sort(int a[],int l,int r)
{
if(l<r)
{
    int m=l+(r-l)/2;
    sort(a,l,m);
    sort(a,m+1,r);
    Merge(a,l,m,r);
}

    }
void Merge(int a[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    int result[r-l+1];
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
            a[k++]=L[i++];
        else
            a[k++]=R[j++];
    }
/*
    while(i<n1)
        a[k++] = L[i++];

    while (j < n2)
        a[k++] = R[j++];
        */
}
