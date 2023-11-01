#include "Order.h"

// ���������� ��� ����������
Order::Order() : orderNumber(0), orderDate(""), quantityOrdered(0), totalCost(0) {}

// ���������� � �����������
Order::Order(int number, string date, Employee emp, Customer cust, VinylRecord record, int quantity, float cost)
    : orderNumber(number), orderDate(date), employee(emp), customer(cust), orderedRecord(record), quantityOrdered(quantity), totalCost(cost) {}

// ����������
Order::~Order() {}

// ����������� ������ ��� ������ ���������� � ������
void Order::outputOrder()
{
    cout << "����� ������: " << orderNumber << endl;
    cout << "���� ������: " << orderDate << endl;
    cout << "��������� ��������: " << employee.getFirstName() << " " << employee.getLastName() << " (" << employee.getPosition() << ")" << endl;
    cout << "������: ";
    customer.outputCustomer();
    cout << "���������� ���������: " << orderedRecord.getAlbumName() << " - " << quantityOrdered << " ��." << endl;
    cout << "����� ��������� ������: " << totalCost << endl;
    cout << endl;

}

// ����� ��� ��������� ������ ������
void Order::setOrderNumber(int orderNumber)
{
    this->orderNumber = orderNumber;
}

// ����� ��� ��������� ���� ������
void Order::setOrderDate(string orderDate)
{
    this->orderDate = orderDate;
}

// ����� ��� ��������� ���������� ���������� ���������
void Order::setQuantityOrdered(int quantityOrdered)
{
    this->quantityOrdered = quantityOrdered;
}

// ����� ��� ��������� �������� ��������� ������
void Order::setTotalCost(float totalCost)
{
    this->totalCost = totalCost;
}

// ����� ��� ��������� ������ ������
const int Order::getOrderNumber()
{
    return orderNumber;
}

// ����� ��� ��������� ���� ������
const string Order::getOrderDate()
{
    return orderDate;
}

// ����� ��� ��������� ���������� ���������� ���������
const int Order::getQuantityOrdered()
{
    return quantityOrdered;
}

// ����� ��� ��������� �������� ��������� ������
const float Order::getTotalCost()
{
    return totalCost;
}
