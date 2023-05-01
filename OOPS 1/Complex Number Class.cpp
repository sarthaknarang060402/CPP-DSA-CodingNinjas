/**********

Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.


int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }

}

 ************/

#include <bits/stdc++.h>
class ComplexNumbers
{
    // Complete this class
    int R;
    int I;

public:
    ComplexNumbers(int R, int I)
    {
        this->R = R;
        this->I = I;
    }
    void plus(ComplexNumbers const &c2)
    {
        this->R += c2.R;
        this->I += c2.I;
    }
    void multiply(ComplexNumbers const &c2)
    {
        int a1 = this->R;
        int a2 = c2.R;
        int b1 = this->I;
        int b2 = c2.I;

        this->R = (a1 * a2) - (b1 * b2);
        this->I = a1 * b2 + a2 * b1;
    }
    void print()
    {
        if (this->I > 0)
            cout << this->R << " + i" << this->I;
        else if (this->I == 0)
            cout << this->R;
        else
            cout << this->R << " - i" << abs(this->I);
    }
};