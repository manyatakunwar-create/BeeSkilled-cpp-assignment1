#include<iostream>
using namespace std;

class calculator
{
    int x,y;
    public:
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"Y="<<y<<endl;
        cout<<"SUM= "<<sum()<<endl;
        cout<<"DIFFERENCE= "<<diff()<<endl;
        cout<<"MULTIPLICATION= "<<mult()<<endl;
        cout<<"DIVISION= "<<div()<<endl;
    }
    int sum()
    {
        return(x+y);
    }
    int diff()
    {
        return(x-y);
    }
    int mult()
    {
        return(x*y);
    }
    float div()
    {
        return(float(x/y));
    }
    void getdata()
    {
        cout<<"ENTER TWO NUMBERS"<<"\n ";
        cin>>x>>y;
    }
    
};
int main()
{
  calculator obj;
    obj.getdata();
    obj.display();
}
