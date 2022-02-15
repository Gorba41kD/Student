#include "Student.h"

Student::Student()
{
}

void Student::SetSurname(std::string surname)
{
	m_surname = surname;
}
std::string Student::GetSurname()
{
	return m_surname;
}
////////////////////////////////////////
void Student::SetName(std::string name)
{
	m_name = name;
}
std::string Student::GetName()
{
	return m_name;
}
////////////////////////////////////////
void Student::SetAge(int age)
{
	m_age = age;
}
int Student::GetAge()
{
	return m_age;
}
////////////////////////////////////////
void Student::SetSpec(std::string spec)
{
	m_spec = spec;
}
std::string Student::GetSpec()
{
	return m_spec;
}
////////////////////////////////////////
void Student::SetHobby(std::string hobby)
{
	m_hobby = hobby;
}
std::string Student::GetHobby()
{
	return m_hobby;
}



bool Student::Empty()
{
	return m_surname.empty();
}

std::istream& operator>>(std::istream& ist, Student& student)
{
	ist >> student.m_surname >> student.m_name >> student.m_age >> student.m_spec >> student.m_hobby;
	return ist;
}

std::ostream& operator<<(std::ostream& ost, const Student& student)
{
	ost
		<< student.m_surname << " "
		<< student.m_name << " "
		<< student.m_age << " "
		<< student.m_spec << " "
		<< student.m_hobby << "\n";
	return ost;
}

