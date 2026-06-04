#include <iostream>
#include <iomanip>
using namespace std;

void calculateROI()
{
    double installationCost, monthlySavings, annualMaintenance;
    int lifespan;

    cout << "\n--- Solar Panel ROI Calculation ---\n";

    cout << "Enter Installation Cost (Rs): ";
    cin >> installationCost;

    cout << "Enter Monthly Electricity Savings (Rs): ";
    cin >> monthlySavings;

    cout << "Enter Annual Maintenance Cost (Rs): ";
    cin >> annualMaintenance;

    cout << "Enter System Lifespan (Years): ";
    cin >> lifespan;

    double annualSavings = monthlySavings * 12;
    double netAnnualSavings = annualSavings - annualMaintenance;
    double paybackPeriod = installationCost / netAnnualSavings;
    double totalProfit = (netAnnualSavings * lifespan) - installationCost;
    double roi = (totalProfit / installationCost) * 100;

    cout << fixed << setprecision(2);

    cout << "\n===== RESULT =====\n";
    cout << "Annual Savings      : Rs " << annualSavings << endl;
    cout << "Net Annual Savings  : Rs " << netAnnualSavings << endl;
    cout << "Payback Period      : " << paybackPeriod << " Years" << endl;
    cout << "Total Profit        : Rs " << totalProfit << endl;
    cout << "ROI Percentage      : " << roi << "%" << endl;

    if (roi > 0)
        cout << "Investment Status   : PROFITABLE\n";
    else
        cout << "Investment Status   : NOT PROFITABLE\n";
}

void compareSystems()
{
    double cost1, saving1;
    double cost2, saving2;

    cout << "\n--- Compare Two Solar Systems ---\n";

    cout << "\nSystem 1 Installation Cost (Rs): ";
    cin >> cost1;
    cout << "System 1 Annual Savings (Rs): ";
    cin >> saving1;

    cout << "\nSystem 2 Installation Cost (Rs): ";
    cin >> cost2;
    cout << "System 2 Annual Savings (Rs): ";
    cin >> saving2;

    double roi1 = (saving1 / cost1) * 100;
    double roi2 = (saving2 / cost2) * 100;

    cout << fixed << setprecision(2);

    cout << "\nSystem 1 ROI: " << roi1 << "%" << endl;
    cout << "System 2 ROI: " << roi2 << "%" << endl;

    if (roi1 > roi2)
        cout << "\nSystem 1 provides better returns.\n";
    else if (roi2 > roi1)
        cout << "\nSystem 2 provides better returns.\n";
    else
        cout << "\nBoth systems provide equal returns.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n      SOLAR PANEL ROI CALCULATOR";
        cout << "\n====================================";
        cout << "\n1. Calculate ROI";
        cout << "\n2. Compare Solar Systems";
        cout << "\n3. Exit";
        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                calculateROI();
                break;

            case 2:
                compareSystems();
                break;

            case 3:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}
