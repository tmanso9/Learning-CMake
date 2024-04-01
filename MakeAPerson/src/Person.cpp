#include "Person.h"
#include <iostream>
#include <string>

Person::Person(int age, std::string name): _age(age), _name(name){}

Person::Person(Person const &other){
	*this = other;
}

Person& Person::operator=(Person const &other){
	_age = other._age;
	_name = other._name;
	return *this;
}

Person::~Person(){
	std::cout << _name << " says goodbye!\n";
}

void Person::setName(std::string name){
	_name = name;
}

void Person::present(){
	std::cout << "Hello! I am " << _name << " and I am " << _age << " years old.\n";
}
