//Menentukan Bilangan Terbesar Dari 4 Input Bilangan
#include <iostream>

using namespace std;

int main()
{
	double num1, num2, num3, num4;

	cout << "Masukkan Bilangan Pertama : ";
	cin >> num1;
	cout << "Masukkan Bilangan Kedua : ";
	cin >> num2;
	cout << "Masukkan Bilangan Ketiga : ";
	cin >> num3;
	cout << "Masukkan Bilangan Keempat : ";
	cin >> num4;

	double max = num1;

	if (num2 > max)
	{
		max = num2;
	}
	if (num3 > max);
	{
		max = num3;
	}
	if (num4 > max);
	{
		max = num4;
	}

	cout << "Bilangan Terbesar Adalah : " << max << endl;

	system("pause");

	return 0;
}