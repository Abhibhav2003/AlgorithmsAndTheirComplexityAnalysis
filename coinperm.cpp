#include <iostream>
#include <vector>

using namespace std;

int coinPermutations(vector<int>& coins, int amount) {
    if (amount == 0) // Base case: amount becomes 0, one permutation found
        return 1;
    
    int permutations = 0;
    for (int coin : coins) {
        if (amount - coin >= 0) {
            permutations += coinPermutations(coins, amount - coin);
        }
    }
    return permutations;
}

int main() {
    vector<int> coins = {1, 2, 5}; // Set of coins
    int amount = 5; // Desired amount

    int permutations = coinPermutations(coins, amount);

    cout << "Number of permutations to make " << amount << " using given coins: " << permutations << endl;

    return 0;
}
