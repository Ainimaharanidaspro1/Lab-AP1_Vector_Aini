#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Fungsi untuk memindahkan angka 0 ke kiri dan mengurutkan angka dari terkecil ke terbesar
void sortNonZero(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[count]);
            count++;
        }
    }
    sort(nums.begin(), nums.end()); //mengurutkan angka dari terkecil ke terbesar
}

int main() {
    vector<int> nums = {1, 2, 3, 0, 4, 5, 0, 0}; // vector awal
    sortNonZero(nums); // panggil fungsi untuk memindahkan angka 0 ke kiri dan mengurutkan angka dari terkecil ke terbesar
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " "; //menampilkan vektor hasil
    }
    cout << endl;
    return 0;
}

