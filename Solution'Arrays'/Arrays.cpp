#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; // ���������� ��������� �������
	int arr[n] = {};
	//arr[2] = 123;
	cout << "������� �������� ������� (" << n << " ��):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//����� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//����� ������� �� ����� � �������� �������:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}