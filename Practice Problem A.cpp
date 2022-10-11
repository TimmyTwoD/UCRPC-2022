// Your First C++ Program

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<string> G;
    vector<string> H;
    vector<string> R;
    vector<string> S;
    
    int numStudents;
    
    string name;
    string house;

    cin >> numStudents;

    for (int i = 0; i < numStudents; i++)
    {
        cin >> name >> house;

        if (house == "Gryffindor")
        {
        G.push_back(name);
        }
        else if (house == "Hufflepuff")
        {
        H.push_back(name);
        }
        else if (house == "Ravenclaw")
        {
        R.push_back(name);
        }
        else if (house == "Slytherin")
        {
        S.push_back(name);
        }
    }

    sort(G.begin(),G.end());
    sort(H.begin(),H.end());
    sort(R.begin(),R.end());
    sort(S.begin(),S.end());

    cout << "Gryffindor"<<endl;
    for (int i = 0; i < G.size(); i++)
    {
        cout<<G[i]<<endl;
    }
    cout << "Hufflepuff"<<endl;
    for (int i = 0; i < H.size(); i++)
    {
        cout<<H[i]<<endl;
    }
    cout<<"Ravenclaw"<<endl;
    for (int i = 0; i < R.size(); i++)
    {
        cout<<R[i]<<endl;
    }
    cout<<"Slytherin"<<endl;
    for (int i = 0; i < S.size(); i++)
    {
        cout<<S[i]<<endl;
    }

    return 0;
}