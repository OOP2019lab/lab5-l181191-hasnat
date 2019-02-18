#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

BankAcc::BankAcc(string name , int num)
{
	BankAcc::holdername = name;
	BankAcc::accnum = num;
	BankAcc::no_of_transactions = 10;
	BankAcc::transactions = new int [BankAcc::no_of_transactions];
	for (int i=0; i<10 ; i++)
	{
		BankAcc::transactions[i]=0;
	}
	BankAcc::trans =0;
	BankAcc::balancelim = 200000;
}

string BankAcc::getname()
{
  return BankAcc::holdername;
}

float BankAcc::getnum()
{
	return BankAcc::accnum;
}

float BankAcc::getbalance()
{
	return BankAcc::balanceacc;
}

int BankAcc::getnotransactions()
{
	return BankAcc::no_of_transactions;
}



void BankAcc::print()
{
	cout << BankAcc::accnum;
	cout << BankAcc::holdername;
	cout << BankAcc::balanceacc;
	cout << BankAcc::no_of_transactions;
	BankAcc::transactions = new int [BankAcc::no_of_transactions];
	for (int i=0 ; i<BankAcc::no_of_transactions ; i++)
	{
		cout << BankAcc::transactions;
	}
}

void BankAcc::withdraw(float num)
{
	if (num<= BankAcc::balanceacc)
	{
		cout << "Transaction Successful.";
		BankAcc::balanceacc = BankAcc::balancelim-num;
		if (BankAcc::trans<=BankAcc::no_of_transactions)
		{
		    BankAcc::transactions[BankAcc::trans] = -num;
		    BankAcc::trans++;
		}
		else
		{
			increasetran();
			BankAcc::transactions[BankAcc::trans] = -num;
		    BankAcc::trans++;
		}
	}

	else
		cout << "Insuuficient Balance";
}

void BankAcc::deposit(float num)
{
	if(BankAcc::balanceacc+num <= BankAcc::balancelim)
	{
		BankAcc::balanceacc = BankAcc::balanceacc+num;
		if(BankAcc::trans<=BankAcc::no_of_transactions)
		{
		     BankAcc::transactions[BankAcc::trans]= num;
		     BankAcc::trans++;
		}
		else 
		{
			increasetran();
			 BankAcc::transactions[BankAcc::trans]= num;
		     BankAcc::trans++;
		}
	}
	else 
		cout << "Balance Limit Reached.";
}


void BankAcc::increasetran()
{
	int x = BankAcc::no_of_transactions;
	int *arr = new int[BankAcc::no_of_transactions];
	for (int i=0; i<BankAcc::no_of_transactions ; i++)
	{
		arr[i] = BankAcc::transactions[i];
	}

	BankAcc::no_of_transactions = BankAcc::no_of_transactions*2;
	BankAcc::transactions = new int [BankAcc::no_of_transactions];
	for (int i=0; i<= x ; i++)
	{
		BankAcc::transactions[i] = arr[i];
	}
}

BankAcc::~BankAcc()
{
	delete []BankAcc::transactions;
	BankAcc::holdername = "";
	BankAcc::accnum =0;
	BankAcc::balanceacc = 0;
	BankAcc::no_of_transactions=0;
}

