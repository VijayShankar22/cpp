#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[], int n);

int main() {
    int i, n;
    cout << "Enter the size of the array: ";
    cin >> n;
    float data[n];
    
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; ++i) {
        cin >> data[i];
    }
    
    cout << "Standard deviation = " << calculateSD(data, n) << endl;

    return 0;
}

float calculateSD(float data[], int n) {
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    for (i = 0; i < n; ++i) {
        sum += data[i];
    }

    mean = sum / n;
    for (i = 0; i < n; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / n);
}
