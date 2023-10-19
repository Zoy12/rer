#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

double proverka(string _n1)
{
	while (true)
	{
		try
		{
			stod(_n1);
			break;
		}
		catch (exception&)
		{
			cout << "Ошибка!!!\n";
			cin >> _n1;
		}
	}
	return stod(_n1);
}
string proverka_act(string _act)
{
	bool f1 = true;
	
	while (true)
	{
		if (_act == "+" || _act == "-" || _act == "*" || _act == "/")
		{
			break;
		}
		else
		{
			cout << "ошибка!!!\n";
			cin >> _act;
			continue;

		}
	}
	return _act;
}
double results(double _n1,double _n2, string _act)
{
	if(_act == "+")
	{
		_n1 = _n1 + _n2;
		cout << "Ответ: " << _n1 << endl;
	} 
	else if (_act == "-")
	{
		_n1 = _n1 - _n2;
		cout << "Ответ: " << _n1 << endl;
	}
	else if (_act == "*")
	{
		_n1 = _n1 * _n2;
		cout << "Ответ: " << _n1 << endl;
	}
	else if (_act == "/")
	{
		if (_n2 == 0)
		{
			cout << "Делить на ноль нельзя\n";
			
		}
		else
		{
			_n1 = _n1 / _n2;
			cout << "Ответ: " << _n1 << endl;
		}
	}
	return _n1;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string n1, n2;
	double _n1, _n2;
	string act;
	while (true)
	{
		cout << "Введите первое число:\n";
		cin >> n1;
		_n1 = proverka(n1);
		cout << "Введите дейтсвие:\n";
		cin >> act;
		act = proverka_act(act);
		cout << "Введите второе число:\n";
		cin >> n2;
		_n2 = proverka(n2);
		results(_n1, _n2, act);
		
	}
}
