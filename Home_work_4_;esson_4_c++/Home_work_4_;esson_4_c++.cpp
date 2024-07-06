#include <iostream>

using namespace std;

int main()
{
	cout << "============================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";
	unsigned int gb;
	const double mg = 760;
	cout << "\tEnter gb :";
	cin >> gb;
	unsigned answer_2 = (gb * 1024) / mg;
	cout << "\tAnswer: " << answer_2;
	cout << "\n\n\n";
	cout << "============================================";
	cout << "\n\n";
	cout << "Tap - 3";
	cout << "\n\n\n\n";
	unsigned int number;
	unsigned int children_pass;
	unsigned int children_fail;
	cout << "\tEnter the number of children :";
	cin >> number;
	cout << "\tEnter the number of children who passed the exam :";
	cin >> children_pass;
	cout << "\tEnter the number of children who failed the exam :";
	cin >> children_fail;
	unsigned int pass_children = (children_fail / number) * 100;
	unsigned int fail_children = (children_pass / number) * 100;
	cout << "\n\tPass the exam: " << children_pass; cout << "%";
	cout << "\n\tFail the exam: " << children_fail; cout << "%";
	cout << "\n\n\n";
	cout << "============================================";
	cout << "\n\n";
	cout << "Tap - 4";
	cout << "\n\n\n\n";
	unsigned int secound;
	cout << "\tEnter secound :";
	cin >> secound;
	unsigned int secound_ = 86400 - secound;
	unsigned int hour = secound_ / 3600;
	unsigned int _secound_ = secound_ % 3600;
	unsigned int minute = _secound_ / 60;
	unsigned int secound__ = _secound_ % 60;
	cout << "\n\tHour: " << hour;
	cout << "\n\tMinute: " << minute;
	cout << "\n\tSecound: " << secound__;
	cout << "\n\n\n";
	cout << "============================================";
	cout << "\n\n";
	cout << "Tap - 5";
	cout << "\n\n\n\n";
	unsigned int gigabayt;
	const double hecm = 1.44f;
	cout << "\tEnter gigabayt: ";
	cin >> gigabayt;
	unsigned int answer_5 = (gigabayt * 1024) / hecm;
	cout << "\tAnswer: " << answer_5;
	cout << "\n\n\n";
	cout << "============================================";
	cout << "\n\n";
	cout << "Tap - 6";
	cout << "\n\n\n\n";
	float number_1;
	cout << "\tEnter number :";
	cin >> number_1;
	float answer_6 = floor(number_1 * 100 + 0.5) / 100;
	cout << "\tAnswer: " << answer_6;
	cout << "\n\n\n";
	cout << "============================================";
}




