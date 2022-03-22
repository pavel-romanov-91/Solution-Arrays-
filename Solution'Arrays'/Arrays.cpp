#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; // количество элементов массива
	int arr[n] = {};
	//arr[2] = 123;
	cout << "¬ведите элементы массива (" << n << " шт):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//вывод масива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//вывод массива на экран в обратном пор€дке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}