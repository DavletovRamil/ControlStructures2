#include<iostream>
//��� ������� getch()
using namespace std;

//#define WHILE
//#define DO_WHILE
//#define TASK_PALINDROME
//#define TASK_SHOOTER

void main()
{

	setlocale(LC_ALL, "");
#if defined WHILE
	int n;  //���������� ��������.
	int i = 0;  //������� �����.
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i << "Hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE
	char key; //����� ������� ��� �������
	do
	{
		key =_getch();  //������� ������� �������, � ���������� ASCII - ��� ������� �������
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ����� char � int.
	} while (key != 27);

#endif

#ifdef TASK_PALINDROME
	int number;  // �����, �������� � ����������.
	int reverse = 0; // �������� ���������������� �����.
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse *= 10; //����������� ����� ��� ������� ������.
		reverse += buffer % 10; //�������� ������� ������ �����, � ��������� ���.
		buffer /= 10; //������� ����������� ������.
	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}
	

#endif

#if defined TASK_SHOOTER
	char key;
	cout << "������� �������: ";
	do
	{
		key = _getch();
		cin >> key;
		cout << (int)key << "\t" << key << "vpered" << endl;
	} while (key!=27);
#endif

}