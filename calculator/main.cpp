#include <QCoreApplication>
#include <iostream>
using namespace std;

void add(){
    int first, second;
    cout<<"Enter a: "<<"\n";
    cin>>first;
    cout<<"Enter b: "<<"\n";
    cin>>second;
    cout<<"c = "<<first+second<<"\n";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    add();
    return a.exec();
}
