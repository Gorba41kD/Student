#include "DataBase.h"

int DataBase::Size() const
{
	return vec.size();
}

void DataBase::inputData()
{
	Student student;
	std::string surname;
	std::string name;
	int age = 0;
	std::string spec;
	std::string hobby;
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
		vec.push_back(student);
		std::cout << "Enter surname :\n";
		std::cin >> surname;
		std::cout << "\n";
		std::cout << "Enter name :\n";
		std::cin >> name;
		std::cout << "\n";
		std::cout << "Enter age :\n";
		std::cin >> age;
		std::cout << "\n";
		std::cout << "Enter spec :\n";
		std::cin >> spec;
		std::cout << "\n";
		std::cout << "Enter hobby :\n";
		std::cin >> hobby;
		std::cout << "\n";
		vec.at(i).SetSurname(surname);
		vec.at(i).SetName(name);
		vec.at(i).SetAge(age);
		vec.at(i).SetSpec(spec);
		vec.at(i).SetHobby(hobby);
	}
	for (int i = 0,j = 0;i < vec.size(); ++i)
	{
		std::cout << "INFO about " << ++j << " : " << std::endl;
		std::cout << vec[i] << std::endl;
	}
	
}

void DataBase::saveToFile(std::string file)
{
	std::ofstream fout;
	fout.open(file);
	if (fout.is_open())
	{
		std::cout << "Good :\n" << std::endl;
		for (int i = 0; i < vec.size(); ++i)
		{
			fout << vec[i];
		}
		fout.close();
	}
	else
	{
		std::cerr << "Bad :\n" << std::endl;
	}

}

void DataBase::loadFromFile(std::string file)
{
	Student student;
	std::ifstream fin;
	fin.open(file);
	while (!fin.eof())
	{
		fin.ignore(32767, '\n');
		fin >> student;
		if(!student.Empty())
		vec.push_back(student);
	}
	fin.close();
	
}

void DataBase::printToConsole()
{
	for (int i = 0; i < vec.size(); ++i)
	{
		std::cout << vec[i];
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

std::istream& operator>>(std::istream& ist, DataBase& obj)
{
	Student student;
	while (ist >> student)obj.vec.push_back(student);
	return ist;
}

std::ostream& operator<<(std::ostream& ost, const DataBase& obj)
{
	for (int i = 0; i < obj.vec.size(); ++i)
	{
		ost << obj.vec[i] << " ";
	}
	ost << std::endl;
	return ost;
}
