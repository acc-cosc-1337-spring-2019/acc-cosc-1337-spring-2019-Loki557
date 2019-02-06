
//write include statements
#include<iostream>
#include<string>
#include "decisions.h"

using std::cout;
using std::cin;
using std::string;
/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	int credit_hours_total = 0;
	int credit_points_total = 0;
	int credit_hours;
	int grade_points;
	int credit_points;
	string letter_grade;

	cout << "Please enter credit hours for class 1: ";
	cin >> credit_hours;
	credit_hours_total += credit_hours;

	cout << "Please enter letter grade for class 1: ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);
	credit_points = grade_points * credit_hours;
	credit_points_total += credit_points;

	//testing
	//cout << "\n" << "Grade Points:" << grade_points << "Credit Points:" << credit_points << "\n";
	

	cout << "Please enter credit hours for class 2: ";
	cin >> credit_hours;
	credit_hours_total += credit_hours;

	cout << "Please enter letter grade for class 2: ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);
	credit_points = grade_points * credit_hours;
	credit_points_total += credit_points;
		
	//testing
	//cout << "\n" <<"Grade Points:"<< grade_points << "Credit Points:" << credit_points <<"\n";
	cout << "Please enter credit hours for class 3: ";
	cin >> credit_hours;
	credit_hours_total += credit_hours;

	cout << "Please enter letter grade for class 3: ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);
	credit_points = grade_points * credit_hours;
	credit_points_total += credit_points;

	//testing
	//cout << "\n" << "Grade Points:" << grade_points << "Credit Points:" << credit_points<< "\n";

	
	double gpa_average = calculate_gpa(credit_hours_total, credit_points_total);
	cout << "GPA: " << gpa_average;
	

	return 0;
}