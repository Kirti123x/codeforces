#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void game_winner(int t) {
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> apples(n);
        int max_apples = 0, min_apples = 1e9;
        long long total_apples = 0;

        // Read the number of apples in each box and compute max, min, and total apples
        for (int i = 0; i < n; i++) {
            cin >> apples[i];
            max_apples = max(max_apples, apples[i]);
            min_apples = min(min_apples, apples[i]);
            total_apples += apples[i];
        }

        // Check if the difference between max and min apples exceeds k
        if (max_apples - min_apples > k) {
            cout << "Jerry\n";
        } else {
            // If total apples are odd, Tom wins, otherwise Jerry wins
            if (total_apples % 2 == 1) {
                cout << "Tom\n";
            } else {
                cout << "Jerry\n";
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    game_winner(t);
    
    return 0;
}
