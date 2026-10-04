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


    while (playerHealth > 0 && enemyHealth > 0) { 

        cout << "\n1. Attack" << endl; 
        cout << "2. Heal" << endl; 
        cout << "3. Defend" << endl; 

        cout << "Choose an action: "; 
        cin >> choice; 

        int enemyDamage = 15; 

        if (choice == 1) { 

            int damage = 20; 
            enemyHealth = enemyHealth - damage; 

            cout << playerName << " attacks the enemy for " << damage << " damage!" << endl; 

            cout << "Enemy health: " << enemyHealth << endl; 
        }

        else if (choice == 2) { 

            int healAmount = 20; 
            playerHealth = playerHealth + healAmount; 

            cout << playerName << " heals for " << healAmount << " health!" << endl;

            cout << "Your health: " << playerHealth << endl; 
        }

        else if (choice == 3) { 

            enemyDamage = 5; 
            cout << playerName << " defends!" << endl; 
        }

        else { 

            cout << "Invalid Choice!" << endl;
        }

        if (enemyHealth > 0) { 

            playerHealth = playerHealth - enemyDamage; 

            cout << "\nThe enemy attacks " << playerName << " for " << enemyDamage << " damage!" << endl; 
        }
    }

    if (playerHealth <= 0) { 
        cout << "\nYou lost the battle!" << endl; 
    }

    else if { 
        cout << "\nYou defeated the enemy!" << endl; 
    }

    return 0; 
}