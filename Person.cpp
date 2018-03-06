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

void Person::setOutput()
{
	output = name + "\"" + pseudo + "\"" + surname;
}

void Person::getOutput()
{
	cout << output;
}

void Person::changeLetter()
{
	char letter;
	for (int i = 0; i < output.size(); i++)
	{
		letter = output[i];
		if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'y' || letter == 'Y')
			output[i] = 'z';
	}
}
