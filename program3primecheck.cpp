#include <iostream>
using namespace std;

class primecheck
{
private:
    int n;         

public:
    void input()
    {
        cout << "Enter an element: ";
        cin >> n;
    }

    int isPrime()
    {
        if(n<=1)
        return 0;
        for(int i=2; i*i<=n;i++)
            if(n%i==0)
                return false;
        else
                return true;
    }
        

    void display()
{
    if(isPrime())
        cout <<n<<"is a Prime number."<< endl;
    else
        cout <<n<<"is not a Prime number" << endl;
}
};

int main()
    {
    primecheck obj;
    obj.input();
    obj.display();
}
