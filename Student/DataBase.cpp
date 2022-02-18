#include "DataBase.h"

int DataBase::Size() const
{
	return vec.size();
}

void DataBase::inputData()
{
	Student student;
	int size = 0;
	do
	{
		std::cout << "Enter a number of student(0<size=<2)\n";
		std::cin >> size;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cerr << "Oops,that input is invalid.Please try again\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
		}
	} while (size < 0 || size > 2);
	for (int i = 0; i < size; ++i)
	{
		std::cin >> student;
		vec.push_back(student);
	}
	std::cout << std::endl;
	for (int i = 0,j = 0;i < vec.size(); ++i)
	{
		std::cout << "INFO about " << ++j << " : " << std::endl;
		std::cout << vec[i] << std::endl;
	}
}

void DataBase::printToConsole()
{
	std::cout << *this;
}


void DataBase::loadFromFile(std::string file)
{
	
	std::ifstream fin;
	fin.open(file);
	while (!fin.eof())
	{
		Student student("");
		fin >> student;
		if (!student.Empty())
		{
			vec.push_back(student);
		}
		else break;
	}
	fin.close();
	
}

void DataBase::saveToFile(std::string file)
{
	std::ofstream fout;
	fout.open(file);
	if (fout.is_open())
	{
		std::cout << "Good :" << std::endl;
		fout << *this;
		fout.close();
	}
	else
	{
		std::cerr << "Bad :\n" << std::endl;
	}
}

Student& DataBase::operator[](const int index)
{
	return vec[index];
}

void DataBase::PushBack(const Student& student)
{
	vec.push_back(student);
}

std::istream& operator>>(std::istream& ist, DataBase& data)
{
	Student student;
	ist >> student;
	data.PushBack(student);
	return ist;
	/*while (ist.eof())
	{
		Student student;
		ist >> student;
		if (!student.Empty())data.PushBack(student);
		else break;
	}
	return ist;*/
}

std::ostream& operator<<(std::ostream& ost,DataBase& data)
{
	for (int i = 0; i < data.Size(); ++i)
	{
		ost << data[i];
	}
	return ost;
}


