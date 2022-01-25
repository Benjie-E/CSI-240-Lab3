/*
Author:       Benjie
Class:        CSI-240-03
Assignment:   Lab 3
Date Assigned:1/24/2022
Due Date:     2/1/2022 14:30
Description:
A brief description of the purpose of the program.
Certification of Authenticity:
    I certify that this is entirely my own work, except where I have given
    fully-documented references to the work of others. I understand the
    definition and consequences of plagiarism and acknowledge that the assessor
    of this assignment may, for the purpose of assessing this assignment:
        - Reproduce this assignment and provide a copy to another member of
academic staff; and/or
        - Communicate a copy of this assignment to a plagiarism checking
          service (which may then retain a copy of this assignment on its
          database for the purpose of future plagiarism checking)
*/

#include <iostream>
#include <fstream>
#include <string>
#include "book.h"

using namespace std;

int main()
{
	const string FILENAME("src/books.txt");
	const int INT_MAX = 8;
	ifstream input(FILENAME);
   
	if( input.good() )
	{
		while( !input.eof() )
		{
			string name;
			int type;
			int pages;
			float ounces;
			getline( input, name );
			input >> type >> pages >> ounces;
			input.ignore(INT_MAX, '\n');  //ignore the newline char at the end of the line
         
			Book newBook(name, static_cast<Type>(type),pages,ounces);
			
			//write out report line for movie here!
			cout << newBook.formatReportLine() << endl;
         
		}
	}
	else
	{
		cout << "File not found: " << FILENAME << endl;
	}
   
	system("pause");
	return 0;
}
