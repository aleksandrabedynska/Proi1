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
	output = name + surname + "\"" + pseudo + "\"" ;
}

void Person::getOutput()
{
	cout << output;
}

void Person::reverseWord()
{
	char temporaryLetter;
	for (int i = 0; i < name.size() / 2; i++)
	{
		temporaryLetter = name[i];
		name[i] = name[name.size() - 1-i];
		name[name.size() - 1-i] = temporaryLetter;
 
	}
	for (int i = 0; i < surname.size() / 2; i++)
	{
		temporaryLetter = surname[i];
		surname[i] = surname[surname.size() - 1-i];
		surname[surname.size() - 1-i] = temporaryLetter;

	}
	for (int i = 0; i < pseudo.size() / 2; i++)
	{
		temporaryLetter = pseudo[i];
		pseudo[i] = pseudo[pseudo.size() - 1-i];
		pseudo[pseudo.size() - 1-i] = temporaryLetter;

	}

}

