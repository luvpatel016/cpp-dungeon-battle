#include <iostream> 
#include <string> 
#include <cstdlib>
#include <ctime> 

using namespace std; 

int main() { 

    srand(time(0)); 

    string playerName; 
    int playerHealth = 100; 
    int enemyHealth = 100; 
    int choice; 
    int healsLeft = 3; 


    cout << "Enter your name: "; 
    getline(cin, playerName); 


    cout << "\nWelcome, " << playerName<< "!" << endl; 
    cout << "Your health: " << playerHealth << endl; 
    cout << "Enemy health: " << enemyHealth << endl; 


    while (playerHealth > 0 && enemyHealth > 0) { 

        cout << "\n1. Attack" << endl; 
        cout << "2. Heal" << endl; 
        cout << "3. Defend" << endl; 

        cout << "Choose an action: "; 
        cin >> choice; 

        int enemyDamage = rand() % 11 + 10; 

        if (choice == 1) { 

            int damage = rand() % 16 + 10;  
            enemyHealth = enemyHealth - damage; 

            cout << "\n" << playerName << " attacks the enemy for " << damage << " damage!" << endl; 

            cout << "Enemy health: " << enemyHealth << endl;  
        }

        else if (choice == 2) { 
        
            if (healsLeft > 0) { 

            int healAmount = 20; 
            playerHealth = playerHealth + healAmount; 
            
            if (playerHealth > 100) { 
                playerHealth = 100;
            }

            healsLeft--;

            cout << "\n" << playerName << " heals for " << healAmount << " health!" << endl;
            cout << "Your health: " << playerHealth << endl; 

        } else { 
            cout << "You have no heals left! " << endl;
        }
    }

        else if (choice == 3) { 

            enemyDamage = 5; 
            cout << "\n" << playerName << " defends!" << endl; 
        }

        else { 

            cout << "Invalid Choice!" << endl;
        }

        if (enemyHealth > 0) { 

            playerHealth = playerHealth - enemyDamage; 

            cout << "\nThe enemy attacks " << playerName << " for " << enemyDamage << " damage!" << endl;
            cout << "\nYour health: " << playerHealth << endl; 
        }
    }

    if (playerHealth <= 0) { 
        cout << "\nYou lost the battle!" << endl; 
    }

    else { 
        cout << "\nYou defeated the enemy!" << endl; 
    }

    return 0; 
}