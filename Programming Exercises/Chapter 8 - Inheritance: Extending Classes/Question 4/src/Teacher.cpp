/*
 * Teacher.cpp
 * Author: suyashd95
 */

#include "Teacher.h"

Teacher::Teacher(): Staff(), Education(), subject(""), publication("") {}

Teacher::Teacher(int code, std::string name, int genQual, std::string profQual, std::string subject, std::string publication):
		Staff(code, name),
		Education(genQual, profQual),
		subject(subject), publication(publication) {}

void Teacher::input() {

	Staff::input();
	Education::input();
	std::cout << "Enter the subject: " << std::flush;
	std::cin >> subject;
	std::cout << "Enter the publication: " << std::flush;
	std::cin >> publication;
}

void Teacher::display() {

	Staff::display();
	Education::display();
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
