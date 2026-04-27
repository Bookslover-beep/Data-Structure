#include<iostream>
using namespace std;

int main() {
int i, n, ch;
char x;
int sum, sub, min, max;

cout << "Enter number of elements: ";
cin >> n;

int a[n];

    do {
        cout << "\n---Menu---";
        cout << "\n1.Create";
        cout << "\n2.Display";
        cout << "\n3.Addition";
        cout << "\n4.Subtraction";
        cout << "\n5.Minimum";
        cout << "\n6.Maximum";
        cout << "\n7.Enter your choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                cout << "Enter elements:\n";
                for(i = 0; i < n; i++) {
                    cin >> a[i];
                }
                break;

            case 2:
                cout << "Array elements:\n";
                for(i = 0; i < n; i++) {
                    cout << a[i] << " ";
                }
                break;

            case 3:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += a[i];
                }
                cout << "\nAddition is: " << sum;
                break;

            case 4:
                sub = a[0];
                for(i = 1; i < n; i++) {
                    sub -= a[i];
                }
                cout << "\nSubtraction is: " << sub;
                break;

            case 5:
                min = a[0];
                for(i = 1; i < n; i++) {
                    if(min > a[i]) {
                        min = a[i];
                    }
                }
                cout << "\nMinimum: " << min;
                break;

            case 6:
                max = a[0];
                for(i = 1; i < n; i++) {
                    if(max < a[i]) {
                        max = a[i];
                    }
                }
                cout << "\nMaximum: " << max;
                break;

            default:
                cout << "\nInvalid choice";
        }

        cout << "\nDo you want to continue? (Y/N): ";
        cin >> x;

    } while(x == 'Y' || x == 'y');

    return 0;
}
