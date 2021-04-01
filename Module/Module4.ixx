module;

#include <algorithm>
#include <vector>
#include <string>
#include <map>

#include <Windows.h>

export module module4;

export class Module4 {
public:

	void func() {
		v = { 1, 2, 3, 4 };
		s = "hoge";
		m[s] = v;
	}

	std::vector<int> v;
	std::string s;
	std::map<std::string, std::vector<int>> m;
};
