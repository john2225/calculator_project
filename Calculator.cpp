#include "Calculator.h"

Calculator::Calculator() : m_x{0},
m_y{0},
m_result{0},
m_choice{'\0'}
{
}


double Calculator::add()
{
    return m_x + m_y;
}

double Calculator::subtract()
{
    return m_x - m_y;
}

double Calculator::multiple()
{
     return m_x * m_y;
}

double Calculator::divide()
{
    if(m_y != 0)
    {
        return m_x / m_y;
    }
        std:: cout << "Second number can not be 0 when dividing" << std:: endl;
    return -1;
}

double Calculator::modulo()
{
    return static_cast<int>(m_x) % static_cast<int>(m_y);
}

int Calculator::factorial()
{
    m_result = 1;
    for(int i = 1; i <= m_x; ++i)
    {
        m_result = m_result * i;
    }
    return m_result;
}

std::string Calculator::decimal_to_binary()
{
    std::string str;
    int num = static_cast<int>(m_x);
    
    while(num != 0)
    {
        str += (num % 2 == 0 ? "0" : "1");
        num /= 2;
    }
    return str;
}

void Calculator::takingNumbers()
{
    std::cout << "Number 1: ";
    std::cin >> m_x;
    std::cout << "Number 2: ";
    std::cin >> m_y;
}

void Calculator::takingNumber()
{
    std::cout << "Enter number: ";
    std::cin >> m_x;
}

void Calculator::menu()
{
    std::cout << "===============================================================" << std::endl;

    std::cout<< "                         MENU                                  " << std::endl;
    std::cout << "   1. Add" << std::endl;
    std::cout << "   2. Subtract" << std::endl;
    std::cout << "   3. Multiply" << std::endl;
    std::cout << "   4. Divide" << std::endl;
    std::cout << "   5. Modulo" << std::endl;
    std::cout << "   6. Factorial" << std::endl;
    std::cout << "   7. Decimal to Binary" <<std::endl;
    std::cout << "   8. Decimal to HexoDecimal" << std::endl;
    std::cout <<  "==============================================================="<<"\n";
       std::cout << std::endl;
        std::cout << "==============================================================="<<"\n";
        std::cout << std::endl;
        std::cout << std::endl;
}

void Calculator::driver()
{
    std::cout << "Enter your choice" << std::endl;
    std::cin >> menu_choice;
    switch(menu_choice)
    {
        case 1:
            takingNumbers();
            std::cout << "Result is: " << add() << std::endl;
            break;
        case 2:
            takingNumbers();
            std::cout << "Result is: " << subtract() << std::endl;
            break;
        case 3:
            takingNumbers();
            std::cout << "Result is: " << multiple() << std::endl;
            break;
        case 4:
            takingNumbers();
            std::cout << "Result is: " << divide() << std::endl;
            break;
        case 5:
            takingNumbers();
            std::cout << "Result is: " << modulo() << std::endl;
            break;
        case 6:
            takingNumber();
            std::cout << "Result is: " << factorial() << std::endl;
            break;
        case 7:
            takingNumber();
            std::cout << "Result is: " << decimal_to_binary() << std::endl;
            break;
        default:
            std::cout << "Invalid input. Try again! " << std::endl;
        }
}

void Calculator::driver2()
{
    do
    {
        driver();
        std::cout << "Do you want to continue ? Y/N" << std::endl;
        std::cin >> m_choice;
    }
        while((m_choice == 'Y') || (m_choice == 'y'));
    
}
