#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    //declaring variables
    string first_name, last_name, key;
    char choice, secret_code;
    int number_of_customers_served = 0;
    string deposit;

    while (number_of_customers_served <= 999)
    {
        //display
        cout << "\n" << endl;
        cout << "ºººººººººººººººººººººººººººººººººººººººººººººººº" << endl;
        cout << "           WELCOME JASS Food Machine            " << endl;
        cout << "ºººººººººººººººººººººººººººººººººººººººººººººººº" << endl;

        cout << "Press any key to continue . . ." << endl;
        cin >> key;

        cout << "Please enter your first and last name: " << endl;
        cin >> first_name >> last_name;

        //if principal exit(0). The name Sabrina will be the principle
        if (first_name == "sabrina" || first_name == "Sabrina")
        {
            cout << "Please enter the secret code: " << endl;
            cin >> secret_code;

            if (secret_code == 'p' || secret_code == 'P')
            {
                cout << "The machine is now turned off to rebuild its resources!" << endl;
                cout << "please contact @(905)-796-4562 if you’re hungry." << "\n" << endl;
                exit(0);
            }
        }

        //menu
        cout << "    Order Menu:    " << "\n" << endl;
        cout << "R - Rice Pilaf $5.00" << endl;
        cout << "A - Anna Potatoes $2.25" << endl;
        cout << "T - Tuna on Toast $7.00" << endl;
        cout << "G - GCS(Grilled Cheese Sandwich) $6.75" << endl;
        cout << "S – Veggie Samosa $1.00" << endl;
        cout << "D - Soft Drinks $1.25" << endl;

        cout << first_name << " " << last_name << ", please enter your choice: " << endl;
        cin >> choice;

        //choice logic using the switch statement
        switch (choice)
        {
        case 'r':
        case 'R':
            cout << "I am preparing your Rice Pilaf.. " << endl;
            cout << "Please deposit $5.00" << endl;
            cin >> deposit;

            //check if the money entered matches the deposit
            //(normally, machines do not offer change and would rather you enter in the correct amount, so the change is not calculated in the if statement.
            if (deposit != "5.00")
            {
                cout << "Please enter in the right amount. " << endl;
                cin >> deposit;
            }
            else
            {
                cout << first_name << " " << last_name << ", thank you, we hope you are happy with your order!" << endl;
            }
            break;

        case 'a':
        case 'A':
            cout << "I am preparing your Anna Potatoes.. " << endl;
            cout << "Please deposit $2.25" << endl;
            cin >> deposit;

            if (deposit != "2.25")
            {
                cout << "Please enter in the right amount. " << endl;
                cin >> deposit;
            }

            else
            {
                cout << first_name << " " << last_name << ", thank you, we hope you are happy with your order!" << endl;
            }
            break;

        case 't':
        case 'T':
            cout << "I am preparing your Tuna on Toast.. " << endl;
            cout << "Please deposit $7.00" << endl;
            cin >> deposit;

            if (deposit != "7.00")
            {
                cout << "Please enter in the right amount. " << endl;
                cin >> deposit;
            }

            else
            {
                cout << first_name << " " << last_name << ", thank you, we hope you are happy with your order!" << endl;
            }
            break;

        case 'g':
        case 'G':
            cout << "I am preparing your Grilled Cheese Sandwich.. " << endl;
            cout << "Please deposit $6.75" << endl;
            cin >> deposit;

            if (deposit != "6.75")
            {
                cout << "Please enter in the right amount. " << endl;
                cin >> deposit;
            }

            else
            {
                cout << first_name << " " << last_name << ", thank you, we hope you are happy with your order!" << endl;
            }
            break;

        case 's':
        case 'S':
            cout << "I am preparing your Veggie Samosa.. " << endl;
            cout << "Please deposit $1.00" << endl;
            cin >> deposit;

            if (deposit != "1.00")
            {
                cout << "Please enter in the right amount. " << endl;
                cin >> deposit;
            }

            else
            {
                cout << first_name << " " << last_name << ", thank you, we hope you are happy with your order!" << endl;
            }
            break;

        case 'd':
        case 'D':
            cout << "I am preparing your Soft Drink.. " << endl;
            cout << "Please deposit $1.25" << endl;
            cin >> deposit;

            if (deposit != "1.25")
            {
                cout << "Please enter in the right amount. " << endl;
                cin >> deposit;
            }
            else
            {
                cout << first_name << " " << last_name << ", thank you, we hope you are happy with your order!" << endl;
            }
            break;

        default:
            cout << "That is not a proper menu choice. I'll assume that you are not hungry." << endl;
            break;
        }
        cout << "I will now help the next person in line." << endl;
        number_of_customers_served++;
    }
    //machine will shut itself down after the 1000th person
    if (number_of_customers_served == 999)
    {
        cout << "The machine is now turned off to rebuild its resources!" << endl;
        cout << "please contact @(905)-796-4562 if you’re hungry." << "\n" << endl;
    }
}
