// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	bool StopPorg = true;
	bool ynProg = true;
	char yn;
	while (StopPorg == true)
	{
		std::cout << "Введите число месяца: ";
		int monthNum;
		std::cin >> monthNum;
		if (monthNum == 11 || monthNum == 12 || monthNum == 1)
		{
			std::cout << "Зима" << std::endl << "Хотете повторить? (y/n): ";
			std::cin >> yn;
			if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
			{
				ynProg = false;
			}
			while (ynProg == true)
			{
				std::cout << "Хотите повторить? (y/n): ";
				std::cin >> yn;
				if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
				{
					ynProg = false;
				}
			}
			if (yn == 'n')
			{
				StopPorg = false;
			}
		}
		else if (monthNum == 2 || monthNum == 3 || monthNum == 4)
		{
			std::cout << "Весна" << std::endl << "Хотете повторить? (y/n): ";
			std::cin >> yn;
			if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
			{
				ynProg = false;
			}
			while (ynProg == true)
			{
				std::cout << "Хотите повторить? (y/n): ";
				std::cin >> yn;
				if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
				{
					ynProg = false;
				}
			}
			if (yn == 'n')
			{
				StopPorg = false;
			}
		}
		else if (monthNum == 5 || monthNum == 6 || monthNum == 7)
		{
			std::cout << "Лето" << std::endl << "Хотете повторить? (y/n): ";
			std::cin >> yn;
			if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
			{
				ynProg = false;
			}
			while (ynProg == true)
			{
				std::cout << "Хотите повторить? (y/n): ";
				std::cin >> yn;
				if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
				{
					ynProg = false;
				}
			}
			if (yn == 'n')
			{
				StopPorg = false;
			}
		}
		else if (monthNum == 8 || monthNum == 9 || monthNum == 10)
		{
			std::cout << "Осень" << std::endl << "Хотете повторить? (y/n): ";
			std::cin >> yn;
			if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
			{
				ynProg = false;
			}
			while (ynProg == true)
			{
				std::cout << "Хотите повторить? (y/n): ";
				std::cin >> yn;
				if (yn == 'y' || yn == 'n' || yn == 'Y' || yn == 'N')
				{
					ynProg = false;
				}
			}
			if (yn == 'n')
			{
				StopPorg = false;
			}
		}
		else
		{
			std::cout << "Нет такого номера месяца!" << std::endl;
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
