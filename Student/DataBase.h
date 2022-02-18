#pragma once
#include<iostream>
#include<vector>
#include"Student.h"
#include<fstream>
#include<exception>
class DataBase
{
public:
	int Size()const;
	void inputData();
	void printToConsole();
	void loadFromFile(std::string file);
	void saveToFile(std::string file);
	Student& operator [] (const int index);
	void PushBack(const Student& student);
private:
	std::vector<Student>vec;
};
std::istream& operator >> (std::istream& ist, DataBase& data);
std::ostream& operator << (std::ostream& ost, DataBase& data);

