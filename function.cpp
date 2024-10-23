#include <iostream>
#include <string>
#include <Windows.h>

//Шаблонная функция

//Строки


//template <typename Any>
//int Sum(Any a, int b)
//{
//	return a + b;
//}


//задание 1
template <typename Any>
Any ArithmeticMean(int size, Any arr[])
{
	Any value = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
		value += arr[i];
	}
	std::cout << "\n\n";
	std::cout << "Среднее арифметическое = " << value / size;
	return value / size;
}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*std::cout<<Sum(1, 9.6);*/


	const int size = 5;
	int arr[size]{ 1, 2, 3, 4, 5 };
	double arr1[size]{ 1.9, 2.8, 3.7, 4.6, 5.5 };
	float arr2[size]{ 12.8, 9.88, 67.55, 44.79, 34.34 };


	ArithmeticMean(size, arr);
	std::cout << "\n\n";
	ArithmeticMean(size, arr1);
	std::cout << "\n\n";
	ArithmeticMean(size, arr2);
	std::cout << "\n\n";

	std::string name;
	int bb;
	std::getline(std::cin, name, '\n');
	std::cout << name << "\n";

	std::cin >> bb;
	std::cout << bb << "\n";
	std::cin.ignore(32000, '\n');	// очищени буфера cin для того чтобы использовать его снова

	std::getline(std::cin, name, '\n');
	std::cout << name << "\n";




	// задание 2
	std::string password;
	std::string login;
	password = "123456NIGGA1234";
	login = "hell world yea!";
	std::string password1;
	std::string login1;

	std::cout << "Введите пароль: ";
	std::getline(std::cin, password1, '\n');

	if (password == password1)
	{
		std::cout << "Пароль введен правильно" << "\n";
	}
	else
	{
		std::cout << "Пароль введен неправильно" << "\n";
	}



	if (password1.size()> 15 || login1.size() > 15)
	{
		std::cout << "Ошибка ввода символов, больше 15\n\n";
	}



	std::cout << "Введите логин: ";
	std::getline(std::cin, login1, '\n');

	if (login == login1)
	{
		std::cout << "Логин введен правильно" << "\n";
	}
	else
	{
		std::cout << "Логин введен неправильно" << "\n";
	}
}