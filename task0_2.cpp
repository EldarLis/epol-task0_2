#include <iostream>
#include <string>
using namespace std;

template <typename T> void myswap(T& x, T& y)
{
x = x + y;
y = x - y;
x = x - y;
}


int main()
{
    char type;

    bool checkmate = true;
    cout << "Enter type of variables by first letter (type h for full list) : ";

    while (checkmate) {
        cin >> type;
        switch (type) {
        case 'h':
            cout << "Thank you for using our help system!" << endl
                 << " i - int \n c - char \n f - float \n d - double \n"
                 << "Enter type of variables by first letter: ";
            break;

        case 'i':
        {
            int* ai = new int;
            int* bi = new int;
            cout << "Input two integers: ";
            cin >> *ai >> *bi;
            myswap(*ai, *bi);
            cout << "After swap: " << *ai << " " << *bi << endl;
            delete ai, bi;
            checkmate = false;
            break;
        }

        case 'c':
        {
            char* ac = new char;
            char* bc = new char;
            cout << "Input two chars: ";
            cin >> *ac >> *bc;
            myswap(*ac, *bc);
            cout << "After swap: " << *ac << " " << *bc << endl;
            delete ac, bc;
            checkmate = false;
            break;
        }

        case 'f':
        {
            float* af = new float;
            float* bf = new float;
            cout << "Input two floats: ";
            cin >> *af >> *bf;
            myswap(*af, *bf);
            cout << "After swap: " << *af << " " << *bf << endl;
            delete af, bf;
            checkmate = false;
            break;
        }

        case 'd':
        {
            double* ad = new double;
            double* bd = new double;
            cout << "Input two doubles: ";
            cin >> *ad >> *bd;
            myswap(*ad, *bd);
            cout << "After swap: " << *ad << " " << *bd << endl;
            delete ad, bd;
            checkmate = false;
            break;
        }

        default:
            cout << "\n Error in input. Try again." << endl
                 << " If you aren't sure what to input - try 'h'" << endl
                 << "Enter type of variables by first letter: ";
            break;
        }

    }

    return 0;
}


