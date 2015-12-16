//Jay Rosen
//StudentList class defines the members of a a doubly Linked List using the STL list container 

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <iostream>
#include <list>     
#include <string>
using namespace std;

// StudentList class declaration
class StudentList
{
private:
	list<string> linkedList;		//linkedList is a list of strings
	list<string>::iterator iter;	//iter stores the memory location of list items, and will be used to traverse the linked list
	string student;					//User input name of student
	int x;							//Hold user input for menu option
	void addEnd();					//Adds student name to end of list
	void addBegin();				//Adds student name to beginning of list
	void removeEnd();				//Removes student name from end of list 
	void removeBegin();				//Removes student name from beginning of list
	void removeName();				//Removes an student's name from list
	void display();					//Displays the list of students
	void exit();					//Exit program

public:
	void createList();				//Creates a linked list of student names

}; // End StudentList class declaration
#endif