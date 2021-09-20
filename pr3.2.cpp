#include<iostream>

using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	//Method 1: branching in abbreviated form
	if (c < 0 && x != 0)
		F = (-a * x) - c;
	if (c > 0 && x == 0)
		F = (x - a) / (-c);
	if (!(c < 0 && x != 0) && !(c > 0 && x == 0))
		F = (b * x) / (c - a);
	
	cout << endl;
	cout << "1) F = " << F << endl;
	
	//Method 2: branching in abbreviated form
	if (c < 0 && x != 0)
		F = (-a * x) - c;
	else
		if (c > 0 && x == 0)
			F = (x - a) / (-c);
		else
			F = (b * x) / (c - a);
	cout << "2) F = " << F << endl;

	cin.get();
	return 0;

}
