#include <iostream>
using namespace std;

int getValue()
{
    int opt{}; // opt => option
    cout << "ASCII code to symbol (1), symbol to ASCII code (2): ";
    cin >> opt;
    return opt;

}
void asc() //ASCII code to symbol
{
    int code{};
    cout << "Enter ASCII code: ";
    cin >> code;
    cout << "Symbol: " << static_cast<char>(code) << endl;
}

void sym() //Symbol to ASCII code
{
    char symbol{};
    cout << "Enter symbol: ";
    cin >> symbol;
    cout << "ASCII code: " << static_cast<int>(symbol) << endl;
}

int main()
{
Again:
    char back{};
    int opt{getValue()};
    if (opt == 1)
        asc();
    else if (opt == 2)
        sym();
    else
        cout << "Error" << endl;

    cout << "Again? y/n" << endl;
    cin >> back;
    if (back == 'y')
        goto Again;
    else if (back == 'n')
        return 0;
    else
        return 0;
}
