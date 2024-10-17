#include <iostream>
using namespace std;
class Stekas {
private:
    int top;
    int* mas;
    int size;
public:
    //konstruktorius
    Stekas(int x) : top(-1), mas(new int [x]), size(x) {}
    //metodas elemento pridejimui i steka
    void push(int el) {
        if (!isFull())
        {
            top = top + 1;
            mas[top] = el;
        }
        else {
            std::cout << "Daugiau elementu PRIDETI negalima! \n";
        }
    }

    //metodas elemento pasalinimui is steko
    int pop() {
        if (!isEmpty())
        {
            int temp = top;
            top = top - 1;
            return mas[temp];
        }
        else {
            std::cout << "Daugiau elementu ISIMTI negalima! \n";
        }
    }

    //metodas, kuri isspausdina virsutini steko elementa
    int topEl() {
        return mas[top];
    }

    //patikrinti, ar stekas tuscias
    bool isEmpty() {
        if (top == -1) return true;
        else return false;
    }

    //patikrinti, stekas pilnas
    bool isFull() {
        if (top == size - 1) return true;
        else return false;
    }

    /*void display() {
        while (top >= 0) {
            std::cout << mas[top] << " ";
            top--;
        }
        cout << "\n";
    }*/
};

//funkcija parodyti visus steko elementus (NE KLASES VIDUJE)
void display(Stekas &stekas) {
    cout << "Steko elementai: ";
    while (!stekas.isEmpty())
    {
        std::cout << stekas.pop() << " ";
    }
    cout << "\n";
}
//funkcija istrinanti visus steko elementus (NE KLASES VIDUJE)
void clear(Stekas& stekas)

{
    while (!stekas.isEmpty())
    {
        stekas.pop();
    }
    cout << "Visi steko elementai pasalinti! \n";
}
