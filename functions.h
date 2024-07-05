#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;

void loadingPage();
void Cheacking();
void Clr_AswFacEng();
bool isValidPassword(string password);
string generateRandomPassword();

// Here lays Functions

void Clr_AswFacEng()
{
    system("cls");
    cout << " Aswan University | Faculty Of Engineering \n";
    cout << " -----------------------------------------\n\n";
}
// Function to check if a password vaild or not
bool isValidPassword(string password)
{

    if (size(password) < 8)
    {
        return false; // Must be at least 8 characters
    }

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (char c : password)
    {
        if (isupper(c))
        {
            hasUpper = true;
        }
        else if (islower(c))
        {
            hasLower = true;
        }
        else if (isdigit(c))
        {
            hasDigit = true;
        }
        else if (ispunct(c))
        { // Check for special characters
            hasSpecial = true;
        }
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

void loadingPage()
{
    const int animationDelayMs = 100; // Delay between animation frames in milliseconds
    const int numFrames = 5;          // Number of animation frames

    // Define the animation frames
    const char frames[numFrames + 1] = {'-', '\\', '|', '/', '-'};

    cout << "Loading ";

    for (int i = 0; i < 10; ++i)
    { // Number of animation iterations
        for (int j = 0; j < numFrames; ++j)
        {
            cout << "\b" << frames[j] << flush;                // Print animation frame
            sleep_for(chrono::milliseconds(animationDelayMs)); // Delay
        }
    }

    cout << "\b\b\b\b\b\b\b\b\b\b"
         << "Loading complete." << endl;
    sleep_for(2s);
}
void Cheacking()
{
    const int animationDelayMs = 100; // Delay between animation frames in milliseconds
    const int numFrames = 5;          // Number of animation frames

    // Define the animation frames
    const char frames[numFrames + 1] = {'-', '\\', '|', '/', '-'};

    cout << "\n Cheacking ";

    for (int i = 0; i < 10; ++i)
    { // Number of animation iterations
        for (int j = 0; j < numFrames; ++j)
        {
            cout << "\b" << frames[j] << flush;                // Print animation frame
            sleep_for(chrono::milliseconds(animationDelayMs)); // Delay
        }
    }
    cout << " (Done!)";
    sleep_for(1s);
}
string generateRandomPassword()
{
    const string lowercaseChars = "abcdefghijklmnopqrstuvwxyz";
    const string uppercaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string specialChars = "!@#$%&";
    const string numericChars = "0123456789";

    const string allChars = lowercaseChars + uppercaseChars + specialChars + numericChars;

    srand(time(0)); // Seed the random number generator

    string password;

    // Ensure at least one character from each category
    password += lowercaseChars[rand() % lowercaseChars.length()];
    password += uppercaseChars[rand() % uppercaseChars.length()];
    password += specialChars[rand() % specialChars.length()];
    password += numericChars[rand() % numericChars.length()];

    // Fill the rest of the password with random characters
    for (int i = 4; i < 8; ++i)
    {
        password += allChars[rand() % allChars.length()];
    }

    return password;
}
// Function to enroll a new student

