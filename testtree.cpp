#include "tree.cpp"
#include <cassert>
#include <iostream>
using namespace std;

int main()
{
	double a1[] = {10, 50, 40, 20, 50, 40, 30};
	double a2[] = {10, 20, 40};
	double a3[] = {10, 40, 30};
	double a4[] = {20, 10, 40};
	double a5[] = {50, 40, 30};
	assert(countIncludes(a1, 7, a2, 3) == 1);
	assert(countIncludes(a1, 7, a3, 3) == 2);
	assert(countIncludes(a1, 7, a4, 3) == 0);
	assert(countIncludes(a1, 7, a5, 3) == 3);

	assert(countIncludes(a1, 7, a5, 0) == 1);
	assert(countIncludes(a1, 7, a5, -1) == 1);
	assert(countIncludes(a1, -7, a5, -1) == 1);
	assert(countIncludes(a1, -7, a5, 3) == 0);
	cout << "countIncludes test passed" << endl;
	return 0;
}
