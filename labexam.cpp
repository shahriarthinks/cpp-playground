#include <iostream>
using namespace std;

int main() {
    int totalBooks = 10;
    float ratings[totalBooks];
    float sum = 0;
    int highlyRated = 0, needsImprovement = 0;

    cout << "Enter ratings for " << totalBooks << " books:\n";

    for (int i = 0; i < totalBooks; i++) {
        cin >> ratings[i];

        sum += ratings[i];

        if (ratings[i] >= 6) {
            highlyRated++;
        } else {
            needsImprovement++;
        }
    }

    float averageRating = sum / totalBooks;

    cout << "\nAverage Rating: " << averageRating << endl;
    cout << "No.of Highly Rated Books: " << highlyRated << endl;
    cout << "No.of Books That Needs Improvement: " << needsImprovement << endl;

    return 0;
}
