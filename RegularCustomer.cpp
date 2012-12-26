/*
 * RegularCustomer.cpp
 *
 *  Created on: Nov 28, 2012
 *      Author: sckllo7
 */

#include <iostream>
#include "RegularCustomer.h"

using namespace std;

RegularCustomer::RegularCustomer(int id, const string& name, const string& phone)
//: RegularCustomer(m_id, m_name, m_phone)
:Customer(id, name, phone)
{
}

RegularCustomer::~RegularCustomer(void)
{
}

void RegularCustomer::AddProduct(const string& product)
{
	m_products.push_back(product);
}

bool RegularCustomer::BuyIt(const string& product)
{
	int i;

	for (i = 0; i < m_products.size(); i++)
		if(m_products[i] == product)
			return true;
	return false;
}

void RegularCustomer::Print() const
{
	int i;

	Customer::Print();
	cout << "[구매 상품 : ";

	for (i = 0; i < m_products.size(); i++)
		cout << m_products[i] << ", ";
	cout << "]";
}

bool RegularCustomer::IsRegular() const
{
	return true;
}
