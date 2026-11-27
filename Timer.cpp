#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
#include "Header.h"

int timer(int& T) {
	const COORD cord = { 0, 0 }; //позиция с которой рисуются цифры

	char num0[15] = {
		'#', '#', '#',
		'#', ' ', '#',
		'#', ' ', '#',
		'#', ' ', '#',
		'#', '#', '#'
	};
	char num1[15] = {
		' ', ' ', '#',
		' ', ' ', '#',
		' ', ' ', '#',
		' ', ' ', '#',
		' ', ' ', '#'
	};
	char num2[15] = {
		'#', '#', '#',
		' ', ' ', '#',
		'#', '#', '#',
		'#', ' ', ' ',
		'#', '#', '#'
	};
	char num3[15] = {
		'#', '#', '#',
		' ', ' ', '#',
		' ', '#', '#',
		' ', ' ', '#',
		'#', '#', '#'
	};
	char num4[15] = {
		'#', ' ', '#',
		'#', ' ', '#',
		'#', '#', '#',
		' ', ' ', '#',
		' ', ' ', '#'
	};
	char num5[15] = {
		'#', '#', '#',
		'#', ' ', ' ',
		'#', '#', '#',
		' ', ' ', '#',
		'#', '#', '#'
	};
	char num6[15] = {
		'#', '#', '#',
		'#', ' ', ' ',
		'#', '#', '#',
		'#', ' ', '#',
		'#', '#', '#'
	};
	char num7[15] = {
		'#', '#', '#',
		' ', ' ', '#',
		' ', '#', ' ',
		' ', '#', ' ',
		' ', '#', ' '
	};
	char num8[15] = {
		'#', '#', '#',
		'#', ' ', '#',
		'#', '#', '#',
		'#', ' ', '#',
		'#', '#', '#'
	};
	char num9[15] = {
		'#', '#', '#',
		'#', ' ', '#',
		'#', '#', '#',
		' ', ' ', '#',
		'#', '#', '#'
	};
	char divide[15] = {
		' ', ' ', ' ',
		' ', '#', ' ',
		' ', ' ', ' ',
		' ', '#', ' ',
		' ', ' ', ' '
	};
	char* numbers[10] = { num0,num1,num2,num3,num4,num5,num6,num7,num8,num9 };

	static int Min = 0, Sec = 0, tenMin = 0, tenSec = 0;;

	int time = 0;
	char* NowTime[5];
	NowTime[2] = divide;
	//while (time <= T * 60) {
	NowTime[0] = numbers[tenMin]; NowTime[1] = numbers[Min]; NowTime[3] = numbers[tenSec]; NowTime[4] = numbers[Sec];
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);

	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			for (int k = 0; k < 3; k++) {
				std::cout << NowTime[i][j * 3 + k] << std::flush;
			}
			std::cout << " ";
		}
		std::cout << "\n";
	}

	Sec++;
	if (Sec == 10) { Sec = 0; tenSec++; }
	if (tenSec == 6) { tenSec = 0; Min++; }
	if (Min == 10) { Min = 0; tenMin++; }
	

	time++;
	
	return 0;
}