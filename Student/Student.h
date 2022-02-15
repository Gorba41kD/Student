#pragma once
#include<iostream>
#include<string>
class Student
{
public:
	Student();
	void SetSurname(std::string surname);
	std::string GetSurname();
	////////////////////////////////////////
	void SetName(std::string name);
	std::string GetName();
	////////////////////////////////////////
	void SetAge(int age);
	int GetAge();
	////////////////////////////////////////
	void SetSpec(std::string spec);
	std::string GetSpec();
	////////////////////////////////////////
	void SetHobby(std::string hobby);
	std::string GetHobby();
	
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

