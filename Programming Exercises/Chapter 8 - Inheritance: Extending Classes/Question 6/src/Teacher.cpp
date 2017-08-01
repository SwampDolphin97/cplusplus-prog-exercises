/*
 * Teacher.cpp
 * Author: suyashd95
 */

#include "Teacher.h"

Teacher::Teacher(): staff(), subject(""), publication("") {}

Teacher::Teacher(int code, std::string name, std::string subject, std::string publication):
		staff(code, name), subject(subject), publication(publication) {}

void Teacher::input() {

	staff.input();
	std::cout << "Enter the subject: " << std::flush;
	std::cin >> subject;
	std::cout << "Enter the publication: " << std::flush;
	std::cin >> publication;
}

void Teacher::display() {

	staff.display();
	std::cout << "Subject: " << subject << std::endl;
	std::cout << "Publication: " << publication << std::endl;
}

std::string Teacher::getSubject() const {

	return subject;
}

std::string Teacher::getPublication() const {

	return publication;
}

void Teacher::setSubject(const std::string subject) {

	this->subject = subject;
}

void Teacher::setPublication(const std::string publication) {

	this->publication = publication;
}
