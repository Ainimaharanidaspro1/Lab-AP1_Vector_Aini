#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 0, 4, 5,0,0}; // vector awal
    int count = 0;

    // Memindahkan angka 0 ke kiri
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[count]);
            count++;
        }
    }

    // Mengurutkan angka dari terkecil ke terbesar
    sort(nums.begin(), nums.end());

    // Menampilkan vektor hasil
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

