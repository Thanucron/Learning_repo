// Stwórz zmienną globalną Vdolce i przypisz im wartość 0. Następnie utwórz
// funkcję sprawdz_vdolce, która sprawdzi stan Twoich pieniędzy. Jeżeli masz 0
// to powinien pojawić się napis “Ale z Ciebie bambik, nie masz Vdolców”,
// natomiast w przeciwnym razie informacja o ilości Vdolców. Utwórz również
// funkcję cheaty, która wykona to samo, ale najpierw utwórz w niej zmienną
// lokalną Vdolce i przypisz do niej 1000.

#include <iostream>

int vbucks = 0;

void check_balance()
{
    if (vbucks == 0)
    {
        std::cout << "Ale z Ciebie bambik, nie masz Vdolców";
    }
    else
    {

        std::cout << "You've got " << vbucks;
    }
}

int hacks()
{
    vbucks = 1000;
    return vbucks;
}

int main()
{
    hacks();
    check_balance();
    return 0;
}