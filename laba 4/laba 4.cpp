#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    const int n = 6;
    double a, b;
    double P[n] = { 0.0141, 0.0281, 0.0562, 0.1125, 0.225 ,0.27 };
    double V[n] = { 2.4, 3.5, 5, 6.89, 10, 11 };

    for (int i = 0; i < n; i++)
    {
        V[i] = V[i] * V[i];
        cout << V[i] << ", ";

    }

    double Vsum = 0, V2sum = 0, Psum = 0, PiVsum = 0;
    for (int i = 0; i < n; i++)
    {
        Vsum = Vsum + V[i];                        //calculate sigma(xi)
        Psum = Psum + P[i];                        //calculate sigma(yi)
        V2sum = V2sum + pow(V[i], 2);                //calculate sigma(x^2i)
        PiVsum = PiVsum + V[i] * P[i];                    //calculate sigma(xi*yi)
    }

    a = (n * PiVsum - Vsum * Psum) / (n * V2sum - Vsum * Vsum);            //calculate a
    b = (V2sum * Psum - Vsum * PiVsum) / (V2sum * n - Vsum * Vsum);            //calculate b


    cout << "a = ";
    cout << a;
    cout << endl;
    cout << "b = ";
    cout << b;
    cout << endl;

}
