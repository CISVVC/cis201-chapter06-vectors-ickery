#include "transaction.h"
Transaction::Transaction(int _day, double _amount, std::string _description)
{
    m_day = _day;
    m_amount = _amount;
    m_description = _description;
}

// Prints out the day, amount, and description of the transaction
void Transaction::print()
{
    std::cout << m_day << "       " << m_amount << "       " << m_description << std::endl;
}

// Grabber function for day.
int Transaction::get_day()
{
    return m_day;
}

// Grabber function for amount.
double Transaction::get_amount()
{
    return m_amount;
}

// Grabber function for description.
std::string Transaction::get_description()
{
    return m_description;
}
