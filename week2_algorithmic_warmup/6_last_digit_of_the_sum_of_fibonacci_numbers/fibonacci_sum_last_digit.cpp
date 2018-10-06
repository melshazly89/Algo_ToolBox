#include <iostream>
long long Pisano_Period(long long m);
int fibonacci_sum_naive(long long n) {
	int length=Pisano_Period(10);
	n=n%length;
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
        sum += current;
    }

    return sum%10;
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
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n);
}
