#include <utility>
#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
#include <conio.h>
#include "Header.h"
using namespace std;
pair <int, int> pos = { 1,1 };//переменная хранит позицию игрока(строка, столбец)
//Это главный файл, в нем будут вызываться все другие модули
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size, timertime; //размер поля и время таймера

	invitation(size, timertime); //ну и ещё переменные для выбора

	COORD cord2 = { 0, 6 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord2);
	for (int i = 1; i <= 25; i++) {
		cout << '#';
	}cout << "поле короче" << std::endl;
	cout << size << " " << timertime << std::endl;

	auto pred = std::chrono::system_clock::now(); //читаем системное время в момент начала
	auto time = std::chrono::system_clock::now();
	
	int secondscount = 0;
	timer(secondscount);


	while(true)
	{ 
	if ( secondscount<timertime * 60) {
		time = std::chrono::system_clock::now(); //каждый вызов сравниваем системное время с начальным(ЦЕЛЫЕ СЕКУНДЫ)
		if (time != pred && time - pred >= std::chrono::seconds(1)) {
			pred = time;
			timer(timertime);
			secondscount++;
		}



		if (_kbhit()) {//Начало функции алины(функция должна содержать этот if)
			char key = _getch();//в key сохраняется символ
			
		
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	}
	//функция_проигрыша()
}