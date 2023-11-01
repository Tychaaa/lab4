#include "Human.h"

// ����������� ��� ����������
Human::Human() : firstName(""), lastName("") {}

// ���������� � �����������
Human::Human(string first, string last) : firstName(first), lastName(last) {}

// ����������
Human::~Human() {}

// ����������� ������ ��� ��������� ����� ��������
void Human::setFirstName(string firstName)
{
	this->firstName = firstName;
}

// ����������� ������ ��� ��������� ������� ��������
void Human::setLastName(string lastName)
{
	this->lastName = lastName;
}

// ����������� ������ ��� ��������� ����� ��������
const string Human::getFirstName()
{
	return firstName;
}

// ����������� ������ ��� ��������� ������� ��������
const string Human::getLastName()
{
	return lastName;
}
