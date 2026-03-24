#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<double> x = {1,2,3,4,5};
    vector<double> y = {2,4,5,4,5};

    int n = x.size();

    double sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0;

    for(int i = 0; i < n; i++)
    {
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }

    double m = (n * sumxy - sumx * sumy) /
               (n * sumx2 - sumx * sumx);

    double b = (sumy - m * sumx) / n;

    cout << "Slope (m): " << m << endl;
    cout << "Intercept (b): " << b << endl;

    double test_x = 6;
    double prediction = m * test_x + b;

    cout << "Prediction for x=6 : " << prediction << endl;
}