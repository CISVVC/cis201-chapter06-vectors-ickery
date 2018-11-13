/*
File: Main.cpp
Name: David Serrano
Email: davids2016@student.vvc.edu 
Description: Creates an account object that hold a vector of transactions.
Transactions are able to be displayed in a monthly basis.
*/

#include "transaction.h"
#include "account.h"
#include<iostream>
#include<string>
int main()
{
    Account account1;
    // TO DO: when initializing transaction, have an account as a parameter.
    Transaction transaction1(1,1000.00, "Initial Balance");
    Transaction transaction2(2,-200.00, "ATM WITHDRAWN");
    Transaction transaction3(3,113.25, "CHECK 12312");
    Transaction transaction4(3,200.00, "ATM DEPOSIT");
    Transaction transaction5(5, -300, "Steam Purchase");
    Transaction transaction6(5, 10.00, "Present from John");
    Transaction transaction12(14, 300, "Steam Refund");
    account1.record(transaction1);
    account1.record(transaction2);
    account1.record(transaction3);
    account1.record(transaction4);
    account1.record(transaction5);
    account1.record(transaction6);
    account1.record(transaction12);
    account1.print_transaction_list(30);
    return 0;
}
