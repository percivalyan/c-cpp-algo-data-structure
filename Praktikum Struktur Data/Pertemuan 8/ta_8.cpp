#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSortMax(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortMin(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; i++) {
    	cout << "Elemen " << i <<" sebesar ";
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "Menu Sorting:" << endl;
        cout << "1. Sorting Maximum Menaik" << endl;
        cout << "2. Sorting Maximum Menurun" << endl;
        cout << "3. Sorting Minimum Menaik" << endl;
        cout << "4. Sorting Minimum Menurun" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bubbleSortMax(arr, n);
                cout << "Array yang diurutkan (Maksimum Menaik): ";
                displayArray(arr, n);
                break;
            case 2:
                bubbleSortMin(arr, n);
                cout << "Array yang diurutkan (Maksimum Menurun): ";
                displayArray(arr, n);
                break;
            case 3:
                bubbleSortMax(arr, n);
                cout << "Array yang diurutkan (Minimum Menaik): ";
                displayArray(arr, n);
                break;
            case 4:
                bubbleSortMin(arr, n);
                cout << "Array yang diurutkan (Minimum Menurun): ";
                displayArray(arr, n);
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (choice != 5);

    return 0;
}

