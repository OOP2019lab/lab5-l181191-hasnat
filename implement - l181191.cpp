#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	BankAcc myAcc("John Doe" , 549002);
	myAcc.print();
	myAcc.withdraw(2000);
	myAcc.deposit(250000);
	myAcc.deposit(2000);
}