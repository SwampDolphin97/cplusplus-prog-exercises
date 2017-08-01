/*
 * Master.cpp
 * Author: suyashd95
 */

#include "Master.h"

void Master::create() {

	std::cout << "Creating a Master object...\n" << std::endl;

	std::cout << "Enter the code: " << std::flush;
	int code;
	std::cin >> code;
	setCode(code);

	std::cout << "Enter the name: " << std::flush;
	std::string name;
	std::cin >> name;
	setName(name);

	std::cout << "Enter the pay: " << std::flush;
	float pay;
	std::cin >> pay;
	setPay(pay);

	std::cout << "Enter the experience: " << std::flush;
	int experience;
	std::cin >> experience;
	setExperience(experience);

	std::cout << "\nMaster object has been successfully created.\n" << std::endl;
}

void Master::update() {

	std::cout << "Updating a Master object...\n" << std::endl;

	std::cout << "Which data needs to be updated?\n1. Code\t2. Name\n3. Pay\t4. Experience" << std::endl;
	std::cout << "Please enter a valid option corresponding to your choice: " << std::flush;
	int op;
	std::cin >> op;
	std::cout << std::endl;

	if(op == 1) {

		std::cout << "Current value of Code: " << getCode() << std::endl;
		std::cout << "New value of Code: " << std::flush;
		int code;
		std::cin >> code;
		setCode(code);
	}
	else if(op == 2) {

		std::cout << "Current value of Name: " << getName() << std::endl;
		std::cout << "New value of Name: " << std::flush;
		std::string name;
		std::cin >> name;
		setName(name);
	}
	else if(op == 3) {

		std::cout << "Current value of Pay: " << std::fixed << std::setprecision(2) << getPay() << std::endl;
		std::cout << "New value of Pay: " << std::flush;
		float pay;
		std::cin >> pay;
		setPay(pay);
	}
	else if(op == 4) {

		std::cout << "Current value of Experience: " << getExperience() << std::endl;
		std::cout << "New value of Experience: " << std::flush;
		int experience;
		std::cin >> experience;
		setExperience(experience);
	}

	if(op >= 1 && op <= 4)
		std::cout << "\nMaster object has been successfully updated.\n" << std::endl;
	else
		std::cout << "ERROR: Invalid option selected. Update Operation Failed.\n" << std::endl;
}

void Master::display() const {

	std::cout << "Displaying the details of a Master object...\n" << std::endl;
	std::cout << std::setw(12) << "Code: " << getCode() << std::endl;
	std::cout << std::setw(12) << "Name: " << getName() << std::endl;
	std::cout << std::setw(12) << std::fixed << std::setprecision(2) << "Pay: " << getPay() << std::endl;
	std::cout << "Experience: " << getExperience() << std::endl;
	std::cout << "\nMaster object has been successfully displayed.\n" << std::endl;
}
