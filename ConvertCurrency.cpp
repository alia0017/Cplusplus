#include <iostream>

using namespace std;

main() {
    const double usd_to_eur {1.19};
    const double usd_to_cad {0.76};

    cout << "Welcome to EUR to USD Converter" << endl;
    cout << "Enter the value in EUR: ";
    double euros {0.0};
    double usd_from_eur {0.0};
    cin >> euros;
    usd_from_eur = euros * usd_to_eur;

    cout << euros << " EUR converts to " << usd_from_eur << " USD" << endl;

    cout << "Welcome to CAD to USD Converter" << endl;
    cout << "Enter the value in CAD: ";
    double cad {0.0};
    double usd_from_cad {0.0};
    cin >> cad;
    usd_from_cad = cad * usd_to_cad;

    cout << cad << " CAD converts to " << usd_from_cad << " USD" << endl;

    return 0;
}