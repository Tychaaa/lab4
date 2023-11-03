#include "Order.h"

int Order::orderNumberGenerator = Order::generateOrderNumber(); // �������������� ���������� ��� ������ ������

// ���������� ��� ����������
Order::Order() : orderNumber(0), orderDate(""), quantityOrdered(0), totalCost(0) {}

// ���������� � �����������
Order::Order(string date, Employee emp, Customer cust, VinylRecord record, int quantity, float cost)
    : orderDate(date), employee(emp), customer(cust), orderedRecord(record), quantityOrdered(quantity), totalCost(cost) 
{
    orderNumber = orderNumberGenerator++;
}

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

int Order::generateOrderNumber() 
{
    srand(static_cast<unsigned int>(time(0)));  // ������������� ���������� ��������� �����
    return rand() % 10000 + 1;  // ��������� ���������� ����� �� 1 �� 10000
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
