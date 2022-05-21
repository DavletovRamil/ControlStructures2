#include<iostream>
#include<conio.h>
using namespace std;

//#define PALINDROME
//#define SHOOTER
#define SHOOTER_2_VARIANT
//#define HAPPY_TICKET

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME
	int number;
	int reverse = 0;
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number <<endl;
	cout << reverse <<endl;
	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}

#endif 

#ifdef SHOOTER


	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W')cout << "������" << endl;
		else if (key == 's' || key == 'S')cout << "�����" << endl;
		else if (key == 'a' || key == 'A')cout << "�����" << endl;
		else if (key == 'd' || key == 'D')cout << "������" << endl;
		else if (key == 32)cout << "������" << endl;
		else if (key == 13)cout << "�����" << endl;
		else cout << "Error: ��� ������ ��������" << endl;
	} while (key != 27);
#endif

#ifdef SHOOTER_2_VARIANT
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w': cout << "������" << endl; break;
		case 'W': cout << "������" << endl; break;
		case 's': cout << "�����" << endl; break;
		case 'S': cout << "�����" << endl; break;
		case 'a': cout << "�����" << endl; break;
		case 'A': cout << "�����" << endl; break;
		case 'd': cout << "������" << endl; break;
		case 'D': cout << "������" << endl; break;
		case '32': cout << "������" << endl; break;
		case '13': cout << "�����" << endl; break;
		default: cout << "Error: ��� ������ ��������" << endl; break;
		}



	} while (key != 27);

	}
#endif 

#ifdef HAPPY_TICKET
	int number;
	int reverse = 0;
	cout << "������� �����: "; cin >> number;
	int buffer;
	while (buffer>0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "���� ����� ����������:" << endl;
	}
	else
	{
		cout << "���� ����� �� ����������:" << endl;
	}
#endif 

