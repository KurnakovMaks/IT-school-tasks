#pragma once
#include <cstring>

class Str
{
	char* pData;			// Здесь будет адрес данных строки. 
	// Данные недоступны вне объекта!
public:
	Str(const char* p) {			// Конструктор
		int len = strlen(p);		// определили длину
		pData = new char[len + 1];	// выделили память
		strcpy_s(pData, len + 1, p);	// скопировали строку в память объекта
	}
	~Str() {
		delete[] pData;
	}
	Str(const Str& s) {				// Конструктор копирования
		int len = strlen(s.pData);		// определили длину
		pData = new char[len + 1];		// выделили память
		strcpy_s(pData, len + 1, s.pData);
	}
	Str& operator=(const Str& s) {
		if (this != &s) {
			delete[] pData;
			int len = strlen(s.pData);
			pData = new char[len + 1];
			strcpy_s(pData, len + 1, s.pData);
		}
		return *this;
	}
	operator const char* () { return pData; }
};