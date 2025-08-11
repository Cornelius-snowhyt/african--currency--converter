   INTRODUCTION  

This project is a beginner-friendly c++ console application that converts various African currencies to US Dollars using fixed exchange rates. 
It is part of my personal coding portfolio to showcase my learning progress and problem-solving skills in C++ Programming.

FEATURES
**Map-based currency storage lookups.
**Support almost all African currencies.
**Case sensitive currency code input.
**Friendly welcome and error messages.
**Accurate conversion with two decimals places.



#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

int main() { 
    //==== Author: CORNELIUS-SNOWHYT =====
    //Map of currency codes or country names to fixed exchange rates
    map<string, double> exchangeRates = {
        {"Ghana", 10.50},
        {"GHC", 10.50},
        {"Nigeria", 1535.73},
        {"NGN", 1535.73},
        {"Bostwana", 13.86},
        {"Pula", 13.86},
        {"Francophone West Africa", 567.50},
        {"CFA", 567.50},
        {"South Arica", 18.20},
        {"ZAR", 18.20},
        {"Kenya", 145.50},
        {"KES", 145.20},
        {"Egypt", 48.20},
        {"EGP", 48.20},
        {"Tunisia", 2.89},
        {"TND", 2.89},
        {"Tanzania", 2570.00},
        {"TZS", 2570.00},
        {"Morroco", 9.09},
        {"MAD", 9.09},
        {"Zambia", 25.30},
        {"ZMW", 25.30},
        {"Eswatini", 17.64},
        {"SZL", 17.64},
        {"Uganda", 3584.00},
        {"UGX", 3584.00},
        {"Zimbabwe", 322.00},
        {"ZWL", 322.00},
        {"Sudan", 600.50},
        {"SDG", 600.50},
        {"South Sudan", 130.30},
        {"SSP", 130.30},
        {"Somalia", 571.60},
        {"SOS", 571.60},
        {"Seychelles", 21.35},
        {"SCR", 21.35},
        {"Rwanda", 1441.80},
        {"RWF", 1441.80},
        {"Namibia", 17.88},
        {"NAD", 17.88},
        {"Mozambique", 63.96},
        {"MZN", 63.93},
        {"Mauritius", 45.60},
        {"MUR", 45.60},
        {"Liberia", 17.90},
        {"LRD", 17.90},
        {"Ethiopia", 137.60},
        {"ETB", 137.60},
        {"Eriteria", 15.00},
        {"ERN", 15.00},
        {"Cape Verde", 96.00},
        {"CVE", 96.00},
        {"Angola", 915.00},
        {"AOA", 915.00},
        {"Algeria", 130.00},
        {"DZD", 130.00},
        {"Francophon Central Africa", 567.50},
        {"XAF", 567.50},
        {"Burundi", 2942.50},
        {"BIF", 2942.50},
        {"Sao Tome and Principe", 22280.80},
        {"STN", 22280.80}

    };

    double usdAmount;
    string input;
    char again;

    cout << "================================================\n";
    cout << "  CORNELIUS-SNOWHYT'S African Currency Converter\n";
    cout << "================================================\n";

    cout << fixed << setprecision(2);

    do {
        cout << "\nEnter amount in USD: ";
        cin >> usdAmount;

        cout << "Enter country name or currency code (e.g., Ghana or GHC): ";
        cin >> input;

        //Capitalise input if necessary (optional: implement tolower/toupper normalization)

        if (exchangeRates.find(input) != exchangeRates.end()) {
            double rate = exchangeRates[input];
            cout << usdAmount << " USD = " << usdAmount * rate << " in " << input << endl;
        } else {
            cout << "Currency or country not supported.\n";

        }

        cout << "\nWould you like to convert another amount (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using CORNELIUS-SNOWHYT's currency converter.Goodbye!\n";
    return 0;

}


SKILLS DEMONSTRATED
**C++ syntax and console I/O.
**STL map for key-value data storage.
**String manipulation and uppercase conversion.
**Floating-point formatting with setprecision().
**Writing interactive CLI programs.

License
**License under the MIT License-feel free to use, modify and share but please credit CORNELIUS-SNOWHYT.








    



