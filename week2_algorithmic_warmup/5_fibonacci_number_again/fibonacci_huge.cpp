#include <iostream>
long long get_fibonacci_huge_fast(long long n, long long m) {
	 int length=Pisano_Period(m);
	 int Fn[n];
	 int sum=0;
	 int result=0;

	for(int i=0;i<=n;i++)
	{
	    if(i>1)
	    {
		Fn[i]=(Fn[i-1]+Fn[i-2]);
	    }
	    else
	    {
	        Fn[i]=i;
	    }
	    sum+=Fn[i];
	}
		result=(sum%length)%m;


    return result;
}
int Pisano_Period(long long m)
{
	int previous=1;
	int current=1;
	int result;
	int buffer;
	while(previous !=0 && current!=1)
	{
		buffer=(previous+current)%m;
		previous=current;
		current=buffer;
		result+=1
	}
return result;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}
