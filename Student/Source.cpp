#include<iostream>
#include"Student.h"
#include"DataBase.h"
#include"exception"
#include"fstream"
#include<string>
int main()
{
	setlocale(LC_ALL, "RUS");
	DataBase database;
	database.inputData();
	database.saveToFile("File.txt");
	DataBase secondDataBase;
	try
	{
		secondDataBase.loadFromFile("File.txt");
		secondDataBase.printToConsole();
	}
	catch (const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
		std::cerr << "File open error" << std::endl;
	}
	catch (...)
	{
		std::cerr << "catch(...)";
	}
	return 0;
}