/*
 * String.cpp
 * Author: suyashd95
 */

#include <iostream>
#include <cstring>

#include "String.h"

using namespace std;

String::String() {

	length = 0;
	str = new char[length + 1];
}

String::String(char* str) {

	length = strlen(str);
	this->str = new char[length + 1];

	strcpy(this->str, str);
}

String::String(String& s) {

	this->length = s.length;
	this->str = s.str;
}

char* String::getString() {

	return str;
}


String concatenation(const String& s1, const String& s2) {

	String s3;
	s3.length = s1.length + s2.length;

	delete s3.str;
	s3.str = new char[s3.length + 1];

	strcpy(s3.str, s1.str);
	strcat(s3.str, s2.str);

	return s3;
}
