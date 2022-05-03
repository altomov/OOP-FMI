#include <iostream>
#include "Error.hpp"
#include "Optional.hpp"
#include "Result.hpp"

#include <type_traits>


using namespace std;

int main()
{
	Optional<int> opti (6);

	cout << opti.get_value() << endl;

	cout << "is_none: " << opti.is_none() << endl;

	if (Result<int>(3) == int())cout << true << endl;
	else cout << false << endl;

	return 0;
}