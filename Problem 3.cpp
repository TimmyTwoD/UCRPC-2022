#include <iostream>

using namespace std;

int main() {
    
    int students;
    int school;
    int score;

    int highscore1 =0;
    int highscore2 =0;
    int highscore3= 0;

    int studentNum1;
    int studentNum2;
    int studentNum3;

    cin >> students;

    for (int i = 0; i < students; i++)
    {
        cin >> school;
        if (school == 1)
        {
            cin >> score;
            if (score > highscore1)
            {
                studentNum1 = i + 1;
                highscore1 = score;
            }
        }
        else if (school == 2)
        {
            cin >> score;
            if (score > highscore2)
            {
                studentNum2 = i + 1;
                highscore2 = score;
            }
        }
        else if (school == 3)
        {
            cin >> score;
            if (score > highscore3)
            {
                studentNum3 = i + 1;
                highscore3 = score;
            }
        }
        
    }

    cout << studentNum1 <<endl<<studentNum2<<endl<<studentNum3<<endl;


    return 0;
}