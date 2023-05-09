#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void removeDuplicates(vector<int>& v){
    // Mengurutkan vektor untuk memudahkan penghapusan elemen yang duplikat
    sort(v.begin(), v.end());

    // Menghapus elemen yang duplikat
    v.erase(unique(v.begin(), v.end()), v.end());

}
int main() {
    vector<int> v = {1, 2, 2, 3, 4, 5, 5};

removeDuplicates(v);
    // Menampilkan isi vektor yang sudah dihapus elemen duplikatnya
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

