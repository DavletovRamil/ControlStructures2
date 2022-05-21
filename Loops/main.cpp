#include<iostream>
//для функции getch()
using namespace std;

//#define WHILE
//#define DO_WHILE
//#define TASK_PALINDROME
//#define TASK_SHOOTER

void main()
{

	setlocale(LC_ALL, "");
#if defined WHILE
	int n;  //количество итераций.
	int i = 0;  //Счетчик цикла.
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "Hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE
	char key; //Будет хранить Код клавишы
	do
	{
		key =_getch();  //ожидает нажатие клавиши, и возвращает ASCII - код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование типов char в int.
	} while (key != 27);

#endif

#ifdef TASK_PALINDROME
	int number;  // число, вводимое с клавиатуры.
	int reverse = 0; // обратная записьвведенного числа.
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse *= 10; //освобождаем место под младший разряд.
		reverse += buffer % 10; //получаем младший разряд числа, и сохраняем его.
		buffer /= 10; //убираем сохраненный разряд.
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число не палиндром" << endl;
	}
	

#endif

#if defined TASK_SHOOTER
	char key;
	cout << "Нажмите клавишу: ";
	do
	{
		key = _getch();
		cin >> key;
		cout << (int)key << "\t" << key << "vpered" << endl;
	} while (key!=27);
#endif

}