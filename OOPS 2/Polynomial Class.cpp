
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
    int capacity;
    Polynomial()
    {
        this->capacity = 5;
        this->degCoeff = new int[capacity];

        for (int i = 0; i < capacity; i++)
        {
            this->degCoeff[i] = 0;
        }
    }

    Polynomial(Polynomial const &P)
    {
        this->capacity = P.capacity;
        this->degCoeff = new int[this->capacity];
        for (int i = 0; i < capacity; i++)
        {
            this->degCoeff[i] = P.degCoeff[i];
        }
    }
    void operator=(Polynomial const &P)
    {
        this->capacity = P.capacity;
        this->degCoeff = new int[this->capacity];
        for (int i = 0; i < this->capacity; i++)
        {
            this->degCoeff[i] = P.degCoeff[i];
        }
    }
    void setCoefficient(int degree, int coefficient)
    {
        if (degree >= capacity)
        {

            int *newdegCoeff = new int[degree + 1];
            for (int i = 0; i < degree + 1; i++)
            {
                newdegCoeff[i] = 0;
            }
            for (int i = 0; i < capacity; i++)
            {
                newdegCoeff[i] = degCoeff[i];
            }
            delete[] degCoeff;
            degCoeff = newdegCoeff;
            capacity = degree + 1;
        }
        degCoeff[degree] = coefficient;
    }
    Polynomial operator+(Polynomial const &p)
    {
        int h = max(this->capacity, (p.capacity));
        int l = min(this->capacity, (p.capacity));
        Polynomial p3;
        p3.setCoefficient(h - 1, 0);

        if (h == l)
        {
            for (int i = 0; i < h; i++)
            {
                p3.degCoeff[i] = this->degCoeff[i] + p.degCoeff[i];
            }
        }
        else
        {
            for (int i = 0; i < l; i++)
            {
                p3.degCoeff[i] = this->degCoeff[i] + p.degCoeff[i];
            }

            if (p.capacity > this->capacity)
            {
                for (int i = l; i < h; i++)
                {
                    p3.degCoeff[i] = p.degCoeff[i];
                }
            }
            if (p.capacity < this->capacity)
            {
                for (int i = l; i < h; i++)
                {
                    p3.degCoeff[i] = this->degCoeff[i];
                }
            }
        }
        return p3;
    }
    Polynomial operator-(Polynomial const &p)
    {
        int h = max(this->capacity, (p.capacity));
        int l = min(this->capacity, (p.capacity));
        Polynomial p3;
        p3.setCoefficient(h - 1, 0);

        if (h == l)
        {
            for (int i = 0; i < h; i++)
            {
                p3.degCoeff[i] = this->degCoeff[i] - p.degCoeff[i];
            }
        }
        else
        {
            for (int i = 0; i < l; i++)
            {
                p3.degCoeff[i] = this->degCoeff[i] - p.degCoeff[i];
            }

            if (p.capacity > this->capacity)
            {
                for (int i = l; i < h; i++)
                {
                    p3.degCoeff[i] = -p.degCoeff[i];
                }
            }
            if (p.capacity < this->capacity)
            {
                for (int i = l; i < h; i++)
                {
                    p3.degCoeff[i] = this->degCoeff[i];
                }
            }
        }
        return p3;
    }
    Polynomial operator*(Polynomial const &p)
    {
        Polynomial p3;
        p3.setCoefficient(((this->capacity - 1) * (p.capacity)), 0);
        Polynomial temp;
        temp.setCoefficient(((this->capacity - 1) * (p.capacity)), 0);
        int i = 0;
        while (i < this->capacity)
        {
            int j = 0;
            while (j < p.capacity)
            {
                temp.degCoeff[i + j] = (this->degCoeff[i]) * (p.degCoeff[j]);
                j++;
            }
            p3 = p3 + temp;
            i++;
        }
        return p3;
    }
    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degCoeff[i] != 0)
                cout << degCoeff[i] << "x" << i << " ";
        }
        cout << endl;
    }
};
