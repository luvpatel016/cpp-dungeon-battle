#include <iostream> 
#include <string> 

using namespace std; 

int main() { 

    string playerName; 
    int playerHealth = 100; 
    int enemyHealth = 100; 

    cout << "Enter your name: "; 
    getline(cin, playerName); 

    cout << "\nWelcome, " << playerName << "!" << endl; 
    cout << "Your health: " << playerHealth << endl; 
    cout << "Enemy health: " << enemyHealth << endl; 

    return 0;
}