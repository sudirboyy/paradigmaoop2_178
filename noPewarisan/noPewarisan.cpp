#include <iostream>
using namespace std;

class baseClass { //finall 
public:
	virtual void perkenalan() {
		cout << "Hallo saya function dari base class";
	}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo Saya Function dari derived class";
	}
};