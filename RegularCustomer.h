#pragma once

#include "Customer.h"
#include <vector>

using namespace std;

class RegularCustomer : public Customer
{
	protected :
		vector<string> m_products;

	public :
		RegularCustomer(int id, const string& name, const string& phone);
		~RegularCustomer(void);

		void AddProduct(const string& product);
		bool BuyIt(const string& product);
		void Print() const;
		bool IsRegular() const;
};
