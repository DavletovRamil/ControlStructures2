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
	cout << "Введите число: "; cin >> number;
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
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число Не палиндром" << endl;
	}

#endif 

#ifdef SHOOTER


	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W')cout << "Вперед" << endl;
		else if (key == 's' || key == 'S')cout << "Назад" << endl;
		else if (key == 'a' || key == 'A')cout << "Влево" << endl;
		else if (key == 'd' || key == 'D')cout << "Вправо" << endl;
		else if (key == 32)cout << "Прыжок" << endl;
		else if (key == 13)cout << "Огонь" << endl;
		else cout << "Error: нет такого действия" << endl;
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
		case 'w': cout << "Вперед" << endl; break;
		case 'W': cout << "Вперед" << endl; break;
		case 's': cout << "Назад" << endl; break;
		case 'S': cout << "Назад" << endl; break;
		case 'a': cout << "Влево" << endl; break;
		case 'A': cout << "Влево" << endl; break;
		case 'd': cout << "Вправо" << endl; break;
		case 'D': cout << "Вправо" << endl; break;
		case '32': cout << "Прыжок" << endl; break;
		case '13': cout << "Огонь" << endl; break;
		default: cout << "Error: Нет такого действия" << endl; break;
		}



	} while (key != 27);

	}
#endif 

#ifdef HAPPY_TICKET
	int number;
	int reverse = 0;
	cout << "Введите число: "; cin >> number;
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
		cout << "Этот билет счастливый:" << endl;
	}
	else
	{
		cout << "Этот билет не счастливый:" << endl;
	}
#endif 

