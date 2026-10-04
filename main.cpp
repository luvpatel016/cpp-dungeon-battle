#include <iostream> 
#include <string> 

using namespace std; 

int main() { 

    string playerName; 
    int playerHealth = 100; 
    int enemyHealth = 100; 
    int choice; 

    cout << "Enter your name: "; 
    getline(cin, playerName); 

    cout << "\nWelcome, " << playerName << "!" << endl; 
    cout << "Your health: " << playerHealth << endl; 
    cout << "Enemy health: " << enemyHealth << endl; 

    cout << "\n1. Attack" << endl; 
    cout << "2. Heal" << endl; 
    cout << "3. Defend" << endl; 

    cout << "Choose an action: "; 
    cin >> choice; 

    if (choice == 1) { 
        cout << playerName << " attacks the enemy!" << endl;
    } else if (choice == 2) {
        cout << playername << " heals" << endl; 
    } else if (choice == 3) { 
        cout << playerName << " defends!" << endl; 
    } else { 
        cout << "Invalid Choice!" << endl; 
    }

    return 0;
}