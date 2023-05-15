#include <iostream>
using namespace std;
int sort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) { 
        for(int j = 0; j < n - i - 1; j++) { 
            if(a[j] > a[j+1]) {  
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return 0;
}
int main() {
    int a[] = {1,3,2,8,4,6,5,7};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
