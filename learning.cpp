#include "iostream"
using namespace std;
int main() {
	int a, b, c,d ,e ;
	float total , average;
	cout << "number1=";
	cin >> a;
	cout << "number2=";
	cin >> b;
	cout << "number 3 =";
	cin >> c;
	cout << "number 4=";
	cin >> d;
	cout << "number 5 =";
	cin >> e;
	total = a + b + c + d + e;
	average = total / 5;
	cout << "the average is =" << average;
	return 0;
}
