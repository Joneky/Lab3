#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
float x, y;
int c;
string s;
float probeg(float a)
{
    float y;
    if (x >= -3 && x < -2) {
        y = -2 - x;
        cout << y;
    } else if (x >= -2 && x < -1) {
        y = sqrt(1 - (x + 1) * (x + 1));
        cout << y;
    } else if (x >= -1 && x < 1) {
        y = 1;
        cout << -y;
    } else if (x >= 1 && x < 2) {
        y = -x + 1;
        cout <<  y;
    } else if (x >= 2 && x <= 5) {
        y = -1;
        cout <<  y;
    } else {
        cout << endl;
    }
    return y;
};

int main()
{
    // Код для вычисления Y при X для 16 варианта
    ofstream prout("text2.txt");

    x = -3;
    c = 1;
    for (x; x < 6; x++)
    {
        prout << c << " ";
        c++;
        y = probeg(x);
        prout << y << "\n";
    }
    prout.close();
    ifstream prin("text2.txt");
    while (getline(prin, s))
    {
        cout << s;
        cout << "\n";
    };
    prin.close();
}