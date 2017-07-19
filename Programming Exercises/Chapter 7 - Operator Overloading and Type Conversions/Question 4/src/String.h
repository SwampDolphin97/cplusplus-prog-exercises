/*
 * String.h
 * Author: suyashd95
 */

#ifndef STRING_H_
#define STRING_H_

#include <iostream>

class String {

private:
	int length;
	char* str;

public:
	String();
	String(const char*);
	String(const String&);
	String& operator =(const String&);
	bool operator ==(const String&) const;
	friend std::ostream& operator <<(std::ostream&, const String&);
	friend std::istream& operator >>(std::istream&, String&);
	~String();
};

#endif /* STRING_H_ */
