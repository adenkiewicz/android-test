#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	try {
		throw 1;
		std::cerr << "Oups\n";
		return -1;
	}

	catch (...) {
		std::cout << "Catch!" << std::endl;
	}

	std::vector<int> v { 1, 2, 3, 4 };

	for (auto x: v) std::cout << x;
	std::cout << std::endl;

	auto i = 2;
	std::for_each(v.rbegin(), v.rend(),
		[&i](int& j) { std::cout << i*j; });
	std::cout << std::endl;

	return 0;
}

