#include <algorithm>
#include <vector>
#include <string>
#include <map>

#include <Windows.h>

#include "Module1.h"
#include "Module2.h"
#include "Module3.h"
#include "Module4.h"
#include "Module5.h"

int main() {
	Module1 m1;
	m1.func();

	Module2 m2;
	m2.func();

	Module3 m3;
	m3.func();

	Module4 m4;
	m4.func();

	Module5 m5;
	m5.func();

	return 0;
}