//============================================================================
// Name        : Adv_Prog.cpp
// Author      : Junsu Kim
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer(int id, const string& name, const string& phone)
	: m_id(id), m_name(name), m_phone(phone)
{
}

Customer::~Customer(void)
{
}

void Customer::Print() const
{
	cout << m_id << " : " << m_name << " " << m_phone << " ";
}

bool Customer::IsRegular() const
{
	return false;
}

const string& Customer::GetName() const
{
	return m_name;
}

const string& Customer::GetPhone() const
{
	return m_phone;
}

bool Customer::BuyIt(const string& product)
{
	return false;
}
/*
int main()
{
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
*/
