//18-2
#include<iostream>
#include"header.h"
using namespace std;

int main()
{
    Product* p1 = new Product("toothbrush", 3000);
    Product* p2 = new DiscountProduct("toothbrush", 3000, 15);
    cout << p1->getPrice() << endl;
    cout << p2->getPrice() << endl;
}