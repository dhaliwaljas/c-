#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    ifstream file;
    file.open("input.txt");

    string languageName;
    double score1, score2, score3;

    string bestLangName;
    double bestAverageScore;

    while (file >> languageName >> score1 >> score2 >> score3) {
        double currentAverageScore = (score1 + score2 + score3)/3;
        if (bestAverageScore < currentAverageScore) {
            bestAverageScore = currentAverageScore;
            bestLangName = languageName;
        }
    }

    cout << "The best average is " << bestAverageScore << " for " << bestLangName << "." << endl;
    if (bestAverageScore >= 80) {
       cout << "The candidate is selected for the job.";
    } else {
        cout << "The candidate is not selected for the job.";
    }
    
    file.close();
}