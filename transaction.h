/*
File: transaction.h
Name: David Serrano
Email: davids2016@student.vvc.edu
Description: Header file for class transaction
*/

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <iostream>

class Transaction
{
private:
    int m_day;
    double m_amount;
    std::string m_description;
public:
    Transaction(int _day, double _amount, std::string _description);
    void print();
    int get_day();
    double get_amount();
    std::string get_description();
};

#endif
