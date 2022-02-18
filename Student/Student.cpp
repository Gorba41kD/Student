#include "Student.h"

Student::Student()
{
}

Student::Student(std::string surname)
{
	m_surname = surname;
}

void Student::SetSurname(const std::string surname)
{
	m_surname = surname;
}
std::string Student::GetSurname()const
{
	return m_surname;
}
////////////////////////////////////////
void Student::SetName(const std::string name)
{
	m_name = name;
}
std::string Student::GetName()const
{
	return m_name;
}
////////////////////////////////////////
void Student::SetAge(const int age)
{
	m_age = age;
}
int Student::GetAge()const
{
	return m_age;
}
////////////////////////////////////////
void Student::SetSpec(const std::string spec)
{
	m_spec = spec;
}
std::string Student::GetSpec()const
{
	return m_spec;
}
////////////////////////////////////////
void Student::SetHobby(const std::string hobby)
{
	m_hobby = hobby;
}
std::string Student::GetHobby()const
{
	return m_hobby;
}



bool Student::Empty()
{
	return m_surname.empty();
}

std::ostream& operator<<(std::ostream& ost, const Student& student)
{
	ost << student.GetSurname() << " " << student.GetName() << " " << student.GetAge() << " " << student.GetSpec() << " " << student.GetHobby() << "\n";
	return ost;
}

std::istream& operator>>(std::istream& ist, Student& student)
{
	
	std::string temp;
	ist >> temp;
	student.SetSurname(temp);
	ist >> temp;
	student.SetName(temp);
	int age;
	ist >> age;
	student.SetAge(age);
	ist >> temp;
	student.SetSpec(temp);
	ist >> temp;
	student.SetHobby(temp);
	return ist;
}
