#include <QCoreApplication>
#include <iostream>
#include <string>

void printName(){
    std::string userName;
    std::cout<<"Enter your full name: ";
    std::getline(std::cin, userName);
    std::cout<<"Hello, "<< userName<< "\n";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printName();

    return a.exec();
    // return 0;
}
