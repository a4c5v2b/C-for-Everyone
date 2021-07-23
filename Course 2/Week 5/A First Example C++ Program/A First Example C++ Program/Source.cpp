/* C for Everyone: Structured Programming
	Week 5: A First Example C++ Program */


#include <iostream>  // The library stored the io like <stdio.h> in C
using namespace::std;	// To encapsulate the std
const double m_to_k = 1.609; // Const means this variable's value cannot be changed in this program

inline double convert(int mi)  // keyword inline tells the compiler to optimize a function (replace macro #define in C)
{
	return (mi * m_to_k);
}

int main(void)
{
	int miles = 1;

	while (miles != 0)
	{
		cout << "Input distance in miles or 0 to terminate: ";
		cin >> miles;
		cout << "\nDistance is " << convert(miles) << " km." << endl;
		
	}
	cout << endl;
}

