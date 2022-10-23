#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	const auto& d = a * a - b;
	if (0 == d) {
		cout << -a;
		return 0;
	}

	for (auto x = -2000; x <= 2000; ++x) {
		if (0 == x * x + 2 * a * x + b) {
			cout << x << ' ';
		}
	}

	return 0;
}