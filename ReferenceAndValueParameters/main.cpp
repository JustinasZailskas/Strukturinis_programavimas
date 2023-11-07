#include <iostream>
using namespace std;

void funOne(int a, int& b, char v);
void funTwo(int&x, int y, char& w);

int main() {
    int num1, num2;
    char ch;
    num1 = 10;
    num2 = 15;
    ch = 'A';
    cout<<"Viduje main: num1 = "<<num1<<", num2 = "<<num2
        <<" ir ch = "<<ch<<endl;
    funOne(num1, num2, ch);

    cout<<"Po funkcijos funOne: num1 = "<<num1<<", num2 = "<<num2
        <<" ir ch = "<<ch<<endl;

    funTwo(num2, 25, ch);

    cout<<"Po funkcijos funTwo: num1 = "<<num1<<", num2 = "<<num2
        <<" ir ch = "<<ch<<endl;

    return 0;
}

void funOne(int a, int& b, char v)
{
    int one;
    one = a;
    a++;
    b = b * 2;
    v = 'B';
    cout<<"Funkcijoje funOne: a = "<<a<<", b = "<<b
        <<", v = "<<v<<", ir one = "<<one<<endl;
}
void funTwo(int& x, int y, char& w)
{
    x++;
    y = y * 2;
    w = 'G';
    cout<<"Funkcijoje funTwo: x = "<<x<<", y = "<<y
        <<", ir w = "<<w<<endl;
}