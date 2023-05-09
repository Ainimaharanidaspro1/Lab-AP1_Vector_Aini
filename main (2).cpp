#include <iostream>
using namespace std;
int countFrequency(int arr[], int size, int n) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 3; //isi n untuk mencari angka yg ingin dicari frekuensinya
   
    int frequency = countFrequency(arr, size, n);
    
    if (frequency == 0) {
        cout << "Angka tidak ditemukan" << endl;
    } else {
        cout << "Frekuensi dari " << n << " pada array adalah " << frequency << endl;
    }
    
    return 0;
}

