#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "Enter your choice:" << '\n';
        std::cout << "1. Show balance" << '\n';
        std::cout << "2. Deposit money" << '\n';
        std::cout << "3. Withdraw money" << '\n';
        std::cout << "4. Exit" << '\n';
        std::cin >> choice;

        std::cin.clear(); // รีเซ็ทสถานะข้อผิดพลาดเมื่อ input ล้มเหลว
        fflush(stdin); // ล้าง input buffer

        std::cout << "---------------------------------" << '\n';
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for use!" << '\n';
            break;
        default:
            std::cout << "invalid choice" << '\n';
            break;
        }
        std::cout << "---------------------------------" << '\n';

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    // setprecision เซ็ทว่าจะให้แสดงตำแหน่งทศนิยมกกี่ตำแหน่ง
    // std::fixed 
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << '\n'; 
}

double deposit()
{
    double amount = 0;
    
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if (amount >= 0)
    {
        return amount;
    }
    else 
    {
        std::cout << "That's not a valid amount!";
        return 0;
    }

    return amount;
}

double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter amount to be withdraw: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "insufficient funds" << '\n';
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That's not a valid amount" << '\n';
        return 0;
    }
    else 
    {
        return amount;
    }
}