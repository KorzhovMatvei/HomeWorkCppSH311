#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	/*int a, b, c, d;
	cout << "Введите 4 числа: ";
	cin >> a >> b >> c >> d;
	if (a < b)a = b;
	if (a < c)a = c;
	if (a < d)a = d;
	cout << a;*/

	/*int a2 = 2, b2 = 5, n2 = 8;
	for (int i = 0, count = a2; i < n2; i++) {
		cout << count++ << " ";
		if (count > b2)count = a2;
	}*/

	/*float max = 4;
	for (float i = 0.25; i <= max; i += 0.25) {
		cout << i << " ";
	}*/

	/*int i = 1, x;
	double sum = 0;
	do
	{
		cin >> x;
		sum += x;
		i++;
	} while (x != 0);
	cout << sum / i;*/

	char s;
	cout << "введите букву английского алфавит: ";
	cin >> s;
	cout << (s >= 'A' && s <= 'Z');
	cout << (s >= 'a' && s <= 'z');
	

	

	//int min51,max51, min52, max52;
	//cin >> min51 >> max51 >> min52 >> max52;
	//if (min51 > max51)swap(min51, max51);
	//if (min52 > max52)swap(min52, max52);
	//if (min51 > min52)swap(min51, min52);
	//if (max51 > max52)swap(max51, max52);
	//for (int i = min51; i < min52 && i <= max51; i++)cout << i << " ";
	//for (int i = min52; i <= max52; i++) {
	//	if (i > max51)
	//		cout << i << " ";
	//}

	/*int a6, b6, n6;
	cin >> a6>> b6>> n6;
	int count = 0;
	for (int i = a6; i <= b6; i++) {
		if (i % n6 == 0)count++;
	}
	cout << count;*/
}