/*
 * DB.h
 * Author: suyashd95
 */

#ifndef DB_H_
#define DB_H_

class DM;

class DB {

private:
	int feet;
	int inches;

public:
	DB(): feet(0), inches(0) {};
	void displayDistance();
	void setDistance(int, int);
	int getFeet() const { return feet; };
	int getInches() const { return inches; };
	friend void addDistance(const DB&, const DM&);
};

#endif /* DB_H_ */
