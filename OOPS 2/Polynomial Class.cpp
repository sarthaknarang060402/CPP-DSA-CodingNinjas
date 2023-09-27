
/*************
 Driver program to test below functions

int main()
{
    int count1,count2,choice;
    cin >> count1;

    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }

    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }

    cin >> count2;

    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }

    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }

    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }

    cin >> choice;

    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;

        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }

        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }

    }

    return 0;
}
****************/

class Polynomial
{
public:
    int *degCoeff;
    int cap;

    Polynomial()
    {
        cap = 5;
        degCoeff = new int[cap];
        for (int i = 0; i < cap; i++)
        {
            degCoeff[i] = 0;
        }
    }

    Polynomial(Polynomial const &p2) // custom copy constructor
    {
        cap = p2.cap;
        degCoeff = new int[cap];
        for (int i = 0; i < cap; i++)
        {
            degCoeff[i] = p2.degCoeff[i];
        }
    }

    void operator=(Polynomial const &p2)
    {
        cap = p2.cap;
        degCoeff = new int[cap];
        for (int i = 0; i < cap; i++)
        {
            degCoeff[i] = p2.degCoeff[i];
        }
    }

    void setCoefficient(int deg, int coeff)
    {
        if (deg >= cap)
        {
            int *newdegCoeff = new int[deg + 1];
            for (int i = 0; i < deg + 1; i++)
            {
                newdegCoeff[i] = 0;
            }
            for (int i = 0; i < cap; i++)
            {
                newdegCoeff[i] = degCoeff[i];
            }
            delete[] degCoeff;
            degCoeff = newdegCoeff;
            cap = deg + 1;
        }
        degCoeff[deg] = coeff;
    }

    Polynomial operator+(Polynomial const &p2)
    {
        Polynomial sum;
        int i = 0;
        while (i < cap && i < p2.cap)
        {
            sum.setCoefficient(i, degCoeff[i] + p2.degCoeff[i]);
            i++;
        }
        while (i < cap)
        {
            sum.setCoefficient(i, degCoeff[i]);
            i++;
        }
        while (i < p2.cap)
        {
            sum.setCoefficient(i, p2.degCoeff[i]);
            i++;
        }
        return sum;
    }

    Polynomial operator-(Polynomial const &p2)
    {
        Polynomial sub;
        int i = 0;
        while (i < cap && i < p2.cap)
        {
            sub.setCoefficient(i, degCoeff[i] - p2.degCoeff[i]);
            i++;
        }
        while (i < cap)
        {
            sub.setCoefficient(i, degCoeff[i]);
            i++;
        }
        while (i < p2.cap)
        {
            sub.setCoefficient(i, -p2.degCoeff[i]);
            i++;
        }
        return sub;
    }

    int getCoeff(int deg)
    {
        if (deg >= cap)
            return 0;
        return degCoeff[deg];
    }
    Polynomial operator*(Polynomial const &p2)
    {
        Polynomial mul;
        for (int i = 0; i < cap; i++)
        {
            for (int j = 0; j < p2.cap; j++)
            {
                int deg = i + j;
                int coeff = mul.getCoeff(deg) + degCoeff[i] * (p2.degCoeff[j]);
                mul.setCoefficient(deg, coeff);
            }
        }
        return mul;
    }
    void print()
    {
        for (int i = 0; i < cap; i++)
        {
            if (degCoeff[i] != 0)
                cout << degCoeff[i] << "x" << i << " ";
        }
    }
};
