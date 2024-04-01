#include <string>

class Person {
private:
	int _age;
	std::string _name;
public:
	Person(int age, std::string name);
	Person(Person const &other);
	Person& operator=(Person const &other);
	~Person();
	void setName(std::string name);
	void present();
};