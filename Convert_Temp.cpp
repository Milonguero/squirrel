// This Program will convert Temp from Celsius to Farenheit or Farenheit to Celsius
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

int main()
{


    string name, surname;
    short celsius, farenheit;
    const string clear (3, '\n');

    cout << "Enter your first name: "; cin >> name;

    cout << "Enter your last name: "; cin >> surname;


    cout << endl;
    cout << "Welcome " << name << " " << surname;
    cout << clear;
    cout << "The current date & time is:";
    cout << endl;

    auto currtime =
      chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << ctime(&currtime) << endl;

    cout << endl;
    cout << endl;



    while (1)
         {

             char choice[2];

             cout << "           **MENU**\n"
                  << "1. Convert Celsius to Farenheit\n"
                  << "2. Convert Farenheit to Celsius\n"
                  << "3. Quit Program\n"
                  << "Choice:  ";
             cin >> choice;

             if (choice[0] == '1')
                  {

                    cout << clear;
                    cout << "What is the temperature? "; cin >> celsius;
                    short far = celsius * 9/5 +32;
                    cout << endl;
                    cout << "The temperature in Farenheit is " << far <<" degrees";
                    cout << endl;
                    break;

                  }

             else if (choice[0] == '2')
                    {
                        cout << clear;
                        cout << "What is the temperature? "; cin >> farenheit;
                        short cel = (farenheit-32) * 5/9;
                        cout << endl;
                        cout << "The temperature in Celsius is " << cel << " degrees";
                        cout << endl;
                        break;


         }
             else if (choice[0] == '3')
                    {
                        cout << clear;
                        cout << "Goodbye " << name << " " << surname;
                        cout << endl;
                        break;

                    }
         }

    cout << endl;

    return 0;
}
