#pragma once

#include "Person.h"
#include <vector>
class Student : public Person
{

private:

	float m_gpa = 4;
	std::vector<int> m_courseIDs;

public:

	Student() {}

	Student(const std::string name)
	{
		SetName(name);
	}

	//creating get set for gpa.
	virtual float GetGPA() const { return m_gpa; }

	virtual void SetGPA(const float gpa) { m_gpa = gpa; }

	virtual void Register(const int courseID)
	{
		m_courseIDs.push_back(courseID);
	}

	virtual void Print() const
	{
		std::cout << GetName() << " " << GetGPA();

		for (int cousreID : m_courseIDs)
		{
			std::cout << "\n" << cousreID;
		}
	}

	virtual void DoSomething() const { std::cout << "Chowa"; }
};

