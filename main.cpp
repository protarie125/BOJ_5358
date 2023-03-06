#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	char c;
	while (!cin.eof() && cin.good()) {
		getline(cin, s);
		const auto& n = s.length();

		for (auto i = decltype(n){ 0 }; i < n; ++i) {
			if ('i' == s[i]) {
				s[i] = 'e';
			}
			else if ('e' == s[i]) {
				s[i] = 'i';
			}
			else if ('I' == s[i]) {
				s[i] = 'E';
			}
			else if ('E' == s[i]) {
				s[i] = 'I';
			}
		}

		cout << s << '\n';
	}

	return 0;
}