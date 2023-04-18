#pragma once

#include <iostream>
#include <string>

class Person
{
private:
	//attributes which are also called properties.

	std::string m_name = ""; //Member variable AKA field. (usually private inside a class)
	int m_age = 0;

public:
	//Constructors and Destructor
	Person() { }

	Person(const std:: string name, const int age)
	{
		SetName(name);
		SetAge(age);
	}

	~Person() { std::cout << "Something\n"; } //cleanup allocated resources


	//behavior which are also called methods.

	//creating a get and a set in C++.
	virtual std::string GetName() const //const means it cannot change, cannot mutate
	{ return m_name; }; 
	virtual int GetAge() const { return m_age; }; //virtual, the ability to edit the method.

	virtual void SetName(const std::string name) { m_name = name; };
	virtual void SetAge(const int age) { m_age = age; };

	virtual void Print()
	{
		std::cout << GetName() << " " << GetAge << " oof\n";
	}

	//abstract , or pure virtual meaning you MUST change this.
	virtual void DoSomething() const = 0;

	//Static Method
	static int GetCount() { return 01; }
};

