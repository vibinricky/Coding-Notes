#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class ATM
{
private:
    int Amount, PIN;
    string Name, Number;
    long long int Account_num;
public:

    ATM()
    {
        Amount = 30000;
        PIN = 4444;
        Name = "Josh";
        Number = "9090209090";
        Account_num = 201000000039;
    }

    long long int getAccountNo()
    {
        return Account_num;
    }
    string getName()
    {
        return Name;
    }
    int getPIN()
    {
        return PIN;
    }
    int getBalance()
    {
        return Amount;
    }
    string getMobileNo()
    {
        return Number;
    }


    

    void check_balace()
    {
        cout << "Balace in your accout: "<<Amount <<endl;
    }
    void WithDraw(int x)
    {
        if ((x <= Amount) && (x > 0))
        {
            Amount = Amount - x;
            cout << endl << "Please Collect your cash";
            cout << endl << "Availabe Balance: "<<Amount;
            _getch();

        } else {
            cout << "You cant withdraw more amount that greater than your balance "<<Amount<<endl;
            _getch();
        }
    }
    void UserDetails()
    {
        cout << "Name of the User: "<<Name<<endl;
        cout << "Account number of the user: "<<Account_num<<endl;
        cout << "Users Mobile Number: "<< Number<<endl;
        cout << "Balace in your accout: "<< Amount<<endl;
    }
    void Update_mob_num(string mob_prev, string mob_new)
    {
        if (mob_prev == Number)
        {
            Number = mob_new; 
            cout << endl << "Updated Sucessfully";
            _getch();
        } else {
            cout<< endl << "Incorrect !!! Old Mobile no";
            _getch();
        }
    }
    
};

int main()
{

    int choice = 0, enterPIN;
    long long int enterAccountNo;

    system("cls");

    ATM p1;

    do 
    {
        system("cls");

        cout << endl <<"*******Welcome to ATM*******";
        cout << endl << "Enter Your Account No ";
        cin >> enterAccountNo;

        cout << endl << "Enter PIN: ";
        cin >> enterPIN;

        if ((enterAccountNo == p1.getAccountNo()) && (enterPIN == p1.getPIN()))
        {
            do
            {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");
                cout << endl << "*******Welcome to ATM*******"<<endl;
                cout << endl << "Select Options ";
                cout << endl << "1. Check Balance";
                cout << endl << "2. Cash Withdrawl";
                cout << endl << "3. Show User details";
                cout << endl << "4. Update Mobile no.";
                cout << endl << "5. Exit"<<endl;
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << endl << "Your Bank balance is : "<< p1.getBalance();

                    _getch();
                    break;
                case 2:
                    cout << endl << "Enter the amount : ";
                    cin >> amount;
                    p1.WithDraw(amount);

                    break;

                case 3:
                    cout << endl;
                    p1.UserDetails();

                    _getch();
                    break;
                case 4:
                    cout << endl << "Enter the old mobile no : ";
                    cin >> oldMobileNo;

                    cout << endl << "Enter the New mobile no : ";
                    cin >> newMobileNo;

                    p1.Update_mob_num(oldMobileNo, newMobileNo);

                    break;

                case 5:
                    exit(0);

                default:
                    cout << endl << "Enter valid data !!";
                }

            } while (1);
            
        } else {
            cout << "User Details are invalid !!!";
            _getch();
        }

    } while (1);

    return 0;
}