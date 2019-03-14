#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int first_argument;
    int second_argument;

    cout << "첫번째 인수를 입력하세요:";
    cin >> first_argument;
    cout << "두번째 인수를 입력하세요:";
    cin >> second_argument;
    cout << first_argument << "*" << second_argument << '=' << first_argument * second_argument << endl;
    cout << first_argument << "+" << second_argument << '=' << first_argument + second_argument << endl;
    cout << first_argument << "-" << second_argument << '=' << first_argument - second_argument << endl;
    cout << first_argument << "/" << second_argument << '=' << first_argument / second_argument << endl;

}