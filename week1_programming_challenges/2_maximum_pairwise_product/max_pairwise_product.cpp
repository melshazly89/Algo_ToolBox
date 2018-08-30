#include <iostream>
#include <vector>
#include <algorithm>


long long MaxPairwiseProduct(const std::vector<long long>& numbers) {
	long long first = 0;
	long long Second = 0;
    int n = numbers.size();


		for (int i = 0; i < n; ++i)
		{
			if (numbers[i] > first)
			{
				Second = first;
				first = numbers[i];
			}
			else if (numbers[i] > Second)
			{
				Second = numbers[i];
			}
			
		}
    

		return first*Second;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    std::cout << result << "\n";
    return 0;
}
