#include "Storage.hpp"

size_t sizeSt = 0;

size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;

bool IsStorageCreated = false;

void CreateStorage(int mode)
{
	if (mode == 0 && !IsStorageCreated)
	{
		const size_t staticSize = 11;

		size_t idArrStatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10,11 };
		std::wstring nameArrStatic[staticSize]
		{
			L"Слойка с картофелем и грибами", L"Слойка с абрикосом",
			L"Пирожок с мясом", L"Пончик с сахарной пудрой",
			L"Круассан", L"Пирожок с картофелем и грибами",
			L"Пышки с сахарной пудрой", L"Чебурек с картофелем",
			L"Чебурек с мясом", L"Слойка с вишней", L"Слойка с сыром"
		};
		size_t countArrStatic[staticSize]{ 10,11,22,12,15,24,18,19,20,13,16 };
		double priceArrStatic[staticSize]{ 65.5,59.7,66.6,46.5,74.4,55.3,60.0,69.9,79.9,67.8,70.1 };

		sizeSt = staticSize;
		idArr = new size_t(sizeSt);
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArr, idArrStatic, sizeSt);
		FillArray(nameArr, nameArrStatic, sizeSt);
		FillArray(countArr, countArrStatic, sizeSt);
		FillArray(priceArr, priceArrStatic, sizeSt);

		IsStorageCreated = true;
	}
	else if (mode == 1)
	{

	}
	else
	{
		std::wcout << L"Склад уже создан\n\n";
	}
}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t"
			<< L"Кол-во\t" << L"Цена\n\n";
		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i];
		}
		std::wcout << L"\n\n";
		system("pause");
	}
}

void AddProduct()
{
	std::wstring chooseId, chooseCount, choose;
	int id = 0;
	size_t count = 0;
	while (true) //ЗАКОНЧИЛИ ТУТ
	{

	}
}
