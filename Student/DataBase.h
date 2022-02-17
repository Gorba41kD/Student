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
	void loadFromFile(std::string file);
	Student& operator [] (const int index);
	void PushBack(const Student& student);
private:
	std::vector<Student>vec;
};
std::istream& operator >> (std::istream& ist, DataBase& data);
std::ostream& operator << (std::ostream& ost, DataBase& data);
void printToConsole(std::ostream& ost, DataBase& data);
std::ostream& Func(std::ostream& ost,DataBase& data);
void saveToFile(std::string file,DataBase& data);

