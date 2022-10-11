
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int money;
    int numItems;
    int items;
    int counter = 0;

    vector<int> List;

    cin >> money >> numItems;

    for (int i = 0; i < numItems; i++)
    {
        cin >> items;
        List.push_back(items);
    }

    sort(List.begin(), List.end());

    while (money > 0)
    {
        money = money - List[counter];

        if (money > 0)
        {
            counter++;
        }
        else
            break;
    }

    cout << counter << endl;

    return 0;
}