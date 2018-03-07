#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	string surname;
	string pseudo;
	string output;

public:
	void setName();
	void setSurname();
	void setPseudo();
	void setOutput();
	void changeLetter();
	void getOutput();
	void reverseWord();

};
