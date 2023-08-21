

#include <iostream>
using namespace std;

// Namespace n1
namespace n1 {
int x = 2;
void fun()
{
	cout << "This is fun() of n1"
		<< endl;
}
}

// Function calling function
void print()
{
	// Gives error, used without ::
	//fun();
}

// Driver Code
int main()
{
	// Namespace inside main
	using namespace n1;

	cout << x << endl;

	// Function Call
	fun();

	return 0;
}
