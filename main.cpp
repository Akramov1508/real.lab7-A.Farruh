#include <iostream>
using namespace std;
// void incrementByreference(int &a) {
//     a=a+1;
// }
// int main() {
//     int num=5;
//     incrementByreference(num);
//     cout<<"after call by reference:"<<num<<endl;
//     return 0;
// }

// void incrementByValue(int a) {
//     a = a + 1;
// }
// int main() {
//     int num=5;
//     incrementByValue(num);
//     cout << "After call by value: " << num << endl;
// }

//prb1
// double calculateTotal(int item, int quantity) {
//     double price = 0;
//     switch (item) {
//         case 1: price = 10.0; break;
//         case 2: price = 8.0; break;
//         case 3: price = 5.0; break;
//         default: return -1;
//     }
//     return price * quantity;
// }
//
// int main() {
//     int choice, quantity;
//     double totalBill = 0;
//     char again;
//
//     do {
//         cout << "\nMenu:\n";
//         cout << "1. Pizza - $10\n2. Burger - $8\n3. Salad - $5\n";
//         cout << "Enter item number (1-3): ";
//         cin >> choice;
//
//         if (choice < 1 || choice > 3) {
//             cout << "Invalid choice! Please enter a valid option.\n";
//             continue;
//         }
//
//         cout << "Enter quantity: ";
//         cin >> quantity;
//
//         if (quantity <= 0) {
//             cout << "Invalid quantity! Please enter a positive number.\n";
//             continue;
//         }
//         double cost = calculateTotal(choice, quantity);
//         totalBill += cost;
//         cout << "Item added. Current Total: $" << totalBill << endl;
//         cout << "Do you want to order more? (y/n): ";
//         cin >> again;
//
//     } while (again == 'y' || again == 'Y');
//
//     cout << "\nFinal Total Bill: $" << totalBill << endl;
//     cout << "Thank you for ordering!\n";
//
//     return 0;
// }

//prb2
// double calculateFee(int hours) {
//     if (hours <= 2)
//         return 0;
//     if (hours <= 5)
//         return (hours - 2) * 2;
//         return (3 * 2) + ((hours - 5) * 5);
// }
//
// int main() {
//     int hours;
//     char another;
//     do {
//         cout << "Enter number of hours parked: ";
//         cin >> hours;
//         double fee = calculateFee(hours);
//         cout << "Parking Fee: $" << fee << endl;
//         cout << "Calculate for another car? (y/n): ";
//         cin >> another;
//     } while (another == 'y' || another == 'Y');
//     cout << "Thank you for using our parking service!\n";
//     return 0;
// }

//prb3
// double balance = 500.0;
// void checkBalance() {
//     cout << "Current Balance: $" << balance << endl;
// }
// void deposit(double amount) {
//     if (amount > 0) {
//         balance += amount;
//         cout << "Deposited: $" << amount << endl;
//     } else {
//         cout << "Invalid deposit amount!\n";
//     }
// }
// void withdraw(double amount) {
//     if (amount > balance) {
//         cout << "Insufficient funds!\n";
//     } else if (amount <= 0) {
//         cout << "Invalid withdrawal amount!\n";
//     } else {
//         balance -= amount;
//         cout << "Withdrawn: $" << amount << endl;
//     }
// }
//
// int main() {
//     int choice;
//     double amount;
//     char again;
//
//     do {
//         cout << "\nBanking System Menu:\n";
//         cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 checkBalance();
//             break;
//             case 2:
//                 cout << "Enter deposit amount: ";
//             cin >> amount;
//             deposit(amount);
//             break;
//             case 3:
//                 cout << "Enter withdrawal amount: ";
//             cin >> amount;
//             withdraw(amount);
//             break;
//             case 4:
//                 cout << "Exiting Banking System. Thank you!\n";
//             return 0;
//             default:
//                 cout << "Invalid choice! Try again.\n";
//         }
//
//         cout << "Do you want another transaction? (y/n): ";
//         cin >> again;
//
//     } while (again == 'y' || again == 'Y');
//
//     cout << "Thank you for using our bank!\n";
//     return 0;
// }

//prb4
// double calculateCost(int movie, int tickets) {
//     double price = 0;
//     switch (movie) {
//         case 1: price = 8.0; break;
//         case 2: price = 10.0; break;
//         case 3: price = 12.0; break;
//         default: return 0;
//     }
//     return price * tickets;
// }
//
// int main() {
//     int choice, tickets;
//     char again;
//
//     do {
//         cout << "Movie Menu:\n";
//         cout << "1. Movie A - $8\n2. Movie B - $10\n3. Movie C - $12\n";
//         cout << "Enter movie number (1-3): ";
//         cin >> choice;
//
//         cout << "Enter number of tickets: ";
//         cin >> tickets;
//         double total = calculateCost(choice, tickets);
//         if (total == 0) {
//             cout << "Invalid movie choice! Try again.\n";
//         } else {
//             cout << "Total Cost: $" << total << endl;
//         }
//         cout << "Do you want to book more tickets? (y/n): ";
//         cin >> again;
//
//     } while (again == 'y' || again == 'Y');
//
//     cout << "Enjoy your movie!\n";
//
//     return 0;
// }

//prb5
// double calculateFare(int train, int tickets) {
//     double price = 0;
//     switch (train) {
//         case 1: price = 15.0; break;
//         case 2: price = 20.0; break;
//         case 3: price = 25.0; break;
//         default: return 0;
//     }
//     return price * tickets;
// }
//
// int main() {
//     int choice, tickets;
//     char again;
//
//     do {
//         cout << "Available Trains:\n";
//         cout << "1. Train X - $15\n2. Train Y - $20\n3. Train Z - $25\n";
//         cout << "Enter train number (1-3): ";
//         cin >> choice;
//
//         cout << "Enter number of tickets: ";
//         cin >> tickets;
//         double total = calculateFare(choice, tickets);
//         if (total == 0) {
//             cout << "Invalid train choice! Try again.\n";
//         } else {
//             cout << "Total Fare: $" << total << endl;
//         }
//         cout << "Do you want to book another ticket? (y/n): ";
//         cin >> again;
//
//     } while (again == 'y' || again == 'Y');
//
//     cout << "Thank you for booking with us!\n";
//
//     return 0;
//}

//prb6
// using namespace std;
// bool isStrongPassword(string password) {
//     bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
//     if (password.length() < 8) {
//         cout << "Weak Password (Must be at least 8 characters long)\n";
//         return false;
//     }
//     for (char ch : password) {
//         if (isupper(ch)) hasUpper = true;
//         else if (islower(ch)) hasLower = true;
//         else if (isdigit(ch)) hasDigit = true;
//         else hasSpecial = true;
//     }
//     if (!hasUpper) cout << "Weak Password (Missing uppercase letter)\n";
//     if (!hasLower) cout << "Weak Password (Missing lowercase letter)\n";
//     if (!hasDigit) cout << "Weak Password (Missing digit)\n";
//     if (!hasSpecial) cout << "Weak Password (Missing special character)\n";
//     return hasUpper && hasLower && hasDigit && hasSpecial;
// }
// int main() {
//     string password;
//     cout << "Enter password: ";
//     cin >> password;
//     if (isStrongPassword(password)) {
//         cout << "Strong Password!\n";
//     }
//     return 0;
// }

//prb7
// bool isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }
// int getMaxDays(int month, int year) {
//     if (month == 2) return isLeapYear(year) ? 29 : 28;
//     if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
//     return 31;
// }
// int main() {
//     int day, month, year;
//     cout << "Enter date (DD MM YYYY): ";
//     cin >> day >> month >> year;
//     if (month < 1 || month > 12 || day < 1 || day > getMaxDays(month, year)) {
//         cout << "Invalid Date!\n";
//     } else {
//         cout << "Valid Date!\n";
//     }
//     return 0;
// }
