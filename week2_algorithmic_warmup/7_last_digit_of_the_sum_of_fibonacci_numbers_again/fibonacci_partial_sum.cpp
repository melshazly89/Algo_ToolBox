#include <iostream>
#include <vector>
using std::vector;
long long Pisano_Period(long long m);
long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;
	int length=Pisano_Period(10);
	from=from%length;
	to=to%length;
    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
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
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
}
