#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class B1
{   
    public:
        int Choice;
        static int Laptop ;
        static int Television ;
        static int Mobile ;
        int lapPrice = 2000;
        int TelevisionPrice = 12999;
        int MobilePrice = 499;
    
    public:
        int printGrid()
        {
            cout<<"------------------------------------------------------"<<endl;
            cout<<"   S.No.        |   Items               |  Price      "<<endl;
            cout<<"------------------------------------------------------"<<endl;
            cout<<"    1.          |   Laptop              |  $2000      "<<endl;
            cout<<"    2.          |   Television          |  $12999     "<<endl;
            cout<<"    3.          |   Mobile              |  $499       "<<endl;
            cout<<"\n";
            cout<<"Choose the S.No. of Item to Add to your Cart: ";
            cin>>Choice;
            if (Choice >3)
                cout<<"Not Valid Response "<<endl;
            return Choice;
        }
        void Quantity(int Choice)
        {
            if (Choice == 1)
            {
                Laptop = Laptop + 1;
            }
            else if (Choice == 2)
            {
                Television = Television + 1;
            }
            else if (Choice == 3)
            {
                Mobile +=1;
            }

        }

        
};

int B1::Laptop = 0;
int B1::Television = 0;
int B1::Mobile = 0;

class B2 : B1
{
    public:
        void printBill()
        {
            int laptopTotalPrice = (B1::lapPrice) * (B1::Laptop);
            int televisionToatalPrice = (B1::TelevisionPrice) * (B1::Television);
            int mobileTotalPrice = (B1::MobilePrice) * (B1::Mobile);
            int TotalPrice = laptopTotalPrice + televisionToatalPrice + mobileTotalPrice;
            cout<<"\n";
            cout<<"                       BILL                      "<<endl;
            cout<<"================================================="<<endl;
            cout<<"   Item            | Quantity       |        Total  "<<endl;
            cout<<"================================================="<<endl;
            cout<<"   Laptop          |"<<"    "<< B1::Laptop<<"           |" <<"   $"<<laptopTotalPrice<<endl;
            cout<<"   Tv              |"<<"    "<< B1::Television<<"           |"<<"   $"<<televisionToatalPrice<<endl;
            cout<<"   Mobile          |"<<"    "<< B1::Mobile<<"           |" <<"   $"<<mobileTotalPrice<<endl;
            cout<<"================================================="<<endl;
            cout<<"                             Total = $"<<TotalPrice<<endl;
        }
};
void clearScreen() {
    system("clear");
}
int main()
{
    char status = 'y';
    while(status == 'y')
    {
        system("cls");
        B1 b1;
        int choice = b1.printGrid();
        cout<<"Do you want to continue[y/n]: ";
        cin>>status;
        b1.Quantity(choice);
        if (status !='y')
            break;
        
        
    }
    system("cls");
    B2 b2;
    b2.printBill();
}