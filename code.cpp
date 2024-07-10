#include <iostream>
#include <string>
#include <ctime> 

using namespace std;

void identifyCode(int n);
void showLoadingBar();
void displayMenu();

void Game()
{
 bool play = true;
 int choice = 0;
 while (play)  {
 displayMenu();
 cout << "\nEnter your choice: ";
 cin >> choice;
 if (choice == 1) {
 showLoadingBar();
 int x;
 cout << "How many bits are in your code? Please enter here: ";
 cin >> x;
 identifyCode(x);
 play = false;
 }
 else if (choice == 2) {
 cout << "Do you really want to exit? (Y/N): ";
 char exitChoice;
 cin >> exitChoice;
 if (exitChoice == 'Y' || exitChoice == 'y') {
 play = false;
 }
 }
 else {
 cout << "Invalid choice. Please try again.\n";
 }
 }
}

void delay(int milliseconds)
{
 clock_t start_time = clock();
 while (clock() < start_time + milliseconds);
}

void showLoadingBar() {
 const int barWidth = 30;
 cout << endl;
 cout << "\rLoading: [";
 for (int i = 0; i < barWidth; ++i) {
 cout << "=";
 delay(30); // Delay for 30 milliseconds
 }
 cout << "]\n\n";
}

void displayMenu() 
{
 cout << R"(
 CCCCC OOO DDDD EEEEE GGG U U EEEEE SSSSSS SSSSSS
C O O D D E G G U U E S S
C O O D D E G U U E S S 
C O O D D EEEEEE G U U EEEE SSSSSS SSSSSS
C O O D D E G GG U U E S S
C O O D D E G G U U E S S
 CCCCC OOO DDDD EEEEE GGGG UUU EEEEE SSSSSS SSSSSS 
)";
 cout << "\n\t1. PLAY\n";
 cout << "\t2. EXIT\n";
}

void identifyCode(int n) 
{
 string guess(n, '0');
 int matchingBits;
 cout << "How many bits match in this code: " << guess << endl;
 cin >> matchingBits;
 for (int i = 0; i < n; ++i) {
 guess[i] = (guess[i] == '0') ? '1' : '0';
 int newMatchingBits;
 cout << "How many bits match in this code: " << guess << endl;
 cin >> newMatchingBits;
 if (newMatchingBits <= matchingBits) {
 guess[i] = (guess[i] == '0') ? '1' : '0';
 }
 else {
 matchingBits = newMatchingBits;
 }
 if (matchingBits == n) {
 cout << "Hurray! The code is: " << guess << endl;
 return;
 }
 }
 cout << "Your code is: " << guess << " Hurray!!" << endl;
}

int main() 
{
 Game();
 return 0;
}
