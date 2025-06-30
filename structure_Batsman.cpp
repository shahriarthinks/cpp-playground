#include <iostream>
#include <string>

using namespace std;

struct Batsman
{
    string name;
    int id;
    int matchCount;
    int totalRun;


    void setDetails(int b_id, string b_name, int b_matchCount, int b_totalRun)
    {
        id = b_id;
        name = b_name;
        matchCount = b_matchCount;
        totalRun = b_totalRun;
    }


    void averageRun()
    {
        if (matchCount > 0)
        {
            double avg = static_cast<double>(totalRun) / matchCount;
            cout << "Average Run per Match: " << avg << endl;

            if (avg >= 40)
            {
                cout << "Bonus: Applicable" << endl;
            }
            else
            {
                cout << "Bonus: Needs Improvement" << endl;
            }
        }
        else
        {
            cout << "Match count is zero, cannot calculate average." << endl;
        }
    }


    void showDetails()
    {
        cout << "Batsman Details:" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matchCount << endl;
        cout << "Total Runs: " << totalRun << endl;
        averageRun();
    }
};

int main()
{

    Batsman b1;


    b1.setDetails(101, "Arif", 15, 500);


    b1.showDetails();

    return 0;
}
