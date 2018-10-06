#include <iostream>
long long Pisano_Period(long long m);

long long get_fibonacci_huge_fast(long long n, long long m) {
	 int length=Pisano_Period(m);
	 long long Fn_mod_m[n%length];
	 n=n%length;
	for(int i=0;i<=n;i++)
	{
	    if(i>1)
	    {
		Fn_mod_m[i]=(Fn_mod_m[i-1]+Fn_mod_m[i-2])%m;
	    }
	    else
	    {
	        Fn_mod_m[i]=i%m;
	    }
	}
    return Fn_mod_m[n];
}
long long Pisano_Period(long long m)
{
	long long previous=0;
	long long current=1;
	long long Period=0;
	long long Seq=previous+current;
	while(1)
	{
		Seq=(previous+current)%m;
		previous=current;
		current=Seq;
		Period++;
		if(current==1&&previous==0)
		{
		    break;
		}
	}
return Period;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
    
}
