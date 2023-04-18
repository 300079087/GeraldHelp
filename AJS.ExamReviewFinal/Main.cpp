//There will be a pure virtual function on the test. Watchout for this.



// Exam Review
// Austin Steffes

#include <iostream>
#include <conio.h>

//include needed to use class.
#include "Person.h"
#include "Student.h"

using namespace std;

int main()
{
	//stack (5)
	//heap (2)

	Person p1; //s1
	Person p2("Yoshi", 20); //s2
	Person p4, p5; //s3/4

	Person* p6 = new Person(); //h1
	Person* p7 = p6; // just a pointer pointing at a different value
	Person* p8 = new Person("Falls", 21); //h2
	Person* p9, p10; //This line is dumb af, So p9 is a pointer, BUT p10 is NOT a pointer. 
	Person* p11 = &p4; //so a pointer pointing to the stack.


	Student s1("Uch");
	Student* s2 = new Student("Jia");
	s2->Register(2); //when you have a pointer its the arrow, but the . will correct itself.
	s2->Print();

	(void)_getch();
	return 0;
}
