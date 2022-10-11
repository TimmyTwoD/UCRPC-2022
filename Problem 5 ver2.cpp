#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>
#include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int input;
    int numCards;
    cin >> numCards;
    
    map<int, int> cringe;

    for (int i = 0; i < numCards; i++)
    {
        cin >> input;
        cringe[input]++;

    }

    for (auto it = cringe.begin(); it!=cringe.end(); it++)
    {
        cout << it->first << " " << it->second <<endl;
    }

    



    
    return 0;
}