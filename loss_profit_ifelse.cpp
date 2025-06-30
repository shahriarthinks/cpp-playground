#include <iostream>
using namespace std;

int main() {
    float buyingPrice, sellingPrice;

    // Input: Buying price and selling price
    cout << "Enter the buying price of the item: ";
    cin >> buyingPrice;
    cout << "Enter the selling price of the item: ";
    cin >> sellingPrice;

    // Check for profit or loss
    if (sellingPrice > buyingPrice) {
        // Profit case
        float profit = sellingPrice - buyingPrice;
        cout << "You made a profit of " << profit << " units." << endl;
    } else if (sellingPrice < buyingPrice) {
        // Loss case
        float loss = buyingPrice - sellingPrice;
        cout << "You incurred a loss of " << loss << " units." << endl;
    } else {
        // No profit, no loss
        cout << "There is no profit or loss. You broke even." << endl;
    }

    return 0;
}
