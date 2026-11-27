#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cstdlib>
#include "Header.h"

/*to do list:
	1)Выбор модификаторов?
	2)...
*/

int invitation(int& size, int& time) {
	int klavisha;

	std::cout << "Добро пожаловать в удивительный консольный лабиринт!\n" << std::endl;

	std::cout << "Выберите размер поля:" << std::endl;
	std::cout << "[1]10x10, [2]15x15, [3]25x25, []..." << std::endl;
vvod1:
	klavisha = _getch();
	switch (klavisha)
	{
	case '1': {
		size = 10;
		std::cout << "Выбран размер:" << size << 'x' << size << '\n' << std::endl;
		break;
	}
	case '2': {
		size = 15;
		std::cout << "Выбран размер:" << size << 'x' << size << '\n' << std::endl;
		break;
	}
	case '3': {
		size = 25;
		std::cout << "Выбран размер:" << size << 'x' << size << '\n' << std::endl;
		break;
	}
	default: {
		std::cout << "Введён некорректный символ, попробуйте ещё раз" << std::endl;
		goto vvod1;
	}
	}

	std::cout << "Выберите время таймера:" << std::endl; //звучит странно
	std::cout << "[1]1 минута, [2]3 минуты, [3]5 минут, [4]10 минут, []..." << std::endl;
vvod2:
	klavisha = _getch();
	switch (klavisha)
	{
	case '1': {
		time = 1;
		std::cout << "Выбрано время:" << time << " минут" << '\n' << std::endl;
		break;
	}
	case '2': {
		time = 3;
		std::cout << "Выбрано время:" << time << " минут" << '\n' << std::endl;
		break;
	}
	case '3': {
		time = 5;
		std::cout << "Выбрано время:" << time << " минут" << '\n' << std::endl;
		break;
	}
	case '4': {
		time = 10;
		std::cout << "Выбрано время:" << time << " минут" << '\n' << std::endl;
		break;
	}
	default: {
		std::cout << "Введён некорректный символ, попробуйте ещё раз" << std::endl;
		goto vvod2;
	}
	}
	system("cls");
	return 0;
}