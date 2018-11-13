#include "account.h"

// Class initializer
Account::Account()
{
}

//Places a transaction object into a vector.
void Account::record(Transaction _transaction)
{
    m_transaction_list.push_back(_transaction);
}

// Prints all transactions made in a 30 day limit.
// Also prints average and minimum balance. Calculates interest based on them.
void Account::print_transaction_list(int _day_amount)
{
   double total = 0;
   std::cout << std::fixed << std::setprecision(2);
   for(int i = 1; i <= _day_amount; i++)
   {
        std::cout << " ------------------------- " << std::endl;
        print_transactions_of_day(i);
        std::cout << std::setfill('-') << std::setw(10) << std::endl
                  << " Balance for day " << i << ": "
                  << get_balance_for_day(i) << std::endl;
   }

   std::cout << " ----------------------- " << std::endl;
   std::cout << " Minimum Daily Balance: " << get_minimum_balance(30)
   << "   " << "Interest: " << get_minimum_balance(30) * .005 << std::endl;
   std::cout << " Average Daily Balance: " << get_average_balance(30) 
   << "   " << "Interest: " << get_average_balance(30) * .005 << std::endl;
}


//Prints information of a transactions that are made in a certain day.
//@Param int day to check for transactions.
void Account::print_transactions_of_day(int _day)
{
    if(day_has_transaction(_day))
    {
        std::cout << " Day     Amount     Description" << std::endl;
    }

    for(int j = 0; j < m_transaction_list.size(); j++)
    {
        if(m_transaction_list[j].get_day() == _day)
        {
            m_transaction_list[j].print();
        }
    }
}

//Checks if a transaction has been made on a certain day. Return true if
// one or more have been made.
//@Param day to be checked.
bool Account::day_has_transaction(int _day)
{
    for(int i = 0; i < m_transaction_list.size();i++)
    {
        if(m_transaction_list[i].get_day() == _day)
        {
            return true;

        }

    }
    return false;
}

// Returns the minimum daily balance
//@Param the amount of days to check
double Account::get_minimum_balance(int _day_amount)
{
    double total = 0;
    double lowest = -1;
    for(int i = 0; i < m_transaction_list.size(); i++)
    {
        total += m_transaction_list[i].get_amount();
        if(lowest == -1){ lowest = total;}
        else if(total < lowest){ lowest = total;}
    }
    return lowest;
}

double Account::get_average_balance(int _day_amount)
{
    double total = 0;
    for(int i = 1; i <= _day_amount;i++)
    {
        total += get_balance_for_day(i);
    }
    return total / _day_amount;
}
//Returns the balance of a certain day
//@param day to be checked
double Account::get_balance_for_day(int _day)
{
    double total = 0;
    for(int i = 0; i < m_transaction_list.size(); i++)
    {
       if(m_transaction_list[i].get_day() <= _day)
       {
            total += m_transaction_list[i].get_amount();
       }
    }
    return total;
}
