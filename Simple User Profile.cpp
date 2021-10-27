// Simple User Profile
//Class Exercise
//26th October

#include <iostream>
#include<string>

using namespace std; 
int main()

  
{
    //Declare and initialize variables
    string fullName, favFood, favMovie;

    //Ask user to input their details
    cout << "This is a simple user profile"<<endl; 
    cout << "--------------------------------------\n";

    cout << "Please enter your full name:"<<endl;   
    getline(cin, fullName);
    cout << "What is your favorite meal?"<<endl; 
    cin >> favFood; 
    cout << "What is your favorite Movie?"<<endl; 
    cin >> favMovie;

    cout << "Below are your details. Confirm they are okay"<<endl;
    cout << "-------------------------------------------------\n\n";

    //Output the user information
    cout << "Full name: " << fullName << endl;
    cout << "Favorite Meal: " << favFood << endl;
    cout << "Favorite Movie: " << favMovie << endl;


    return 0; 



        
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
