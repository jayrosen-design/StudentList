//Jay Rosen
//This program creates a doubly Linked List of student names for a course's registration using the STL list container  and StudentList class  found in header file

#include "StudentList.h"
using namespace std;


// Program that uses the StudentList class
/**************************************************************
*              StudentList::createList                         *
*		Display menu of options for adding, removing, and 		  *
*      displaying list of students. User input will call these
*	   7 different functions.
**************************************************************/
void StudentList::createList()
{
	string student = "";


	int x = 0;

	while (x < 7) // Valid Menu options available range from 1 - 7
	{

		cout << "\a";
		cout << "\n\n\t+------------------------------------------------------------+";
		cout << "\n\t|                  COP2535 : DATA STRUCTURES                 |";
		cout << "\n\t|            Course Registration for Spring 2016             |";
		cout << "\n\t+------------------------------------------------------------+";
		cout << "\n\t|                                                            |";
		cout << "\n\t| 1. ADD student at the END of the list                      |";
		cout << "\n\t| 2. ADD student at the BEGINNING of the list                |";
		cout << "\n\t|                                                            |";
		cout << "\n\t| 3. REMOVE student from the END of the list                 |";
		cout << "\n\t| 4. REMOVE student from the BEGINNING of the list           |";
		cout << "\n\t| 5. REMOVE student BY NAME                                  |";
		cout << "\n\t|                                                            |";
		cout << "\n\t| 6. DISPLAY the list of students                            |";
		cout << "\n\t|                                                            |";
		cout << "\n\t| 7. EXIT                                                    |";
		cout << "\n\t|                                                            |";
		cout << "\n\t|        Type 1-6 to continue or Type 7 to Quit  . . .       |";
		cout << "\n\t+------------------------------------------------------------+\n\t";

		cin >> x;  //User input for menu selection

		if (x == 1)			//Option 1 to Add name to end
			addEnd();

		else if (x == 2)	//Option 2 to Add name to beginning
			addBegin();

		else if (x == 3)	//Option 3 to Remove name at end
			removeEnd();

		else if (x == 4)	//Option 4 to Remove name at beginning
			removeBegin();

		else if (x == 5)	//Option 5 to Remove by name
			removeName();

		else if (x == 6)	//Option 6 to Display list
			display();

		else if (x == 7)	//Option 7 to Quit program
			exit();


		// determine if integer input is outside of 1-7 range, allowing user to re-enter menu option
		else if (x > 7 || x < 0)
		{
			system("cls");
			cout << "\n\t\aError: " << x << " is not a menu option. Try again";
			x = 0;
		}

		//trailing else statement to terminate the program if menu input is not integer  
		else
		{
			system("cls");
			cout << "\n\t\aError: Invalid Input. Exiting program.\n\n\t";
			break;
		}

	}

}



/**************************************************************
*              StudentList::addEnd                             *
*   User prompted for student name, then name is pushed        *
*   to end of Linked List.          				           *
**************************************************************/
void StudentList::addEnd()
{
	system("cls");
	cout << "\n\tEnter the name of student to add to end of the list: ";
	cin >> student;
	linkedList.push_back(student);
	system("cls");
	cout << "\n\t" << student << " was added to the end of the list.";
}

/**************************************************************
*              StudentList::addBegin                             *
*   User prompted for student name, then name is pushed          *
*   to beginning of Linked List.          				         *
**************************************************************/
void StudentList::addBegin()
{
	system("cls");
	cout << "\n\tEnter the name of student to add at the beginning of the list: ";
	cin >> student;
	linkedList.push_front(student);
	system("cls");
	cout << "\n\t" << student << " was added to the beginning of the list.";
}

/**************************************************************
*              StudentList::removeEnd                            *
*   Removes student name that is at the end of the Linked List   *
**************************************************************/
void StudentList::removeEnd()
{
	system("cls");
	cout << "\n\t";
	cout << linkedList.back();
	linkedList.pop_back();
	cout << " was removed from the end of the list.";

}

/**************************************************************
*              StudentList::removeBegin                                *
*   Removes student name that is at the beginning of the Linked List   *
**************************************************************/
void StudentList::removeBegin()
{
	system("cls");
	cout << "\n\t";
	cout << linkedList.front();
	linkedList.pop_front();
	cout << " was removed from the beginning of the list.";

}

/**************************************************************
*              StudentList::removeName                           *
*   Removes student name that can be anywhere within the  list   *
**************************************************************/
void StudentList::removeName()
{
	system("cls");
	cout << "\n\tEnter the name of student to remove: ";
	cin >> student;
	linkedList.remove(student);
	system("cls");
	cout << "\n\t" << student << " was removed from the list.";

}

/**************************************************************
*              StudentList::display                              *
*		Retrive the data stored in the linked list and display	 *
*      the student names in the order they were arranged	     *
**************************************************************/
void StudentList::display()
{
	system("cls");
	cout << "\n\n\t+------------------------------------------------------------+";
	cout << "\n\t|                  COP2535 : DATA STRUCTURES                 |";
	cout << "\n\t|               List of Students for Spring 2016             |";
	cout << "\n\t+------------------------------------------------------------+";
	cout << "\n\t|                                                            |";

	//To traverse the linked list, iter starts at beginning list head pointer and moves to each node until the end node is reached
	for (iter = linkedList.begin(); iter != linkedList.end(); iter++)
	{
		//Display the value (student name) that the memory location of iter points to
		cout << "\n\t\t\t" << *iter;
		cout << "\n\t|                                                            |";
	}
	cout << "\n\n\t+------------------------------------------------------------+\n\t";
	cin.get();
	cout << "\a";
}


/**************************************************************
*              StudentList::exit                           *
*   Exit program and display exit message                   *
**************************************************************/
void StudentList::exit()
{
	//clear screen of menu to display exit message
	system("cls");
	cout << "\n\tGood Bye\n\n\t";

}

/**************************************************************
*                                                               *
* 							Main		   			            *
*                                                               *
*                                                               *
**************************************************************/

//small Main driver program that creates a registration object, which is used to access createList
int main()
{
	StudentList registration;
	registration.createList();

	system("pause");
	return 0;
}

