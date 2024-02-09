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
	cout << "function 3 test passed" << endl;
}
