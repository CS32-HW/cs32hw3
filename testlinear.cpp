#include <iostream>
#include <cassert>
using namespace std;

bool somePredicate(double x)
{
	return x >= 0;
}

#include "linear.cpp"

int main ()
{
	double x[] = {1, 2, 3};
	double y[] = {1, -2, 3};
	double z[] = {-1, -2, 3};
	double w[] = {-1, -2, -3};
	double q[] = {1, 2, -3};
	assert(!anyFalse(x, 3));
	assert(anyFalse(y, 3));
	cout << "function 1 test passed" << endl;

	assert(countFalse(x, 3) == 0 && countFalse(y, 3) == 1 &&
			countFalse(z, 3) == 2 && countFalse(w, 3) == 3);
	cout << "function 2 test passed" << endl;

	assert(firstFalse(x, 3) == -1);
	assert(firstFalse(y, 3) == 1);
	assert(firstFalse(z, 3) == 0);
	assert(firstFalse(w, 3) == 0);
	assert(firstFalse(q, 3) == 2);
	cout << "function 3 test passed" << endl;

	assert(locateMinimum(x, 3) == 0);
	assert(locateMinimum(y, 3) == 1);
	assert(locateMinimum(z, 3) == 1);
	assert(locateMinimum(w, 3) == 2);
	cout << "function 4 test passed" << endl;

	double a1[] = {10, 50, 40, 20, 50, 40, 30};
	double a2[] = {10, 50, 40, 20, 50, 40, 30};
	double a3[] = {50, 20, 30};
	double a4[] = {50, 40, 40};
	double a5[] = {50, 30, 20};
	double a6[] = {10, 20, 20};
	assert(includes(a1, 7, a2, 7));
	assert(includes(a1, 7, a3, 3));
	assert(includes(a1, 7, a4, 3));
	assert(!includes(a1, 7, a5, 3));
	assert(!includes(a1, 7, a6, 3));
	cout << "function 5 test passed" << endl;
}
