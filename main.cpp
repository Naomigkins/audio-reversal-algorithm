#include <iostream>
#include <vector>
#include <chrono> // For tracking true runtime

using namespace std;
using namespace std::chrono;

// PART 1: The In-Place Reversal Algorithm
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap elements using a single temp variable (In-place)
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

// PART 3: Tool to track runtime
void trackRuntime(int n) {
    int* arr = new int[n];
    for(int i = 0; i < n; i++) arr[i] = i; // Fill array

    auto start = high_resolution_clock::now();
    reverseArray(arr, n);
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Array Size: " << n << " | Runtime: " << duration.count() << " microseconds" << endl;
    
    delete[] arr; // Clean up memory
}

int main() {
    // Testing the logic for the Professor
    int testArr[] = {1, 2, 3, 4, 5};
    cout << "Original: [1,2,3,4,5]" << endl;
    reverseArray(testArr, 5);
    cout << "Reversed: [";
    for(int i=0; i<5; i++) cout << testArr[i] << (i==4 ? "" : ",");
    cout << "]" << endl << endl;

    // Running Part 3 requirements
    trackRuntime(500);
    trackRuntime(1500);
    trackRuntime(2500);

    return 0;
}
