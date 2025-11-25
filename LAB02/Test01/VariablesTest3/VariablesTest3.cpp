#include <iostream>
#include <string>

int main() {
    std::string itemName;
    double price;
    int quantity;

    std::cout << "Enter item name: ";
    std::getline(std::cin, itemName);

    std::cout << "Enter price: ";
    std::cin >> price;

    std::cout << "Enter quantity: ";
    std::cin >> quantity;
    std::cout << std::endl;
    std::cout << "-------Receipt-------" << std::endl;
    std::cout << "Item name    :    " << itemName << std::endl;
    std::cout << "Price        :    " << price << std::endl;
    std::cout << "Quantity     :    " << quantity << std::endl;
    std::cout << "Total        :    " << price * quantity << std::endl;
    std::cout << "---------------------" << std::endl;

    return 0;
}
