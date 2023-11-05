#pragma once

#include "VinylRecord.h"
#include "Customer.h"
#include "Employee.h"

#include <string>
#include <iostream>
using namespace std;

// ���������� ���������� ��� �������� �������
extern int numOrders;

// ����� ��� ������� "�����"
class Order {
private:

    static int orderNumberGenerator;  // ��������� ������� �������
    int orderNumber;    // ����� ������
    string orderDate;   // ���� ������
    Employee employee;  // ��������� ��������
    Customer customer;  // ������
    VinylRecord orderedRecord; // ���������� ��������� ���������
    int quantityOrdered;       // ���/�� ���������� ��������� ���������
    float totalCost;    // ����� ��������� ������

public:

    // ���������� ��� ����������
    Order();
    // ���������� � �����������
    Order(string date, Employee emp, Customer cust, VinylRecord record, int quantity, float cost);
    // ����������
    ~Order();

    // ������������� ������� ��� �������� ������� ������������ ���������� ���������� ��������� � ��������
    friend bool checkAvailability(Order& order, Store& store);

    // ����� ��� ������ ���������� � ������
    void outputOrder();

    // ����������� ����� ��� ��������� ����������� ������ ������
    static int generateOrderNumber();
    
    // ������� ��� ������
    void setOrderDate(string orderDate);
    void setQuantityOrdered(int quantityOrdered);
    void setTotalCost(float totalCost);

    // ������� ��� ������
    const int getOrderNumber();
    const string getOrderDate();
    VinylRecord& getOrderedRecord();
    const int getQuantityOrdered();
    const float getTotalCost();
};