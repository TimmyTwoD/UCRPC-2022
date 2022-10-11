#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    int b;
    int r;
    int n;

    int c;
    int d;

    cin >> a>>b>>r>>n;

    for (int i =0; i < n; i++)
    {
        cin >> c >> d;

        if (r >= sqrt(pow(a-c,2) + pow(b-d,2)))
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    


    return 0;
}