

#include <iostream>
using namespace std;
struct Auto{
	int wheels;
	float speed;
	char color;
	float value;
};

int main()
{
	Auto bugatti;
	bugatti.color = 'b';
	bugatti.speed = 415.62;
	bugatti.wheels = 4;
	bugatti.value = 6.2;

	Auto bmw = { 4,320.43,'red',3.5 };
	cout << "BMW`s speed = " << bmw.speed<< " " << "BMW`s value = " << bmw.value << "\n" << "bugatti`s speed = " << bugatti.speed<< " " << "bugatti`s value = " << bugatti.value << endl;



}

