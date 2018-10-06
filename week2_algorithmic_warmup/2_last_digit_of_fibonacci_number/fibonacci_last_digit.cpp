#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
	int result[n];
	result[0]=0;
	result[1]=1;
	for(int i=2;i<=n;i++)
	{
		result[i]=(result[i-1]+result[i-2])%10;
	}

    return result[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
