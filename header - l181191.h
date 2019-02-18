#include <iostream>
using namespace std;

class BankAcc
{
	string holdername;
	int accnum;

public:
		float balanceacc;
		float balancelim;
		float withdraw;
		float deposit;
		int no_of_transactions;
		int*transactions;
		BankAcc::BankAcc(string name , int num);
		void BankAcc::print();
		void BankAcc::withdraw(float num);
		string getname();
		float getnum();
		float getbalance();
		int getnotransactions();
		int trans;
		void BankAcc::deposit(float num);
		void BankAcc::increasetran();
		~BankAcc();
};