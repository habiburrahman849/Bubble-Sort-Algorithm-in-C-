#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n)
 {
    // Outer loop: Controls number of passes (n-1 passes required)
    for(int i = 0; i < n-1; i++) {
        
        // Flag to optimize - check if any swap happened
        bool isSwap = false;
        
        // Inner loop: Compare adjacent elements
        // n-i-1 because after each pass, last i elements are already sorted
        for(int j = 0; j < n-i-1; j++) {
            
            // If current element is greater than next element, swap them
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true; // Mark that a swap occurred
            }
        }
        
        // Optimization: If no swap happened, array is sorted
        if(!isSwap) {
            break;
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int n;
    
    // Input: Array size
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    // Input: Array elements
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Display original array
    cout << "\nOriginal Array: ";
    printArray(arr, n);
    
    // Call bubble sort function
    bubbleSort(arr, n);
    
    // Display sorted array
    cout << "Sorted Array: ";
    printArray(arr, n);
    
    return 0;
}
