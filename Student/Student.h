#pragma once
#include<iostream>
#include<string>
class Student
{
public:
	Student();
	void SetSurname(const std::string surname);
	std::string GetSurname()const;
	////////////////////////////////////////
	void SetName(const std::string name);
	std::string GetName()const;
	////////////////////////////////////////
	void SetAge(const int age);
	int GetAge()const;
	////////////////////////////////////////
	void SetSpec(const std::string spec);
	std::string GetSpec()const;
	////////////////////////////////////////
	void SetHobby(const std::string hobby);
	std::string GetHobby()const;
	
	bool Empty();
private:
	std::string m_surname;
	std::string m_name;
	int m_age = 0;
	std::string m_spec;
	std::string m_hobby;
	friend std::istream& operator >> (std::istream& ist, Student& student);
	friend std::ostream& operator << (std::ostream& ost, const Student& student);
};

