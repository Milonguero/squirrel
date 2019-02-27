// This program uses Vectors, Switch menus, Operators and If Statements
#include <iostream>
#include <vector>



using namespace std;
int main()
{

vector <float> distance_sun {0.39, 0.72, 1.00, 1.52 ,5.20, 9.54, 19.19};
// These are the planet distance to the sun in A.U.

int choice;

             cout << "           **MENU**\n"
                  << "1. Planet Distance from the Sun\n"
                  << "2. Enter a new Celestial Body and A.U. Distance\n"
                  << "3. Quit Program\n"
                  << "Choice:  ";

string planet;
cin >> choice;
switch (choice)
        {


               case 1:


                cout << "Enter name of planet: " << endl;
                cin >> planet;
                if (planet == "earth" or planet == "Earth")
               { cout << "\nThe distance is: " << distance_sun[2] << " A.U. from the sun" << endl;
               cout << "It takes " << distance_sun[2] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}
                // Distance variable in A.U. x conversion value to Km dived by the speed of light in Km/s
                if (planet == "mars" or planet == "Mars")
               { cout << "\nThe distance is: " << distance_sun[3] << " A.U. from the sun" << endl;
               cout << "It takes " << distance_sun[3] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}

                if (planet == "mercury" or planet == "Mercury")
               { cout << "\nThe distance is: " << distance_sun[0] << " A.U. from the sun" << endl;
               cout << "It takes " << distance_sun[0] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}

               if (planet == "venus" or planet == "Venus")
               { cout << "\nThe distance is: " << distance_sun[1] << " A.U. from the sun" << endl;
               cout << "It takes " << distance_sun[1] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}

               if (planet == "jupiter" or planet == "Jupiter")
               { cout << "\nThe distance is: " << distance_sun[4] << " A.U. from the sun" << endl;
               cout << "It takes " << distance_sun[4] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}

               if (planet == "saturn" or planet == "Saturn")
               { cout << "\nThe distance is: " << distance_sun[5] << " A.U. from the sun" << endl;
                 cout << "It takes " << distance_sun[5] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}

               if (planet == "uranus" or planet == "Uranus")
               { cout << "\nThe distance is: " << distance_sun[6] << " A.U. from the sun" << endl;
                 cout << "It takes " << distance_sun[6] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}

            break;

                case 2:

        {
float distance_new;
string planet_new;
                cout << "Enter name of celestial body: ";
                cin >> planet_new;
                cout << "Enter distance to the sun in A.U.: " << endl;
                cin >> distance_new;
                distance_sun.push_back(distance_new);


               cout << "The distance from " << planet_new << " to the sun is " << distance_sun[7] << "A.U." << endl;
               cout << "It takes " << distance_sun[7] * 149597871 / 300000 << " seconds for light from the sun to reach this planet." << endl;}

             case 3:

                cout << "Goodbye!" << endl;
                break;



               }
  return 0;  }

