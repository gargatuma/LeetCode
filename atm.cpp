#include<iostream>
#include"cmath"
#include<string>

using namespace std;
int atm();

int main() {
    atm();
    return 0;
    }

 //Acceptable phone number form +998XXXaabb XXXaabb 998XXXaabb
 //Secure against brute force attacks

int atm() {
    unsigned seed = time(0);
    srand(seed);
    int option = -1;
    double cardUSD = rand() / 1000000000;
    double cardUZS = rand() / 10000000;
    double cardBTC = rand() / 10000000000000;
    string password = "1985";
    double usdSell = 10666;
    double usdBuy = 11666;
    double btcBuy = 42223;
    double btcSell = 43223;
    int freezed = 0;
    string tempPassword = to_string(rand() / 100);

    string phoneNumber = "+998333333333";
    string hint = "C++";
    string secretWord = "BjarneStroustrup";

    cout << "        __          __ _______   _         _____    ____    __  __   ______   _\n";
    cout << "        \\ \\        / / |  ____| | |       / ____|  / __ \\  |  \\/  | |  ____| | |\n";
    cout << "         \\ \\  /\\  / /  | |__    | |      | |      | |  | | | \\  / | | |__    | |\n";
    cout << "          \\ \\/  \\/ /   |  __|   | |      | |      | |  | | | |\\/| | |  __|   | |\n";
    cout << "           \\  /\\  /    | |____  | |____  | |____  | |__| | | |  | | | |____  |_|\n";
    cout << "            \\/  \\/     |______| |______|  \\_____|  \\____/  |_|  |_| |______| (_)\n";
    cout << "\n                            Thanks for choosing GARGAPay\n";
    cout << "\n                                Choose the language: ";
    cout << "\n                                Выберите Язык: ";
    cout << "\n                                Tinli Tanlang: ";


    while (option != 0) {
        cout << "\n";
        cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
        cout << "    |         1         |        |         2         |        |         3         |\n";
        cout << "    |      ENGLISH      |        |      RUSSIAN      |        |       UZBEK       |\n";
        cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
        cout << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
        cout << "\n\n==>  ";
        cin >> option;

        switch (option) {
            case 1: {
                int option2 = -1;
                while (option2 != 0) {
                    cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                    cout << "    |         1         |        |         2         |        |        0          |\n";
                    cout << "    |      LOG IN       |        |      SIGN UP      |        |       EXIT        |\n";
                    cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                    cout << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                    cout << "\n\n==>  ";
                    cin >> option2;
                    if (freezed) {
                        cout << "You account has been freeze \n";
                        int option5 = -1;
                        while (option5 != 0) {
                            cout << "\n          To Unfreeze Choose one of the two!\n";
                            cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                            cout << "    |         1         |        |         0         |\n";
                            cout << "    |      RECOVER      |        |        BACK       |\n";
                            cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                            cout << "\n ©GARGAPay SINCE-2021        CALL CENTER: +777 77 777 77 77";
                            freezed = 1;
                            while (option5 != 0) {
                                cout << "\n\n\n Option ==> ";
                                cin >> option5;
                                switch (option5) {
                                    case 1: {
                                        cout << "\n   How do you want to recover? \n";
                                        cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                        cout << "    |         1         |        |         2         |\n";
                                        cout << "    |    SECRET WORD    |        |      Send SMS     |\n";
                                        cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                        cout << "\n ©GARGAPay SINCE-2021        CALL CENTER: +777 77 777 77 77";
                                        cout << "\n\n\n Option ==> ";
                                        int option7 = -1;
                                        cin >> option7;
                                        switch (option7) {
                                            case 1: {
                                                string checkSecretWord;
                                                cout << "\nEnter secret word ==> ";
                                                cin >> checkSecretWord;
                                                if (checkSecretWord == secretWord) {
                                                    password = tempPassword;
                                                    cout << "Password reset to " << tempPassword;
                                                    option7 = 0;
                                                    option5 = 0;
                                                    break;
                                                } else {
                                                    option7 = 0;
                                                    option5 = 0;
                                                    break;
                                                }
                                            }
                                            case 2: {
                                                int tempCode = rand() / 100000;
                                                int checkCode;
                                                int option8 = -1;
                                                while (option8 != 0) {
                                                    cout << "Message with code has been sent to "
                                                         << phoneNumber[phoneNumber.length() - 2]
                                                         << phoneNumber[phoneNumber.length() - 1];
                                                    cout << "\n==> " << tempCode;
                                                    cout << "\nCode ==> ";
                                                    cin >> checkCode;
                                                    if (tempCode == checkCode) {
                                                        password = tempPassword;
                                                        cout << "The password has been successfully reset to " << password;
                                                        option8 = 0;
                                                        break;
                                                    } else {
                                                        cout << "Invalid code is entered\n";
                                                    }
                                                }
                                            }
                                            case 0: {
                                                option7 = 0;
                                                break;
                                            }
                                            default: {
                                                cout << "Choose valid option\n";
                                            }
                                        }
                                    }
                                    case 0: {
                                        option2 = -1;
                                        break;
                                    }
                                    default: {
                                        cout << "\nChoose valid option\n";
                                        break;
                                    }

                                }
                            }
                        }
                    }
                    switch (option2) {
                        case 1: {
                            int wrongTimes = 0;
                            int option112 = -1;
                            string checkPassword;
                            string checkPhoneNumber;
                            while (option112 != 0) {

                                cout << "\nEnter phone number ==>";
                                cin >> checkPhoneNumber;
                                cout << "\nEnter password ==>";
                                cin >> checkPassword;
                                if (checkPhoneNumber.length() == 9) {
                                    checkPhoneNumber = "+998" + checkPhoneNumber;
                                } else if (checkPhoneNumber.length() == 12) {
                                    checkPhoneNumber = "+" + checkPhoneNumber;
                                }
                                if (checkPhoneNumber == phoneNumber && checkPassword == password) {
                                    int option30 = -1;
                                    while (option30 != 0) {
                                        cout << "                     Balance: \n";
                                        cout << "GARGAPay Humo: " << cardUZS << "UZS\n";
                                        cout << "GARGAPay Visa:" << cardUSD << "USD\n";
                                        cout << "GARGAPay BTC Wallet: " << cardBTC << "BTC\n";
                                        cout
                                                << "  ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻      ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                        cout
                                                << "  |         1         |   |         2         |   |         3         |  |      0      |\n";
                                        cout
                                                << "  | PAY FOR SERVICES  |   |OPERATION WITH CARD|   |    CONTACT US     |  |   LOG OUT   |\n";
                                        cout
                                                << "   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                        cout
                                                << "\n ©GARGAPay SINCE-2021                        CALL CENTER: +777 77 777 77 77";
                                        cout << "\n\n==>  ";
                                        cin >> option30;
                                        switch (option30) {
                                            case 1: {
                                                int option211 = -1;
                                                while (option211 != 0) {
                                                    cout
                                                            << "    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                    cout
                                                            << "    |   1   |    |   2    |    |  3   |    |   4    |    |    5    |    |    6    |\n";
                                                    cout
                                                            << "    | STEAM |    | PayPal |    | QIWI |    | AMAZON |    | ALIBABA |    | Spotify |\n";
                                                    cout
                                                            << "    ⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻      ⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻      ⎻⎻⎻⎻⎻⎻⎻⎻⎻\n\n";
                                                    cout
                                                            << "    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻      ⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                    cout
                                                            << "    |    7    |    |   8   |    |    9     |    | 10  |    |    11   |    |     12     |\n";
                                                    cout
                                                            << "    | BeeLine |    | Ucell |    | Uzmobile |    | UMS |    | Humnans |    | Perfectum |\n";
                                                    cout
                                                            << "    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻      ⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n\n";
                                                    cout << "    TO GO BACK ==> 0\n";
                                                    cout
                                                            << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                    cout << "\n\n==>  ";
                                                    cin >> option211;
                                                    string userName;
                                                    double serviceBalance = 0;
                                                    double payment;
                                                    double enteredPhoneNumber;
                                                    switch (option211) {
                                                        case 1: {
                                                            cout
                                                                    << "                  _____   _______   ______              __  __ \n";
                                                            cout
                                                                    << "                 / ____| |__   __| |  ____|     /\\     |  \\/  |\n";
                                                            cout
                                                                    << "                 | (___     | |    | |__       /  \\    | \\  / |\n";
                                                            cout
                                                                    << "                 \\___ \\     | |    |  __|     / /\\ \\   | |\\/| |\n";
                                                            cout
                                                                    << "                 ____) |    | |    | |____   / ____ \\  | |  | |\n";
                                                            cout
                                                                    << "                 |_____/    |_|    |______| /_/    \\_\\ |_|  |_|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nLogin: ";
                                                            cin >> userName;
                                                            cout << "Current Steam balance: " << serviceBalance
                                                                 << " USD\n";
                                                            cout << "Payment amount (USD): ";
                                                            cin >> payment;
                                                            if (payment > cardUSD) {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |No SUFFICIENT FUNDS               !|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                serviceBalance += payment;
                                                                cardUSD -= payment;
                                                                cout << "Current Steam balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current VISA CARD balance: " << cardUSD
                                                                     << " USD\n";
                                                                cout << "\n Operation Successfully Completed!\n";
                                                                cout
                                                                        << "                        $$$$$$$             $$$$$$$          \n ";
                                                                cout
                                                                        << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                cout
                                                                        << "                      $$$                        $$$$        \n ";
                                                                cout
                                                                        << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                cout
                                                                        << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                cout
                                                                        << "                               $$$$$$$$$$$$$$$               \n ";
                                                                cout
                                                                        << "                                  $$$$$$$$                   \n ";
                                                                cout
                                                                        << "                                      $                      \n ";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                break;
                                                            }
                                                        }
                                                        case 2: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |              PAYPAL              !|\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nLogin: ";
                                                            cin >> userName;
                                                            cout << "Current Steam balance: " << serviceBalance
                                                                 << " USD\n";
                                                            cout << "Payment amount (USD): ";
                                                            cin >> payment;
                                                            if (payment > cardUSD) {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |No SUFFICIENT FUNDS               !|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                serviceBalance += payment;
                                                                cardUSD -= payment;
                                                                cout << "Current PayPal balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current VISA CARD balance: " << cardUSD
                                                                     << " USD\n";
                                                                cout << "\n Operation Successfully Completed!\n";
                                                                cout
                                                                        << "                        $$$$$$$             $$$$$$$          \n ";
                                                                cout
                                                                        << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                cout
                                                                        << "                      $$$                        $$$$        \n ";
                                                                cout
                                                                        << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                cout
                                                                        << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                cout
                                                                        << "                               $$$$$$$$$$$$$$$               \n ";
                                                                cout
                                                                        << "                                  $$$$$$$$                   \n ";
                                                                cout
                                                                        << "                                      $                      \n ";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                break;
                                                            }
                                                        }
                                                        case 3: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |               QIWI                |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nLogin: ";
                                                            cin >> userName;
                                                            cout << "Current Steam balance: " << serviceBalance
                                                                 << " USD\n";
                                                            cout << "Payment amount (USD): ";
                                                            cin >> payment;
                                                            if (payment > cardUSD) {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |No SUFFICIENT FUNDS               !|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                serviceBalance += payment;
                                                                cardUSD -= payment;
                                                                cout << "Current QIWI balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current VISA CARD balance: " << cardUSD
                                                                     << " USD\n";
                                                                cout << "\n Operation Successfully Completed!\n";
                                                                cout
                                                                        << "                        $$$$$$$             $$$$$$$          \n ";
                                                                cout
                                                                        << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                cout
                                                                        << "                      $$$                        $$$$        \n ";
                                                                cout
                                                                        << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                cout
                                                                        << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                cout
                                                                        << "                               $$$$$$$$$$$$$$$               \n ";
                                                                cout
                                                                        << "                                  $$$$$$$$                   \n ";
                                                                cout
                                                                        << "                                      $                      \n ";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                break;
                                                            }
                                                        }
                                                        case 4: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |              AMAZON               |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nLogin: ";
                                                            cin >> userName;
                                                            cout << "Current AMAZON balance: " << serviceBalance
                                                                 << " USD\n";
                                                            cout << "Payment amount (USD): ";
                                                            cin >> payment;
                                                            if (payment > cardUSD) {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |No SUFFICIENT FUNDS               !|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                serviceBalance += payment;
                                                                cardUSD -= payment;
                                                                cout << "Current Steam balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current VISA CARD balance: " << cardUSD
                                                                     << " USD\n";
                                                                cout << "\n Operation Successfully Completed!\n";
                                                                cout
                                                                        << "                        $$$$$$$             $$$$$$$          \n ";
                                                                cout
                                                                        << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                cout
                                                                        << "                      $$$                        $$$$        \n ";
                                                                cout
                                                                        << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                cout
                                                                        << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                cout
                                                                        << "                               $$$$$$$$$$$$$$$               \n ";
                                                                cout
                                                                        << "                                  $$$$$$$$                   \n ";
                                                                cout
                                                                        << "                                      $                      \n ";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                break;
                                                            }
                                                        }
                                                        case 5: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |              ALIBABA              |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nLogin: ";
                                                            cin >> userName;
                                                            cout << "Current ALIBABA balance: " << serviceBalance
                                                                 << " USD\n";
                                                            cout << "Payment amount (USD): ";
                                                            cin >> payment;
                                                            if (payment > cardUSD) {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |No SUFFICIENT FUNDS               !|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                serviceBalance += payment;
                                                                cardUSD -= payment;
                                                                cout << "Current Steam balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current VISA CARD balance: " << cardUSD
                                                                     << " USD\n";
                                                                cout << "\n Operation Successfully Completed!\n";
                                                                cout
                                                                        << "                        $$$$$$$             $$$$$$$          \n ";
                                                                cout
                                                                        << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                cout
                                                                        << "                      $$$                        $$$$        \n ";
                                                                cout
                                                                        << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                cout
                                                                        << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                cout
                                                                        << "                               $$$$$$$$$$$$$$$               \n ";
                                                                cout
                                                                        << "                                  $$$$$$$$                   \n ";
                                                                cout
                                                                        << "                                      $                      \n ";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                break;
                                                            }
                                                        }
                                                        case 6: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |              SPOTIFY              !|\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nLogin: ";
                                                            cin >> userName;
                                                            cout << "Current Spotify balance: " << serviceBalance
                                                                 << " USD\n";
                                                            cout << "Payment amount (USD): ";
                                                            cin >> payment;
                                                            if (payment > cardUSD) {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |No SUFFICIENT FUNDS               !|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                serviceBalance += payment;
                                                                cardUSD -= payment;
                                                                cout << "Current Steam balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current VISA CARD balance: " << cardUSD
                                                                     << " USD\n";
                                                                cout << "\n Operation Successfully Completed!\n";
                                                                cout
                                                                        << "                        $$$$$$$             $$$$$$$          \n ";
                                                                cout
                                                                        << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                cout
                                                                        << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                cout
                                                                        << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                cout
                                                                        << "                      $$$                        $$$$        \n ";
                                                                cout
                                                                        << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                cout
                                                                        << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                cout
                                                                        << "                               $$$$$$$$$$$$$$$               \n ";
                                                                cout
                                                                        << "                                  $$$$$$$$                   \n ";
                                                                cout
                                                                        << "                                      $                      \n ";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                break;
                                                            }
                                                        }
                                                        case 7: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |              BEELINE              |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nPhone number (i.e 916668866): ";
                                                            cin >> phoneNumber;
                                                            if (enteredPhoneNumber >= 900000000 &&
                                                                enteredPhoneNumber < 920000000) {
                                                                cout << "Current Beeline balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current HUMO CARD balance: " << cardUZS
                                                                     << " USD\n";
                                                                cout << "Payment amount (UZS): ";
                                                                cin >> payment;
                                                                if (payment <= cardUZS) {
                                                                    cardUZS -= payment;
                                                                    serviceBalance += payment;
                                                                    cout << "Current HUMO CARD balance: " << cardUZS
                                                                         << endl;
                                                                    cout << "Current Beeline balance: "
                                                                         << serviceBalance
                                                                         << " UZS\n";
                                                                    cout << "\n Operation Successfully Completed!\n";
                                                                    cout
                                                                            << "                        $$$$$$$             $$$$$$$          \n ";
                                                                    cout
                                                                            << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                    cout
                                                                            << "                      $$$                        $$$$        \n ";
                                                                    cout
                                                                            << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                    cout
                                                                            << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                    cout
                                                                            << "                               $$$$$$$$$$$$$$$               \n ";
                                                                    cout
                                                                            << "                                  $$$$$$$$                   \n ";
                                                                    cout
                                                                            << "                                      $                      \n ";
                                                                    cout
                                                                            << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                } else {
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                    cout
                                                                            << "                     |       NO SUFFICIENT               |\n\n";
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                }
                                                            } else if (enteredPhoneNumber >= 930000000 &&
                                                                       enteredPhoneNumber < 950000000) {
                                                                cout
                                                                        << "\nYou enter Ucell Phone Number, restart program and choose Ucell\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 950000000 &&
                                                                       enteredPhoneNumber < 960000000) {
                                                                cout
                                                                        << "\nYou enter Uzmobile Phone Number, restart program and choose Uzmobile\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 970000000 &&
                                                                       enteredPhoneNumber < 980000000) {
                                                                cout
                                                                        << "\nYou enter UMS Phone Number, restart program and choose UMS\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 330000000 &&
                                                                       enteredPhoneNumber < 350000000) {
                                                                cout
                                                                        << "\nYou enter Humans Phone Number, restart program and choose Humans\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |Please, enter a valid phone number!|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            }
                                                            break;
                                                        }
                                                        case 8: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |               UCELL               |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nPhone number (i.e 936668866): ";
                                                            cin >> phoneNumber;
                                                            if (enteredPhoneNumber >= 930000000 &&
                                                                enteredPhoneNumber < 950000000) {
                                                                cout << "Current UCELL balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current HUMO CARD balance: " << cardUZS
                                                                     << " USD\n";
                                                                cout << "Payment amount (UZS): ";
                                                                cin >> payment;
                                                                if (payment <= cardUZS) {
                                                                    cardUZS -= payment;
                                                                    serviceBalance += payment;
                                                                    cout << "Current HUMO CARD balance: " << cardUZS
                                                                         << endl;
                                                                    cout << "Current Uzmobile balance: "
                                                                         << serviceBalance
                                                                         << " UZS\n";
                                                                    cout << "\n Operation Successfully Completed!\n";
                                                                    cout
                                                                            << "                        $$$$$$$             $$$$$$$          \n ";
                                                                    cout
                                                                            << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                    cout
                                                                            << "                      $$$                        $$$$        \n ";
                                                                    cout
                                                                            << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                    cout
                                                                            << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                    cout
                                                                            << "                               $$$$$$$$$$$$$$$               \n ";
                                                                    cout
                                                                            << "                                  $$$$$$$$                   \n ";
                                                                    cout
                                                                            << "                                      $                      \n ";
                                                                    cout
                                                                            << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                } else {
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                    cout
                                                                            << "                     |       NO SUFFICIENT               |\n\n";
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                }
                                                            } else if (enteredPhoneNumber >= 900000000 &&
                                                                       enteredPhoneNumber < 920000000) {
                                                                cout
                                                                        << "\nYou enter Beeline Phone Number, restart program and choose Ucell\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 950000000 &&
                                                                       enteredPhoneNumber < 960000000) {
                                                                cout
                                                                        << "\nYou enter Uzmobile Phone Number, restart program and choose Uzmobile\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 970000000 &&
                                                                       enteredPhoneNumber < 980000000) {
                                                                cout
                                                                        << "\nYou enter UMS Phone Number, restart program and choose UMS\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 330000000 &&
                                                                       enteredPhoneNumber < 350000000) {
                                                                cout
                                                                        << "\nYou enter Humans Phone Number, restart program and choose Humans\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |Please, enter a valid phone number!|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            }
                                                            break;
                                                        }
                                                        case 9: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |             UZMOBILE              |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nPhone number (i.e 956668866): ";
                                                            cin >> phoneNumber;
                                                            if (enteredPhoneNumber >= 950000000 &&
                                                                enteredPhoneNumber < 936000000) {
                                                                cout << "Current Uzmobile balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current HUMO CARD balance: " << cardUZS
                                                                     << " USD\n";
                                                                cout << "Payment amount (UZS): ";
                                                                cin >> payment;
                                                                if (payment <= cardUZS) {
                                                                    cardUZS -= payment;
                                                                    serviceBalance += payment;
                                                                    cout << "Current HUMO CARD balance: " << cardUZS
                                                                         << endl;
                                                                    cout << "Current Uzmobile balance: "
                                                                         << serviceBalance
                                                                         << " UZS\n";
                                                                    cout << "\n Operation Successfully Completed!\n";
                                                                    cout
                                                                            << "                        $$$$$$$             $$$$$$$          \n ";
                                                                    cout
                                                                            << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                    cout
                                                                            << "                      $$$                        $$$$        \n ";
                                                                    cout
                                                                            << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                    cout
                                                                            << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                    cout
                                                                            << "                               $$$$$$$$$$$$$$$               \n ";
                                                                    cout
                                                                            << "                                  $$$$$$$$                   \n ";
                                                                    cout
                                                                            << "                                      $                      \n ";
                                                                    cout
                                                                            << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                } else {
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                    cout
                                                                            << "                     |       NO SUFFICIENT               |\n\n";
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                }
                                                            } else if (enteredPhoneNumber >= 930000000 &&
                                                                       enteredPhoneNumber < 950000000) {
                                                                cout
                                                                        << "\nYou enter Ucell Phone Number, restart program and choose Ucell\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 900000000 &&
                                                                       enteredPhoneNumber < 920000000) {
                                                                cout
                                                                        << "\nYou enter Beeline Phone Number, restart program and choose Uzmobile\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 970000000 &&
                                                                       enteredPhoneNumber < 980000000) {
                                                                cout
                                                                        << "\nYou enter UMS Phone Number, restart program and choose UMS\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 330000000 &&
                                                                       enteredPhoneNumber < 350000000) {
                                                                cout
                                                                        << "\nYou enter Humans Phone Number, restart program and choose Humans\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |Please, enter a valid phone number!|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            }
                                                            break;
                                                        }
                                                        case 10: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |                UMS                |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nPhone number (i.e 916668866): ";
                                                            cin >> phoneNumber;
                                                            if (enteredPhoneNumber >= 900000000 &&
                                                                enteredPhoneNumber < 920000000) {
                                                                cout << "Current UMS balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current HUMO CARD balance: " << cardUZS
                                                                     << " USD\n";
                                                                cout << "Payment amount (UZS): ";
                                                                cin >> payment;
                                                                if (payment <= cardUZS) {
                                                                    cardUZS -= payment;
                                                                    serviceBalance += payment;
                                                                    cout << "Current HUMO CARD balance: " << cardUZS
                                                                         << endl;
                                                                    cout << "Current UMS balance: " << serviceBalance
                                                                         << " UZS\n";
                                                                    cout << "\n Operation Successfully Completed!\n";
                                                                    cout
                                                                            << "                        $$$$$$$             $$$$$$$          \n ";
                                                                    cout
                                                                            << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                    cout
                                                                            << "                      $$$                        $$$$        \n ";
                                                                    cout
                                                                            << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                    cout
                                                                            << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                    cout
                                                                            << "                               $$$$$$$$$$$$$$$               \n ";
                                                                    cout
                                                                            << "                                  $$$$$$$$                   \n ";
                                                                    cout
                                                                            << "                                      $                      \n ";
                                                                    cout
                                                                            << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                } else {
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                    cout
                                                                            << "                     |       NO SUFFICIENT               |\n\n";
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                }
                                                            } else if (enteredPhoneNumber >= 930000000 &&
                                                                       enteredPhoneNumber < 950000000) {
                                                                cout
                                                                        << "\nYou enter Ucell Phone Number, restart program and choose Ucell\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 950000000 &&
                                                                       enteredPhoneNumber < 960000000) {
                                                                cout
                                                                        << "\nYou enter Uzmobile Phone Number, restart program and choose Uzmobile\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 900000000 &&
                                                                       enteredPhoneNumber < 920000000) {
                                                                cout
                                                                        << "\nYou enter Beeline Phone Number, restart program and choose UMS\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 330000000 &&
                                                                       enteredPhoneNumber < 350000000) {
                                                                cout
                                                                        << "\nYou enter Humans Phone Number, restart program and choose Humans\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |Please, enter a valid phone number!|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            }
                                                            break;
                                                        }
                                                        case 11: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |              HUMANS               |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nPhone number (i.e 916668866): ";
                                                            cin >> phoneNumber;
                                                            if (enteredPhoneNumber >= 900000000 &&
                                                                enteredPhoneNumber < 920000000) {
                                                                cout << "Current HUMANS balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current HUMO CARD balance: " << cardUZS
                                                                     << " USD\n";
                                                                cout << "Payment amount (UZS): ";
                                                                cin >> payment;
                                                                if (payment <= cardUZS) {
                                                                    cardUZS -= payment;
                                                                    serviceBalance += payment;
                                                                    cout << "Current HUMO CARD balance: " << cardUZS
                                                                         << endl;
                                                                    cout << "Current Humans balance: " << serviceBalance
                                                                         << " UZS\n";
                                                                    cout << "\n Operation Successfully Completed!\n";
                                                                    cout
                                                                            << "                        $$$$$$$             $$$$$$$          \n ";
                                                                    cout
                                                                            << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                    cout
                                                                            << "                      $$$                        $$$$        \n ";
                                                                    cout
                                                                            << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                    cout
                                                                            << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                    cout
                                                                            << "                               $$$$$$$$$$$$$$$               \n ";
                                                                    cout
                                                                            << "                                  $$$$$$$$                   \n ";
                                                                    cout
                                                                            << "                                      $                      \n ";
                                                                    cout
                                                                            << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                } else {
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                    cout
                                                                            << "                     |       NO SUFFICIENT               |\n\n";
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                }
                                                            } else if (enteredPhoneNumber >= 930000000 &&
                                                                       enteredPhoneNumber < 950000000) {
                                                                cout
                                                                        << "\nYou enter Ucell Phone Number, restart program and choose Ucell\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 950000000 &&
                                                                       enteredPhoneNumber < 960000000) {
                                                                cout
                                                                        << "\nYou enter Uzmobile Phone Number, restart program and choose Uzmobile\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 970000000 &&
                                                                       enteredPhoneNumber < 980000000) {
                                                                cout
                                                                        << "\nYou enter UMS Phone Number, restart program and choose UMS\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 900000000 &&
                                                                       enteredPhoneNumber < 920000000) {
                                                                cout
                                                                        << "\nYou enter Beeline Phone Number, restart program and choose Humans\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |Please, enter a valid phone number!|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            }
                                                            break;
                                                        }
                                                        case 12: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |             PERFECTUM             |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                            cout << "\n\nPhone number (i.e 916668866): ";
                                                            cin >> phoneNumber;
                                                            if (enteredPhoneNumber >= 900000000 &&
                                                                enteredPhoneNumber < 920000000) {
                                                                cout << "Current PERFECTUM balance: " << serviceBalance
                                                                     << " USD\n";
                                                                cout << "Current HUMO CARD balance: " << cardUZS
                                                                     << " USD\n";
                                                                cout << "Payment amount (UZS): ";
                                                                cin >> payment;
                                                                if (payment <= cardUZS) {
                                                                    cardUZS -= payment;
                                                                    serviceBalance += payment;
                                                                    cout << "Current HUMO CARD balance: " << cardUZS
                                                                         << endl;
                                                                    cout << "Current Perfectum balance: "
                                                                         << serviceBalance
                                                                         << " UZS\n";
                                                                    cout << "\n Operation Successfully Completed!\n";
                                                                    cout
                                                                            << "                        $$$$$$$             $$$$$$$          \n ";
                                                                    cout
                                                                            << "                      $$$$$$$$$$$$$       $$$$$$$$$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$     \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   \n ";
                                                                    cout
                                                                            << "                    $$$$$  Thanks for choosing   $$$$$$      \n ";
                                                                    cout
                                                                            << "                     $$$$       GARGAPay         $$$$$       \n ";
                                                                    cout
                                                                            << "                      $$$                        $$$$        \n ";
                                                                    cout
                                                                            << "                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$         \n ";
                                                                    cout
                                                                            << "                          $$$$$$$$$$$$$$$$$$$$$$$            \n ";
                                                                    cout
                                                                            << "                               $$$$$$$$$$$$$$$               \n ";
                                                                    cout
                                                                            << "                                  $$$$$$$$                   \n ";
                                                                    cout
                                                                            << "                                      $                      \n ";
                                                                    cout
                                                                            << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77";
                                                                } else {
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                    cout
                                                                            << "                     |       NO SUFFICIENT               |\n\n";
                                                                    cout
                                                                            << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                }
                                                            } else if (enteredPhoneNumber >= 930000000 &&
                                                                       enteredPhoneNumber < 950000000) {
                                                                cout
                                                                        << "\nYou enter Ucell Phone Number, restart program and choose Ucell\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 950000000 &&
                                                                       enteredPhoneNumber < 960000000) {
                                                                cout
                                                                        << "\nYou enter Uzmobile Phone Number, restart program and choose Uzmobile\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 970000000 &&
                                                                       enteredPhoneNumber < 980000000) {
                                                                cout
                                                                        << "\nYou enter UMS Phone Number, restart program and choose UMS\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else if (enteredPhoneNumber >= 330000000 &&
                                                                       enteredPhoneNumber < 350000000) {
                                                                cout
                                                                        << "\nYou enter Humans Phone Number, restart program and choose Humans\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            } else {
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                                cout
                                                                        << "                     |Please, enter a valid phone number!|\n\n";
                                                                cout
                                                                        << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                            }
                                                            break;
                                                        }
                                                        default: {
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n\n";
                                                            cout
                                                                    << "                     |Please, enter a valid option!  |\n\n";
                                                            cout
                                                                    << "                     |⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻|\n";
                                                            cout
                                                                    << "\n ©GARGAPay SINCE-2021                                  CALL CENTER: +777 77 777 77 77\n";
                                                        }
                                                    }
                                                }
                                            }
                                            case 2: {
                                                int option40 = -1;
                                                while (option40 != 0) {
                                                    cout
                                                            << "  ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻   ⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                    cout
                                                            << "  |     1     |   |   2       |   |     3       |  |      4      |  |   0    |\n";
                                                    cout
                                                            << "  |   FREEZE  |   | EXCHANGE  |   |  TRANSFER   |  |   TOP UP    |  |  BACK  |\n";
                                                    cout
                                                            << "   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻   ⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                                    cout
                                                            << "\n ©GARGAPay SINCE-2021                        CALL CENTER: +777 77 777 77 77";
                                                    cout << "\n\n==>  ";
                                                    cin >> option40;
                                                    switch (option40) {
                                                        case 1: {
                                                            while (option40 != 0) {
                                                                cout
                                                                        << "\nIf you have lost your CARD, you can freeze it, then no operations can be performed";
                                                                cout << "\nDo you want to FREEZE your card?\n";
                                                                cout << "  ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                                                cout << "  |      1       |   |     2     |\n";
                                                                cout << "  |     YES      |   |     NO    |\n";
                                                                cout << "   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                        CALL CENTER: +777 77 777 77 77";
                                                                cout << "\n\n==>  ";
                                                                cin >> option40;
                                                                switch (option40) {
                                                                    case 1: {
                                                                        freezed = 1;
                                                                        cout
                                                                                << "Your CARDS has been successfully freezed";
                                                                        option40 = 0;
                                                                        option30 = 0;
                                                                        option2 = 0;
                                                                        break;
                                                                    }
                                                                    case 2: {
                                                                        option40 = 0;
                                                                        break;
                                                                    }
                                                                    default: {
                                                                        cout << "\nChoose Valid Option\n";
                                                                    }
                                                                }
                                                            }
                                                            break;

                                                        }
                                                        case 2: {
                                                            int option1 = -1;
                                                            while (option1 != 0) {
                                                                cout << "Exchange Values in UZS\n";
                                                                cout << "CURRENCY    SELL      BUY\n";
                                                                cout << "   USD     " << usdSell << "   " << usdBuy
                                                                     << endl;
                                                                cout << "   BTC     " << btcSell << "   " << btcBuy
                                                                     << endl;
                                                                cout
                                                                        << "  ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                                cout
                                                                        << "  |     1      |   |     2      |   |     3      |  |     4      |  |   0    |\n";
                                                                cout
                                                                        << "  |  USD BUY   |   |  USD SELL  |   |  BTC BUY   |  |  BTC SELL  |  |  BACK  |\n";
                                                                cout
                                                                        << "   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻  ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                        CALL CENTER: +777 77 777 77 77";
                                                                cout << "\n\n==>  ";
                                                                cin >> option1;
                                                                switch (option1) {
                                                                    double purchaseAmount;
                                                                    case 1: {
                                                                        cout << "                 Balance: \n";
                                                                        cout << "GARGAPay Humo: " << cardUZS
                                                                             << "UZS\n";
                                                                        cout << "GARGAPay Visa:" << cardUSD
                                                                             << "USD\n";
                                                                        cout << "Enter Purchase Amount(USD) ==> ";
                                                                        cin >> purchaseAmount;
                                                                        if (purchaseAmount * usdBuy <= cardUZS) {
                                                                            cardUZS -= (double) usdBuy *
                                                                                       purchaseAmount;
                                                                            cardUSD += purchaseAmount;
                                                                            cout << "\nSuccessfully exchanged\n";
                                                                            cout << "                 Balance: \n";
                                                                            cout << "GARGAPay Humo: " << cardUZS
                                                                                 << "UZS\n";
                                                                            cout << "GARGAPay Visa:" << cardUSD
                                                                                 << "USD\n";
                                                                        } else {
                                                                            cout
                                                                                    << "\nNo sufficient funds in GARGAPay Humo\n";
                                                                            cout << "GARGAPay Humo: " << cardUZS
                                                                                 << "UZS\n";
                                                                            cout << "Your input "
                                                                                 << purchaseAmount * usdBuy << endl;
                                                                        }
                                                                        break;
                                                                    }
                                                                    case 2: {
                                                                        cout << "                 Balance: \n";
                                                                        cout << "GARGAPay Humo: " << cardUZS
                                                                             << "UZS\n";
                                                                        cout << "GARGAPay Visa:" << cardUSD
                                                                             << "USD\n";
                                                                        cout << "Enter Purchase Amount(USD) ==> ";
                                                                        cin >> purchaseAmount;
                                                                        if (purchaseAmount <= cardUSD) {
                                                                            cardUZS += (double) usdSell *
                                                                                       purchaseAmount;
                                                                            cardUSD -= purchaseAmount;
                                                                            cout << "\nSuccessfully exchanged\n";
                                                                            cout << "                 Balance: \n";
                                                                            cout << "GARGAPay Humo: " << cardUZS
                                                                                 << "UZS\n";
                                                                            cout << "GARGAPay Visa:" << cardUSD
                                                                                 << "USD\n";
                                                                        } else {
                                                                            cout
                                                                                    << "\nNo sufficient funds in GARGAPay VISA\n";
                                                                            cout << "GARGAPay VISA: " << cardUZS
                                                                                 << "UZS\n";
                                                                            cout << "Your input "
                                                                                 << purchaseAmount << " USD"
                                                                                 << endl;
                                                                        }
                                                                        break;
                                                                    }
                                                                    case 3: {
                                                                        cout << "                 Balance: \n";
                                                                        cout << "GARGAPay BTC: " << cardBTC
                                                                             << "BTC\n";
                                                                        cout << "GARGAPay Visa:" << cardUSD
                                                                             << "USD\n";
                                                                        cout << "Enter Purchase Amount(USD) ==> ";
                                                                        cin >> purchaseAmount;
                                                                        if (purchaseAmount / btcBuy <= cardUSD) {
                                                                            cardBTC += (double) purchaseAmount /
                                                                                       btcBuy;
                                                                            cardUSD -= purchaseAmount;
                                                                            cout << "\nSuccessfully exchanged\n";
                                                                            cout << "                 Balance: \n";
                                                                            cout << "GARGAPay BTC: " << cardBTC
                                                                                 << "BTC\n";
                                                                            cout << "GARGAPay Visa:" << cardUSD
                                                                                 << "USD\n";
                                                                        } else {
                                                                            cout
                                                                                    << "\nNo sufficient funds in GARGAPay VISA\n";
                                                                            cout << "GARGAPay VISA: " << cardUZS
                                                                                 << "UZS\n";
                                                                            cout << "Your input "
                                                                                 << purchaseAmount << " USD"
                                                                                 << endl;
                                                                        }
                                                                        break;
                                                                    }
                                                                    case 4: {
                                                                        cout << "                 Balance: \n";
                                                                        cout << "GARGAPay BTC: " << cardBTC
                                                                             << "BTC\n";
                                                                        cout << "GARGAPay Visa:" << cardUSD
                                                                             << "USD\n";
                                                                        cout << "Enter Purchase Amount(BTC) ==> ";
                                                                        cin >> purchaseAmount;
                                                                        if (purchaseAmount <= cardBTC) {
                                                                            cardBTC -= purchaseAmount;
                                                                            cardUSD += purchaseAmount * btcSell;
                                                                            cout << "\nSuccessfully exchanged\n";
                                                                            cout << "                 Balance: \n";
                                                                            cout << "GARGAPay BTC: " << cardBTC
                                                                                 << "BTC\n";
                                                                            cout << "GARGAPay Visa:" << cardUSD
                                                                                 << "USD\n";
                                                                        } else {
                                                                            cout
                                                                                    << "\nNo sufficient funds in GARGAPay VISA\n";
                                                                            cout << "GARGAPay VISA: " << cardUZS
                                                                                 << "UZS\n";
                                                                            cout << "Your input "
                                                                                 << purchaseAmount << " USD"
                                                                                 << endl;
                                                                        }
                                                                        break;
                                                                    }
                                                                    case 0: {
                                                                        option1 = 0;
                                                                        break;
                                                                    }
                                                                    default: {
                                                                        cout << "\nChoose Valid option\n";
                                                                        break;
                                                                    }
                                                                }
                                                            }
                                                            break;
                                                        }
                                                        case 3: {
                                                            cout
                                                                    << " ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                            cout
                                                                    << "| Islom aka, database yo API ishlatmelar degan :(  |\n";
                                                            cout
                                                                    << "⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                            break;
                                                        }
                                                        case 4: {
                                                            int transferAmount;
                                                            int option200 = -1;
                                                            while (option200) {
                                                                cout << "Choose Your Card";
                                                                cout
                                                                        << "  ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                                cout
                                                                        << "  |      1     |   |      2     |   |      3        |  |      0      |\n";
                                                                cout
                                                                        << "  |  HUMO UZS  |   |  VISA UZS  |   | GARGAPay BTC  |  |     BACK    |\n";
                                                                cout
                                                                        << "   ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻    ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻\n";
                                                                cout
                                                                        << "\n ©GARGAPay SINCE-2021                        CALL CENTER: +777 77 777 77 77";
                                                                cout << "\n\n==>  ";
                                                                cin >> option200;
                                                                switch (option200) {
                                                                    case 1: {
                                                                        cout << "GARGAPay Humo: " << cardUZS
                                                                             << "UZS\n";
                                                                        cout << "Enter Top Up amount(UZS) ==> ";
                                                                        cin >> transferAmount;
                                                                        if (transferAmount >= 0) {
                                                                            cardUZS += transferAmount;
                                                                            cout << "GARGAPay Humo: " << cardUZS
                                                                                 << "UZS\n";
                                                                            option200 = 0;
                                                                        } else {
                                                                            cout << "\nEnter valid amount\n";
                                                                        }
                                                                        break;
                                                                    }
                                                                    case 2: {
                                                                        cout << "GARGAPay VISA: " << cardUSD
                                                                             << "USD\n";
                                                                        cout << "Enter Top Up amount(USD) ==> ";
                                                                        cin >> transferAmount;
                                                                        if (transferAmount >= 0) {
                                                                            cardUSD += transferAmount;
                                                                            cout << "GARGAPay VISA: " << cardUSD
                                                                                 << "USD\n";
                                                                            option200 = 0;
                                                                        } else {
                                                                            cout << "\nEnter valid amount\n";
                                                                        }
                                                                        break;
                                                                    }
                                                                    case 3: {
                                                                        cout << "GARGAPay BTC: " << cardBTC
                                                                             << "BTC\n";
                                                                        cout << "Enter Top Up amount(BTC) ==> ";
                                                                        cin >> transferAmount;
                                                                        if (transferAmount >= 0) {
                                                                            cardBTC += transferAmount;
                                                                            cout << "GARGAPay BTC: " << cardBTC
                                                                                 << "BTC\n";
                                                                            option200 = 0;
                                                                        } else {
                                                                            cout << "\nEnter valid amount\n";
                                                                        }
                                                                        break;
                                                                    }
                                                                    case 0: {
                                                                        option200 = 0;
                                                                        break;
                                                                    }
                                                                    default: {
                                                                        cout << "Invalid option";
                                                                    }
                                                                }
                                                            }
                                                            break;
                                                        }
                                                        case 0: {
                                                            option40 = 0;
                                                            break;
                                                        }
                                                        default: {
                                                            cout << "Choose valud numbere";
                                                            break;
                                                        }

                                                    }
                                                }
                                                break;
                                            }
                                            case 3: {
                                                cout << "Temporarily Unavailable";
                                                break;
                                            }
                                            case 0: {
                                                option30 = 0;
                                                option112 = 0;
                                                break;
                                            }
                                            default: {
                                                cout << "Choose valid option\n";
                                            }
                                        }
                                    }
                                } else {
                                cout << "\nPhone number or Password is wrong\n";
                                wrongTimes++;
                                }

                            if (wrongTimes >= 3) {
                                cout << "\n          Too many wrong attempts!\n";
                                cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                cout << "    |         1         |        |         0         |\n";
                                cout << "    |      RECOVER      |        |        BACK       |\n";
                                    cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                    cout << "\n ©GARGAPay SINCE-2021        CALL CENTER: +777 77 777 77 77";
                                    freezed = 1;
                                    int option4 = -1;
                                    while (option4 != 0) {
                                        cout << "\n\n\n Option ==> ";
                                        cin >> option4;
                                        switch (option4) {
                                            case 1: {
                                                cout << "\n   How do you want to recover? \n";
                                                cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                                cout << "    |         1         |        |         2         |\n";
                                                cout << "    |    SECRET WORD    |        |      Send SMS     |\n";
                                                cout << "     ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻          ⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻ \n";
                                                cout << "\n ©GARGAPay SINCE-2021        CALL CENTER: +777 77 777 77 77";
                                                cout << "\n\n\n Option ==> ";
                                                int option10 = -1;
                                                cin >> option10;
                                                switch (option10) {
                                                    case 1: {
                                                        string checkSecretWord;
                                                        cout << "\nEnter secret word ==> ";
                                                        cin >> checkSecretWord;
                                                        if (checkSecretWord == secretWord) {
                                                            password = tempPassword;
                                                            cout << "Password reset to " << tempPassword;
                                                            option10 = 0;
                                                            break;
                                                        } else {
                                                            option10 = 0;
                                                            break;
                                                        }
                                                    }
                                                    case 2: {
                                                        int tempCode = rand() / 100000;
                                                        int checkCode;
                                                        while (option != 0) {
                                                            cout << "Message with code has been sent to "
                                                                 << phoneNumber[phoneNumber.length() - 2]
                                                                 << phoneNumber[phoneNumber.length() - 1];
                                                            cout << "\n==> " << tempCode;
                                                            cout << "\nCode ==> ";
                                                            cin >> checkCode;
                                                            if (tempCode == checkCode) {
                                                                password = tempPassword;
                                                                cout << "The password has been successfully reset to "
                                                                     << password;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    default: {
                                                        cout << "\nChoose Valid option!\n";
                                                    }
                                                }
                                            }
                                            case 0: {
                                                option4 = 0;
                                                option112 = 0;
                                                break;
                                            }
                                            default: {
                                                cout << "\nChoose valid option\n";
                                                break;
                                            }

                                        }
                                    }
                                } else if (wrongTimes == 2) {
                                    cout << "\nOne more attempt is left\n";
                                    cout << "HINT: " << hint << endl;
                                } else if (wrongTimes == 1) {
                                    cout << "\nTwo more attempts are left\n";
                                    cout << "HINT: " << hint << endl;
                                }
                            }
                            break;
                        }
                        case 2: {
                            int option20 = -1;
                            while (option20 != 0) {
                                string checkPhoneNumber, tempSecretWord, tempHint, enteredPassword, checkPassword;
                                cout << "Enter phone number ==> ";
                                cin >> checkPhoneNumber;
                                cout << "Enter Secret word ==> ";
                                cin >> tempSecretWord;
                                cout << "Enter Hint word ==> ";
                                cin >> tempHint;
                                cout << "Enter password ==> ";
                                cin >> enteredPassword;
                                cout << "Confirm password ==> ";
                                cin >> checkPassword;
                                if (enteredPassword == checkPassword) {
                                    if (checkPhoneNumber.length() == 9) {
                                        checkPhoneNumber = "+998" + checkPhoneNumber;
                                    } else if (checkPhoneNumber.length() == 12) {
                                        checkPhoneNumber = "+" + checkPhoneNumber;
                                    }
                                    phoneNumber = checkPhoneNumber;
                                    password = enteredPassword;
                                    hint = tempHint;
                                    secretWord = tempSecretWord;
                                    cardBTC = 0;
                                    cardUSD = 0;
                                    cardUZS = 0;
                                    cout << "Registration is successful, you can log in now!\n\n";
                                    option20 = 0;
                                } else {
                                    cout << "\nPasswords don't match\n";
                                }
                            }

                        }

                    }
                }
            }
        }
    }
    return 0;
}

