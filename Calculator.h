#ifndef __Calculator__
#define __Calculator__
#include <iostream>
#include <string>

class Calculator
{
    
public:
    Calculator();
    ~Calculator() = default; /* c++11 */
    
public:
    void menu();
    
    void driver2();
    
private:
    double add();
    double subtract();
    double multiple();
    double divide();
    double modulo();
    int factorial();
    std::string decimal_to_binary();
    void takingNumbers();
    void takingNumber();
    void driver();

private:
    double m_x;
    double m_y;
    int menu_choice;
    double m_result;
    char m_choice;
};

#endif
