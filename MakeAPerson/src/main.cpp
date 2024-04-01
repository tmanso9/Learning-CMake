#include "Person.h"
#include <iostream>

int main(){
	std::cout << "Time to create someone...\n";
	Person Teresa(31, "Teresa");
	Person t2(Teresa);
	t2.setName("t2");
	Teresa.present();
	Person t3 = t2;
	t3.setName("third");
}