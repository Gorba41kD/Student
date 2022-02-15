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
	void saveToFile(std::string file);
	void loadFromFile(std::string file);
	void printToConsole();
	Student& operator[](const int index);
	void PushBack(const Student& student);
private:
	std::vector<Student>vec;
	friend std::istream& operator >> (std::istream& ist, DataBase& obj);
	friend std::ostream& operator << (std::ostream& ost, const DataBase& obj);
};

