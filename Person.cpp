#include "Person.h"

void Person::setName()
{
	cout << "Write name:" << endl;
	cin >> name;
}

void Person::setSurname()
{
	cout << "Write surname:" << endl;
	cin >> surname;
}

void Person::setPseudo()
{
	cout << "Write pseudonym:" << endl;
	cin >> pseudo;
}

void Person::getOutput()
{
	output = name +  surname + "\""+ pseudo + "\"" ;
	cout << output;
}
