#pragma once

#include <string>
using namespace std;

// ����� ��� ������� "�������"
class Human {
private:

    string firstName;   // ���
    string lastName;    // �������

public:

    // ����������� ��� ����������
    Human() : firstName(""), lastName("") {}
    // ���������� � �����������
    Human(string first, string last) : firstName(first), lastName(last) {}
    // ����������
    ~Human() {}

    // ������� ��� ������
    void setFirstName(string firstName);
    void setLastName(string lastName);

    // ������� ��� ������
    const string getFirstName();
    const string getLastName();
};

