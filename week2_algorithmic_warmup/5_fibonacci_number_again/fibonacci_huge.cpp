#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
	long long result[n];
	result[0]=0;
	result[1]=1;
	for(int i=2;i<=n;i++)
	{
		result[i]=(result[i-1]+result[i-2])%m;
	}

    return result[n];
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}
