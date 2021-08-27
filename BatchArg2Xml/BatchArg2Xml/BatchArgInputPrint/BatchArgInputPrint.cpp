// BatchArgInputPrint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;
int main(int argc, char *argv[])
{
	string arg_batch;
	vector<string> arg;

	// check option
	try
	{
		if (strcmp(argv[1], "batch")) {
			throw runtime_error("Please Enter Correct Options");
		}
		else { /* do nothing */ }
	}
	catch (const std::exception& e) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // set console text color
		cout << e.what() << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // recover console text color
	}

	for (int i = 0; i < argc; ++i)
	{
		cout << "argv[" << i << "]   :" << argv[i] << "\n";
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
