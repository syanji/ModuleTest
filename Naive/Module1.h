#pragma once

#include <algorithm>
#include <vector>
#include <string>
#include <map>

#include <Windows.h>

class Module1 {
public:

	void func();

	std::vector<int> v;
	std::string s;
	std::map<std::string, std::vector<int>> m;
};