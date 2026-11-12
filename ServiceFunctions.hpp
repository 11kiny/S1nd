#ifndef _SERVICE_FUNCTIONCS_HPP_
#define _SERVICE_FUNCTIONCS_HPP_

#include <string>
#include <iostream>
#include <Windows.h>
#include <iomanip>

void Getline(std::wstring& str);

inline void Err()
{
	std::wcout << L"Некорректный ввод\n\n";
	Sleep(1500);
}

template<typename ArrType>
void FillArray(ArrType* dynamicArr, ArrType* staticArr, size_t commonSize)
{
	for (size_t i = 0; i < commonSize; i++)
	{
		dynamicArr[i] = staticArr[i];
	}
}

#endif // !_SERVICE_FUNCTIONCS_HPP_