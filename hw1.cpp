/*
Tyler Siedner
Homework assignment 1
CSC131-A
*/


//Include needed header files for program.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

main()

{
    //Define variables
    double annual_interest_rate;
    double monthly_interest_rate;
    double total_paid;
    double payment;
    double loan_amount;
    int monthly_payments;
    int loan_term_years;
    double interest;

    //Prompt user for info, set the user inputs to variables.
    cout << "What is the loan amount? ";
    cin >> loan_amount;
    cout << "What is the annual interest rate? ";
    cin >> annual_interest_rate;
    cout << "What is the loan term in years? ";
    cin >> loan_term_years;

    //With info provided by user, calculate data.
    monthly_payments = loan_term_years * 12;
    monthly_interest_rate = annual_interest_rate / (100 *12);
    payment = ((monthly_interest_rate * pow(1 + monthly_interest_rate,monthly_payments))/(pow(1 + monthly_interest_rate,monthly_payments) - 1)) * loan_amount;
    total_paid = payment * monthly_payments;
    interest = (total_paid - loan_amount);



    //Display to the user information after calculations, monthly payment, total paid, interest.
    //Adjust each column to display evenly.
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Monthly Payment:" << setw(1) << "$" << right << setw(15) << payment << endl;
    cout << left << setw(20) << "Total amount paid:" << setw(1) << "$" << right << setw(15) << total_paid << endl;
    cout << left << setw(20) << "Interest paid:" << setw(1) << "$" << right << setw(15) << interest << endl;

    return 0;

}
