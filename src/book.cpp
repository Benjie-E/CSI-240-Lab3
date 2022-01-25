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

#include "book.h"
const float OZ_IN_POUNDS = 16.0;
#include <sstream>
Book::Book() {
	bName = "";
	bType = Type::UNKNOWN;
	bPages = 0;
	bOunces = 0.0f;
}

Book::Book(const string &name, Type type, int pages, float ounces) {
	bName = name;
	bType = type;
	bPages = pages;
	bOunces = ounces;
}

string Book::formatReportLine() {
	stringstream buffer("");
	buffer << getName() << "|Type: " << getTypeName() << "|Pages: " << getPages() << "Weight: " << getWeightLbs() << "lbs";
	return buffer.str();
}

float Book::getWeightLbs() {
	return getOunces()*OZ_IN_POUNDS;
}

string Book::getTypeName() {
	return TYPE_WORDS[bType];
}
