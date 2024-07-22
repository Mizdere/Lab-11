
// Last Modified Date: 5/15/2024

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure to hold information for each month at the airport
struct AirportTraffic {
    int totalLanded;
    int totalDeparted;
    int maxLandedInDay;
    int minLandedInDay;
};

int main() {
    AirportTraffic year[12];
    string months[12] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
    int totalLandedYear = 0, totalDepartedYear = 0;
    int greatestLandingDay = 0, leastLandingDay = INT_MAX;
    string greatestLandingMonth, leastLandingMonth;

    // User input for each month
    for (int i = 0; i < 12; i++) {
        cout << "Enter data for " << months[i] << ":" << endl;
        cout << "Total number of planes that landed: ";
        cin >> year[i].totalLanded;
        cout << "Total number of planes that departed: ";
        cin >> year[i].totalDeparted;
        cout << "Greatest number of planes that landed in a single day: ";
        cin >> year[i].maxLandedInDay;
        cout << "Least number of planes that landed in a single day: ";
        cin >> year[i].minLandedInDay;

        totalLandedYear += year[i].totalLanded;
        totalDepartedYear += year[i].totalDeparted;

        if (year[i].maxLandedInDay > greatestLandingDay) {
            greatestLandingDay = year[i].maxLandedInDay;
            greatestLandingMonth = months[i];
        }

        if (year[i].minLandedInDay < leastLandingDay) {
            leastLandingDay = year[i].minLandedInDay;
            leastLandingMonth = months[i];
        }
    }

    double avgLanded = static_cast<double>(totalLandedYear) / 12;
    double avgDeparted = static_cast<double>(totalDepartedYear) / 12;

    // Output the calculated statistics
    cout << fixed << setprecision(2);
    cout << "\nAnnual Statistics:\n";
    cout << "Average monthly number of landing planes: " << avgLanded << endl;
    cout << "Average monthly number of departing planes: " << avgDeparted << endl;
    cout << "Total number of landing planes for the year: " << totalLandedYear << endl;
    cout << "Total number of departing planes for the year: " << totalDepartedYear << endl;
    cout << "Greatest number of planes that landed in one day was in " << greatestLandingMonth
         << " with " << greatestLandingDay << " planes." << endl;
    cout << "Least number of planes that landed in one day was in " << leastLandingMonth
         << " with " << leastLandingDay << " planes." << endl;

    return 0;
}
