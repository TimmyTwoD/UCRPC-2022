#include <iostream>
#include <string>

using namespace std;

int main() {
    string team1;
    string team2;

    int score1 = 0;
    int score2 = 0;

    string input;

    cin >> team1 >> team2;
    
    while (input.length() < 12)
    {
        getline(cin, input);

        if (input == team1)
        {
            score1 += 10;
        }

        if (input == team2)
        {
            score2 += 10;
        }

        else if (input.length() > 12)
        {
            if (input.at(0) == team1.at(0))
            {
                score1 +=150;
            }

            if (input.at(0) == team2.at(0))
            {
                score2 +=150;
            }
        }
    }

    if (score1 == score2)
    {
        cout << "Tie" <<endl;
        cout << score2 << "-"<< score1 << endl;
    }
    else if (score1 > score2)
    {
        cout << team1 << " wins" << endl;
        cout << score1 << "-"<< score2 << endl;
    }
    else if (score1 < score2)
    {
        cout << team2 << " wins" << endl;
        cout << score2 << "-"<< score1 << endl;
    }
    


    return 0;
}