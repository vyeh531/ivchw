/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #3	: Class Constructors, Inheritance & Init
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 02/12/2021
*********************************************************/
#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"
#include <string>
/**********************************************************
*
* Class Constructors, Inheritance & Init 
*								- Composition & Inheritance
*_________________________________________________________
* This program uses composition and inheritance way to 
* deal with different departments of employees, and then 
* print the information out
* 
*_________________________________________________________
* INPUT:
* information of the below variables
* E1: First person from the company (Example for Employee)
* P1: Second person from the company (Example for Programmer)
* S1: Third person from the company (Example for Software Architect)
*
* OUTPUT:
* The information of E1, P1, and S1
***********************************************************/
int main()
{
	string name2 = "Stephan Colbert";		// Input - Employee2's name
	string ID2 = "12346";					// Input - Employee2's ID
	string phoneNum2 = "310-555-5555";		// Input - Employee2's phone number		
	int age2 = 51;							// Input - Employee2's age
	string gender2 = "M";					// Input - Employee2's gender
	string jobTitle2 = "Comedian";			// Input - Employee2's job title
	string salary2 = "70,123";				// Input - Employee2's salary
	int month2 = 5;							// Input - Employee2's hire month
	int day2 = 8;							// Input - Employee2's hire day
	int year2 = 2015;						// Input - Employee2's hire year

	string name3 = "James Corden";			// Input - Employee3's name
	string ID3 = "87654";					// Input - Employee3's ID
	string phoneNum3 = "703-703-1234";		// Input - Employee3's phone number
	int age3 = 37;							// Input - Employee3's age
	string gender3 = "M";					// Input - Employee3's gender
	string jobTitle3 = "Talk Show Host";	// Input - Employee3's job title
	string salary3 = "90,000";				// Input - Employee3's salary
	int month3 = 12;						// Input - Employee3's hire month
	int day3 = 15;							// Input - Employee3's hire day
	int year3 = 2014;						// Input - Employee3's hire year

	string name4 = "Sam Software";			// Input - Programmer2's name
	string ID4 = "54321";					// Input - Programmer2's ID
	string phoneNum4 = "819-123-4567";		// Input - Programmer2's phone number
	int age4 = 21;							// Input - Programmer2's age
	string gender4 = "M";					// Input - Programmer2's gender
	string jobTitle4 = "Programmer";		// Input - Programmer2's job title
	string salary4 = "223,000";				// Input - Programmer2's salary
	int month4 = 12;						// Input - Programmer2's hire month
	int day4 = 24;							// Input - Programmer2's hire day
	int year4 = 2011;						// Input - Programmer2's hire year
	int departmentNum4 = 5432122;			// Input - Programmer2's department number
	string supervisorName4 = "Joe Boss";	// Input - Programmer2's supervisor's name
	int raisePercent4 = 4;					// Input - Programmer2's Percentage of last salary increase
	bool cIden4 = true;						// Input - Programmer2's C++ Knowledge
	bool javaIden4 = false;					// Input - Programmer2's Java Knowledge

	string name5 = "Alex Arch";				// Input - Software Architect2's name
	string ID5 = "88888";					// Input - Software Architect2's ID
	string phoneNum5 = "819-123-4444";		// Input - Software Architect2's phone number
	int age5 = 31;							// Input - Software Architect2's age
	string gender5 = "M";					// Input - Software Architect2's gender
	string jobTitle5 = "Architect";			// Input - Software Architect2's job title
	string salary5 = "323,000";				// Input - Software Architect2's salary
	int month5 = 12;						// Input - Software Architect2's hire month
	int day5 = 24;							// Input - Software Architect2's hire day
	int year5 = 2009;						// Input - Software Architect2's hire year
	int departmentNum5 = 5434222;			// Input - Software Architect2's department number
	string supervisorName5 = "Big Boss";	// Input - Software Architect2's supervisor's name
	int raisePercent5 = 5;					// Input - Software Architect2's Percentage of last salary increase
	int experienceYear5 = 4;				// Input - Software Architect2's Years of experience

	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #3	: Class Constructors, Inheritance & Init\n";
	cout << "*****************************************\n";

	Employee E1("Jimmy Fallon", "12345", "949-555-1234", 40, "M", "Comedian", "100,000", 8, 31, 2014); // First Employee (calls overload constructor)
	Employee E2;		// Second Employee (calls default constructor)

	cout << "The first person of C1SCEmployees before changing...." << endl;
	E1.print();		// print out the info before changed

	E1.setRecord(name2, ID2, phoneNum2, age2, gender2, jobTitle2, salary2, month2, day2, year2);  // set the info to first employee
	cout << "\n\nThe first person of C1SCEmployees after changing...." << endl;
	E1.print();		// print out the info after changed

	cout << "\n\nThe second person of C1SCEmployees before changing...." << endl;	
	E2.print();		// print out the info before changed

	E2.setRecord(name3, ID3, phoneNum3, age3, gender3, jobTitle3, salary3, month3, day3, year3);	// set the info to second employee
	cout << "\n\nThe second person of C1SCEmployees after changing...." << endl;
	E2.print();		// print out the info after changed

	Programmer P1("Mary Coder", "65432", "310-555-5555", 28, "F", "Programmer", "770123", 2, 8, 2010, 6543222, "Mary Leader", 7, true, true); // First Programmer (calls overload constructor)
	Programmer P2;  // Second Programmer (calls default constructor)

	cout << "\n\nThe person of Programmers before changing...." << endl;
	P1.Employee::print();	// print out the info before changed
	P1.print();				// print out the info before changed
	P1.setRecord(name4, ID4, phoneNum4, age4, gender4, jobTitle4, salary4, month4, day4, year4);	// set the info to first programmer
	P1.setProg(departmentNum4, supervisorName4, raisePercent4, cIden4, javaIden4);	// set the info to first programmer
	cout << "\n\n\nThe person of Programmers after changing...." << endl;
	P1.Employee::print();	// print out the info after changed
	P1.print();		// print out the info after changed

	SoftwareArchitect S1("Sally Designer", "87878", "310-555-8888", 38, "F", "Architect", "870,123", 2, 8, 2003, 6543422, "Big Boss", 8, 11); // First SoftwareArchitect (calls overload constructor)
	SoftwareArchitect S2;   // Second SoftwareArchitect (calls default constructor)

	cout << "\n\n\nThe person of Software Architects before changing...." << endl;
	S1.Employee::print();	// print out the info before changed
	S1.print();				// print out the info before changed
	S1.setRecord(name5, ID5, phoneNum5, age5, gender5, jobTitle5, salary5, month5, day5, year5);	// set the info to first Software Architect
	S1.setSoftArt(departmentNum5, supervisorName5, raisePercent5, experienceYear5);					// set the info to first Software Architect
	cout << "\n\nThe person of Programmers after changing...." << endl;	
	S1.Employee::print();	// print out the info after changed
	S1.print();				// print out the info after changed

	// INPUT: Four person's information 
	// PROCESSING: First create two members one already has data values and another doesn't have, and then change new 
	//				information for the person who already has before. After changing the origin info, print it out.
	//				Do these processes for each person from different department
	//
	// OUTPUT: First, it outputs the person's name, ID, phone number, age, gender, job title, salary, hire date, and the 
	//			specific information for each group of people. After doing the change, it would output the new information.
	return 0;
}