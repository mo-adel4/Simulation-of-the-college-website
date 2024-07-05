#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "classes.h"
#include "functions.h"
using namespace std;
using namespace std::this_thread;


Student s1;
s1("khaled");
s1.getname() = "ahmed";

int main()
{
    int hover;
    string email;
    string pass;
    system("cls");
    loadingPage();

    // TODO: Sign In

sign:
    Clr_AswFacEng();
    cout << "             Signing Page \n \n";
    cout << " Signing Page [ 1: Sign In , 2: Sign up ]: ";
    cin >> hover;
    switch (hover)
    {
    case 1:
    email:

        Clr_AswFacEng();
        cout << "             Sign In \n \n";

        for (;;)
        {
            cout << " E-Mail [1: Write an email , 2: Go backword]: ";
            cin >> hover;
            switch (hover)
            {

            case 1:
                Clr_AswFacEng();
                cout << "             Sign In \n \n";
                cout << " E-Mail: ";
                cin >> email;
                cout << " \n";

            password:
                Clr_AswFacEng();
                cout << "             Sign In \n \n";
                cout << " E-Mail: " << email << "\n\n";
                cout << " Password [ 1: Write a password , 2: Go backword]: ";
                cin >> hover;
                switch (hover)
                {
                case 1:
                    Clr_AswFacEng();
                    cout << "             Sign In \n \n";
                    cout << " E-Mail:" << email << "\n \n";
                    cout << " Password: ";
                    cin >> pass;
                    Cheacking();
                    if (Check_Em_and_Pass(email, pass))
                    {
                        cout << "\n\n WELCOME!";
                        sleep_for(1.5s);
                        goto home;
                    }

                    else
                    {
                    password2:
                        Clr_AswFacEng();
                        cout << "             Sign In \n\n";
                        cout << " E-Mail: " << email << "\n\n";
                        cout << " Password: " << pass << "\n\n";
                        cout << " Incorrect email and password , [1: Retry, 2: Signing page]: ";
                        cin >> hover;
                        switch (hover)
                        {
                        case 1:
                            goto email;
                            break;

                        case 2:
                            goto sign;
                            break;

                        default:
                            cout << "\n Invaild inputs!";
                            sleep_for(2s);
                            Clr_AswFacEng();
                            goto password2;
                            break;
                        }

                    case 2:
                        goto email;
                        break;

                    default:
                        cout << "\n  Invaild inputs!";
                        sleep_for(2s);
                        goto password;
                        break;
                    }
                }
            case 2:
                goto sign;
                break;

            default:
                cout << "\n  Invaild inputs!";
                sleep_for(2s);
                goto email;
                break;
            }
            break;

        // TODO: Sign up
        case 2:
        email_up:
            Clr_AswFacEng();
            cout << "             Sign Up \n \n ";
            cout << " E-Mail [1: Write an email , 2: go backword]: ";
            cin >> hover;
            switch (hover)
            {
            case 1:
                Clr_AswFacEng();
                cout << "             Sign up \n \n ";
                cout << " E-Mail(@gmail.com): ";
                cin >> email;
                cout << " \n";
            password_up:
                Clr_AswFacEng();
                cout << "             Sign up \n \n ";
                cout << " E-Mail:" << email << "@gmail.com\n \n";
                cout << " Password [1: Write a password , 2: Generate a password , 3: Go backword]: ";
                cin >> hover;
                switch (hover)
                {
                case 1:
                    Clr_AswFacEng();
                    cout << "             Sign up \n \n ";
                    cout << " E-Mail: " << email << "@gmail.com\n \n";
                    cout << " Password: ";
                    cin >> pass;
                    if (isValidPassword(pass))
                    {
                        Set_Em_And_Pass(email + "@gmail.com", pass);
                        goto sign;
                    }
                    else
                    password_up1:
                        cout << "\n Passowrd is not valid , [1: Retry, 2: Signing page]: ";
                    cin >> hover;
                    switch (hover)
                    {
                    case 1:
                        goto password_up;
                        break;
                    case 2:
                        goto sign;
                        break;

                    default:
                        cout << "\n Invaild inputs! \n";
                        sleep_for(2s);
                        Clr_AswFacEng();
                        goto password_up1;
                        break;
                    }

                case 2:
                gen_pass:
                    Clr_AswFacEng();
                    cout << "             Sign up \n \n ";
                    cout << " E-Mail:" << email << "@gmail.com\n \n";
                    pass = generateRandomPassword();
                    cout << "  Password: " << pass << "\n\n";

                    cout << "  [1: Accpet pssword , 2: Generate another password , 3: Go backword]: ";

                    cin >> hover;
                    switch (hover)
                    {
                    case 1:
                        Set_Em_And_Pass(email + "@gmail.com", pass);
                        break;
                    case 2:
                        goto gen_pass;
                        break;
                    case 3:
                        goto password_up;
                        break;

                    default:
                        cout << "\n invaild inputs! \n";
                        sleep_for(2s);
                        Clr_AswFacEng();
                        goto password_up1;
                        break;
                    }
                    break;

                case 3:
                    goto email_up;
                    break;

                default:
                    cout << "\n Invaild inputs!";
                    sleep_for(2s);
                    Clr_AswFacEng();
                    goto password_up;
                    break;
                }

            case 2:
                goto sign;
                break;

            default:
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto email_up;
                break;
            }
            break;
        }
    default:
        cout << "\n Invaild inputs!";
        sleep_for(2s);
        goto sign;
        break;
    }

// TODO: Home Page
home:
    Clr_AswFacEng();
    cout << "            Home \n \n ";
    cout << "Home Page [1: Departments , 2: Financial Transactions , 3: Application For Enrollment , 4: About , 5: sign out]: "; // TODO: back or not??
    cin >> hover;
    switch (hover)
    {
    case 1:
    // TODO: Department
    Departments:
        Clr_AswFacEng();
        cout << "             Home > Departments \n \n ";
        cout << "Departments [1: Electrical Engineering , 2: Civil Engineering , 3: Architectural Engineering Department , 4: Go backword]: ";
        cin >> hover;
        switch (hover)
        {
        case 1:

        Departments1:
            Clr_AswFacEng();
            cout << "             Home > Departments > Electrical Engineering\n \n ";
            o1.ElecEng();
            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto Departments;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto Departments1;
            }

            break;

        case 2:
        Departments2:
            Clr_AswFacEng();
            cout << "             Home > Departments > Civil Engineering \n \n ";
            o1.CivilEng();
            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover = 1)
            {
                goto Departments;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto Departments2;
            }
            break;

        case 3:
        Departments3:
            Clr_AswFacEng();
            cout << "             Home > Departments > Architectural Engineering Department\n \n ";
            o1.ArchEng();
            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto Departments;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto Departments3;
            }
            break;

        case 4:
            goto home;
            break;

        default:
            cout << "\n Invaild inputs!";
            sleep_for(2s);
            goto Departments;
            break;
        }
        break;

    case 2:
        // TODO: Financial
        int balance, withdraw, deposit, payments, option, fee, password_fin;

    Financial_pass:
        Clr_AswFacEng();
        cout << "             Home > Financial Transactions \n \n ";
        cout << "Financial Transactions [1: Write a password , 2: Go backword]: ";
        cin >> hover;
        if (hover == 1)
        {
        Financial_pass1:
            Clr_AswFacEng();
            cout << "             Home > Financial Transactions \n \n ";
            cout << "Password: ",
                cin >> password_fin;
            if (password_fin == 0000)
            {
            Financial:
                Clr_AswFacEng();
                cout << "             Home > Financial Transactions  \n \n ";
                // cout << "Welcome In The College Financial Department \n ";
                cout << "Financial Transactions [1: Balance , 2: Withdraw , 3: Deposit , 4: Payments , 5: Go backword]: ";
                cin >> hover;
                switch (hover)
                {

                case 1:
                balance:
                    Clr_AswFacEng();
                    cout << "             Home > Financial Transactions > Balance \n \n ";
                    cout << "Your Balance Is: " << balance;
                    cout << "\n\n[1: Go back]: ";
                    cin >> hover;
                    if (hover == 1)
                    {
                        goto Financial;
                    }
                    else
                    {
                        cout << "\n Invaild inputs!";
                        sleep_for(2s);
                        goto balance;
                    }
                    break;

                case 2:
                withdraw:
                    Clr_AswFacEng();
                    cout << "             Home > Financial Transactions > Withdraw \n \n ";
                    cout << "[1: Withdraw , 2: Go back]: ";
                    cin >> hover;
                    if (hover == 1)
                    {
                    withdraw1:
                        Clr_AswFacEng();
                        cout << "             Home > Financial Transactions > Withdraw \n \n ";
                        cout << " Enter the Amount: ";
                        cin >> withdraw;
                        if (withdraw > balance)
                        {
                        withdraw2:
                            Clr_AswFacEng();
                            cout << "             Home > Financial Transactions > Withdraw \n \n ";
                            cout << " Enter the Amount: " << withdraw;
                            cout << "\n\nSorry, Your balance is not enough [1: Retry , 2: Financial Transactions Page]: \n";
                            cin >> hover;
                            if (hover == 1)
                                goto withdraw1;
                            else if (hover == 2)
                                goto Financial;
                            else
                            {
                                cout << "\n Invaild inputs!";
                                sleep_for(2s);
                                goto withdraw2;
                            }
                        }
                        else
                        {
                            balance -= withdraw;
                            cout << "\nYou have withdrawed: " << withdraw << "$\n";
                            cout << "You'r balance now: " << balance << "2$\n";
                        }
                        cout << "\n[1: Go back]: ";
                        cin >> hover;
                        if (hover == 1)
                        {
                            goto Financial;
                        }

                        else
                        {
                            cout << "\n Invaild inputs!";
                            sleep_for(2s);
                            goto withdraw;
                        }
                    }
                    else if (hover == 2)
                    {
                        goto Financial;
                    }

                    else
                    {
                        cout << "\n Invaild inputs!";
                        sleep_for(2s);
                        goto withdraw;
                    }

                    break;
                case 3:
                deposit:
                    Clr_AswFacEng();
                    cout << "             Home > Financial Transactions > Deposite \n \n ";
                    cout << "[1: deposite , 2: Go back]: ";
                    cin >> hover;
                    if (hover == 1)
                    {
                        Clr_AswFacEng();
                        cout << "             Home > Financial Transactions > Deposite \n \n ";
                        cout << "Enter Your Deposit Amount: ";
                        cin >> deposit;
                        balance += deposit;
                    deposit1:
                        Clr_AswFacEng();
                        cout << "             Home > Financial Transactions > Withdraw \n \n ";
                        cout << " Enter the Amount: " << deposit;
                        cout << "\n\nDeposite Sucsseded! \n ";
                        cout << "\n[1: Go back]: ";
                        cin >> hover;
                        if (hover == 1)
                        {
                            goto Financial;
                        }
                        else
                        {
                            cout << "\n Invaild inputs!";
                            sleep_for(2s);
                            goto deposit1;
                        }
                        break;
                    }
                    else if (hover == 2)
                    {
                        goto Financial;
                    }
                    else
                    {
                        cout << "\n Invaild inputs!";
                        sleep_for(2s);
                        goto deposit;
                    }
                    break;

                case 4:
                payment:
                    Clr_AswFacEng();
                    cout << "             Home > Financial Transactions > Payments \n \n ";
                    cout << "Payments [1: Books Cost , 2: Semester Fees , 3: Go back]: ";
                    cin >> hover;
                    switch (hover)
                    {

                    case 1:
                    books_cost:
                        Clr_AswFacEng();
                        cout << "             Home > Financial Transactions > Payments > Books Cost \n \n";
                        cout << "1. C++ Book => 15$ \n";
                        cout << "2. Electronics Book => 10$ \n";
                        cout << "3. Circuits Book => 9$ \n";
                        cout << "4. Electric Materials Book => 8$ \n";
                        cout << "5. Structure Book => 7$ \n";
                        cout << "6. Math II Book => 6$ \n";
                        cout << "7. English Book => 5$ \n";
                        cout << "8. Electromagnetic Fields Book => 13$ \n\n";
                        cout << "Books [1: Book a book , 2: Go back]: ";
                        cin >> hover;
                        if (hover == 1)
                        {
                        books_cost1:
                            Clr_AswFacEng();
                            cout << "             Home > Financial Transactions > Payments > Books Cost \n \n";
                            cout << "1. C++ Book => 15$ \n";
                            cout << "2. Electronics Book => 10$ \n";
                            cout << "3. Circuits Book => 9$ \n";
                            cout << "4. Electric Materials Book => 8$ \n";
                            cout << "5. Structure Book => 7$ \n";
                            cout << "6. Math II Book => 6$ \n";
                            cout << "7. English Book => 5$ \n";
                            cout << "8. Electromagnetic Fields Book => 13$ \n\n";
                            cout << "Book Number: ";
                            cin >> option;
                            if (option <= 8 && option > 0)
                            {
                            books_cost3:
                                Clr_AswFacEng();
                                cout << "             Home > Financial Transactions > Payments > Books Cost \n \n";
                                cout << "1. C++ Book => 15$ \n";
                                cout << "2. Electronics Book => 10$ \n";
                                cout << "3. Circuits Book => 9$ \n";
                                cout << "4. Electric Materials Book => 8$ \n";
                                cout << "5. Structure Book => 7$ \n";
                                cout << "6. Math II Book => 6$ \n";
                                cout << "7. English Book => 5$ \n";
                                cout << "8. Electromagnetic Fields Book => 13$ \n\n";
                                cout << "Book Number: " << option;
                                cout << "\n\nBooking succeeded! Please Go To The College Affairs Office To Receive The Book.\n\n";
                                cout << "[1: go back]: ";
                                cin >> hover;
                                if (hover == 1)
                                {
                                    goto books_cost;
                                }
                                else
                                {
                                    cout << "\n Invaild inputs!";
                                    sleep_for(2s);
                                    goto books_cost3;
                                }
                            }
                            else
                            {
                            books_cost2:
                                Clr_AswFacEng();
                                cout << "             Home > Financial Transactions > Payments > Books Cost \n \n";
                                cout << "1. C++ Book => 15$ \n";
                                cout << "2. Electronics Book => 10$ \n";
                                cout << "3. Circuits Book => 9$ \n";
                                cout << "4. Electric Materials Book => 8$ \n";
                                cout << "5. Structure Book => 7$ \n";
                                cout << "6. Math II Book => 6$ \n";
                                cout << "7. English Book => 5$ \n";
                                cout << "8. Electromagnetic Fields Book => 13$ \n\n";
                                cout << "Book Number: " << option;
                                cout << "\n\nNo such a book number! [1: Retrey , 2: payments page]: ";
                                cin >> hover;
                                if (hover == 1)
                                    goto books_cost1;
                                else if (hover == 2)
                                    goto payment;
                                else
                                {
                                    cout << "\n Invaild inputs!";
                                    sleep_for(2s);
                                    goto books_cost2;
                                }
                                break;
                            }
                        }
                        else if (hover == 2)
                        {
                            goto payment;
                        }
                        else
                        {
                            cout << "\n Invaild inputs!";
                            sleep_for(2s);
                            goto books_cost;
                        }
                        break;

                    case 2:
                    fees:
                        Clr_AswFacEng();
                        cout << "             Home > Financial Transactions > Payments > Semester Fees \n \n ";
                        cout << "The Semester Fees is 100$ \n\n";
                        cout << "[1: Pay the fees , 2: Go back] :";
                        cin >> hover;
                        switch (hover)
                        {
                        fees1:
                            Clr_AswFacEng();
                            cout << "             Home > Financial Transactions > Payments > Semester Fees \n \n ";
                            cout << "The Semester Fees is 100$ \n\n";
                            cout << "[1: Pay the fees , 2: Go back]: ";
                        case 1:
                            if (balance >= 100)
                            {
                            fees2:
                                balance -= 100;
                                Clr_AswFacEng();
                                cout << "             Home > Financial Transactions > Payments > Semester Fees \n \n ";
                                cout << "Payment of fees has been done!";
                                cout << "\n\n[1: Payments]: ";
                                cin >> hover;
                                if (hover == 1)
                                    goto payment;
                                else
                                {
                                    cout << "\n\n Invaild inputs!";
                                    sleep_for(2s);
                                    goto fees2;
                                }
                            }
                            else
                            {
                                cout << "\n\n No enough balance!";
                                sleep_for(2s);
                                goto fees;
                            }

                            break;
                        case 2:
                            goto payment;
                            break;

                        default:
                            cout << "\n Invaild inputs!";
                            sleep_for(2s);
                            goto fees1;
                            break;
                        }

                    case 3:
                        goto Financial;
                        break;

                    default:
                        cout << "\n Invaild inputs!";
                        sleep_for(2s);
                        goto payment;
                        break;
                    }
                case 5:
                    goto home;
                    break;

                default:
                    cout << "\n Invaild inputs!";
                    sleep_for(2s);
                    goto Financial;
                }
            }
            else
            {
            Financial_pass2:
                Clr_AswFacEng();
                cout << "             Home > Financial Transactions \n \n ";
                cout << "Password: " << password_fin;
                cout << "\n\nIncorrect Password [1: Retry , 2: Home page]: ";
                cin >> hover;

                if (hover == 1)
                    goto Financial_pass1;
                else if (hover == 2)
                    goto home;
                else
                {
                    cout << "\n Invaild inputs!";
                    sleep_for(2s);
                    goto Financial_pass2;
                }
            }
            break;
        }
        else if (hover == 2)
        {
            goto home;
        }
        else
        {
            cout << "\n Invaild inputs!";
            sleep_for(2s);
            goto Financial_pass;
        }
        break;

    case 3:

    // TODO: Enrollment
    enroll:
        Clr_AswFacEng();
        cout << "             Home > Application For Enrollment \n \n ";
        cout << "Enrollment [1: Enroll a new student , 2: Display all enrolled students , 3: Go backword]: ";
        cin >> hover;
        switch (hover)
        {
        case 1:
        enroll0:
            Clr_AswFacEng();
            cout << "             Home > Application For Enrollment > Enroll a new student \n \n ";
            enrollStudent(students);
            cout << "\n[1: enroll another student , 2: Go back ]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto enroll0;
            }
            else if (hover == 2)
            {
                goto enroll;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto enroll1;
            }
            break;
        case 2:
        enroll1:
            cout << "             Home > Application For Enrollment > Display all enrolled students \n \n ";
            Clr_AswFacEng();
            displayStudents(students);
            cout << "\n[1: Go back]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto enroll;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto enroll1;
            }
            break;

        case 3:
            goto home;
        default:
            cout << "\n Invaild inputs!";
            sleep_for(2s);
            goto home;
            break;
        }
        break;
    case 4:
    about:
        Clr_AswFacEng();
        cout << "             About \n \n ";
        cout << "[1: Vision and Mission , 2: History , 3: Faculty Dean Speech , 4: Faculty leaderships , 5: Faculty Council , 6: Go backword]: ";
        cin >> hover;
        switch (hover)
        {
        case 1:
        about1:
            Clr_AswFacEng();
            cout << "             About > Vision and Mission \n \n";
            o1.VisAndMiss();
            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto about;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto about1;
            }
            break;

        case 2:
        about2:
            Clr_AswFacEng();
            cout << "             About > History \n \n";
            o1.history();

            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto about;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto about2;
            }
            break;

        case 3:
        about3:
            Clr_AswFacEng();
            cout << "             About > Faculty Dean Speech \n \n";
            o1.DeanSpeech();

            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto about;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto about3;
            }
            break;

        case 4:
        about4:
            Clr_AswFacEng();
            cout << "             About > Faculty leaderships \n \n";
            o1.leadership();

            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto about;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto about4;
            }
            break;

        case 5:
        about5:
            Clr_AswFacEng();
            cout << "             About > Faculty Council \n \n";
            o1.Councle();

            cout << "\n\n [1: Go backword]: ";
            cin >> hover;
            if (hover == 1)
            {
                goto about;
            }
            else
            {
                cout << "\n Invaild inputs!";
                sleep_for(2s);
                goto about5;
            }
            break;

        case 6:
            goto home;
            break;
        default:
            cout << "\n Invaild inputs!";
            sleep_for(2s);
            goto about;
            break;
        }
        break;

    case 5:
    sign_out:
        Clr_AswFacEng();
        cout << "are you sure to sign out ?";
        cout << " [1: sign out  2:cancel] ";
        cin >> hover;
        if (hover == 1)
        {
            goto sign;
        }
        else if (hover == 2)
        {
            goto home;
        }
        else
        {
            cout << "\n Invaild inputs!";
            sleep_for(2s);
            goto sign_out;
        }

        break;

    default:
        cout << "\n Invaild inputs!";
        sleep_for(2s);
        goto home;
        break;
    }
    return 0;
}

// Here lays Functions
//
//
//
//
//
//
//
//
