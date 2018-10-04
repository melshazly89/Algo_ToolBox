#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int get_fibonacci_last_digit_fast(int n) {
	int Fn[n];
	int sum=0;
	int result=0;
	Fn[0]=0;
	Fn[1]=1;

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
		result=sum%10;


    return result;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << get_fibonacci_last_digit_fast(n);
}
