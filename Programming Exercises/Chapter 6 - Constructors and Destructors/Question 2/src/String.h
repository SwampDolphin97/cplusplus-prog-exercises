/*
 * String.h
 * Author: suyashd95
 */

#ifndef STRING_H_
#define STRING_H_

class String {

private:
	unsigned int length;
	char* str;

public:
	String();
	String(char* str);
	String(String& s);
	friend String concatenation(const String& s1, const String&s2);
	void putString(char* str);
	char* getString();
};

#endif /* STRING_H_ */
