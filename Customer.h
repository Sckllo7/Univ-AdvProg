#pragma once

#include <string>

using namespace std;

class Customer
{
	protected :
		int m_id;
		string m_name;
		string m_phone;

	public :
		Customer(int id, const string& name, const string& phone);
		~Customer(void);
		virtual bool BuyIt(const string&);
		virtual void Print() const;
		virtual bool IsRegular() const;
		const string& GetName() const;
		const string& GetPhone() const;
};
