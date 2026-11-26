#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
#include <conio.h>
#include "Header.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size, timertime; //размер поля и время таймера

	invitation(size, timertime); //ну и ещё переменные для выбора

	COORD cord2 = { 0, 6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord2);
	for (int i = 1; i <= 25; i++) {
		std::cout << '#';
	}std::cout << "поле короче" << std::endl;
	std::cout << size << " " << timertime << std::endl;

	auto pred = std::chrono::system_clock::now(); //читаем системное время в момент начала
	auto time = std::chrono::system_clock::now();

	int secondscount = 0;
	while (secondscount <= timertime * 60) {
		time = std::chrono::system_clock::now(); //каждый вызов сравниваем системное время с начальным(ЦЕЛЫЕ СЕКУНДЫ)
		if (time != pred && time - pred >= std::chrono::seconds(1)) {
			pred = time;
			timer(timertime);
			secondscount++;
		}
			
		if (_kbhit()) {
			char key = _getch();

			//остальные функции игры
		
			// if (условие победы) {
			//		функция_победы()
			//		return 0
			// }	
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	//std::cout << "Вы проиграли" << std::endl;
	//функция_проигрыша()
	//return 0
}