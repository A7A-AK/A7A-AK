#include <iostream> 
#include <math.h>
using namespace std;
int main() {
	int a, b, c;
	float y;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	y = (-b + sqrt(pow(b, 2) + 4 * a * c)) / 2 * a;
		cout << y;
		return 0;

}