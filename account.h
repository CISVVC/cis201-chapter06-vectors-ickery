/*
File: account.h
Name: David Serrano
Email: davids2016@student.vvc.edu  
Description: Header file for the class account
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "transaction.h"
#include <iostream>
#include <vector>
#include <iomanip>
class Account
{
private: 
   std::vector <Transaction> m_transaction_list;
public:
   Account();
   void record(Transaction _transaction);
   void print_transaction_list(int _day_amount);
   double get_minimum_balance(int _day_amount);
   double get_average_balance(int _day_amount);
   bool day_has_transaction(int _day);
   void print_transactions_of_day(int _day);
   double get_balance_for_day(int _day);
};

#endif
