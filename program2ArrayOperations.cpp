#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100];
    int n = 0;         

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    int getSum() {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }

    double getAverage() {
       if(n!=0)
           return(double)getSum()/n;
     else
           return 0;
    }

    void display() {
        cout << "Sum = " << getSum() << endl;
        cout << "Average = " << getAverage() << endl;
    }
};

int main() {
    ArrayOperations obj;
    obj.input();
    obj.display();
    return 0;
}
