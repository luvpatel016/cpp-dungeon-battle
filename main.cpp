#include <iostream> 
#include <string> 
#include <cstdlib>
#include <ctime> 

using namespace std; 

int main() { 

    srand(time(0)); 

    string replay = "yes";
    string playerName; 
    
    cout << "Enter your name: "; 
    getline(cin, playerName); 

    while (replay == "yes" || replay == "Yes" || replay == "YES") { 
    
    int playerHealth = 100; 
    int enemyHealth = 100; 
    int choice; 
    int healsLeft = 3; 
    
    int difficulty; 

    cout << "\nChoose difficulty: " << endl; 
    cout << "1. Easy" << endl; 
    cout << "2. Medium" << endl; 
    cout << "3. Hard" << endl;

    cout << "Choose a difficulty: "; 
    cin >> difficulty; 

    while(difficulty < 1 || difficulty > 3) { 
        cout << "Invalid difficulty. Choose 1, 2, or 3: "; 
        cin >> difficulty;  
    }

    cout << "\nWelcome, " << playerName<< "!" << endl; 
    cout << "Your health: " << playerHealth << endl; 
    cout << "Enemy health: " << enemyHealth << endl; 

    while (playerHealth > 0 && enemyHealth > 0) { 

        cout << "\n1. Attack" << endl; 
        cout << "2. Heal" << endl; 
        cout << "3. Defend" << endl; 

        cout << "Choose an action: "; 
        cin >> choice; 

        int enemyDamage; 

        if (difficulty == 1) { 
            enemyDamage = rand() % 6 + 5; 
        } 
        else if (difficulty == 2) { 
            enemyDamage = rand() % 11 + 10; 
        }
        else if (difficulty == 3) { 
            enemyDamage = rand() % 11 + 15; 
        }

        bool validChoice = true;

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
            validChoice = false;
        }

        if (enemyHealth > 0 && validChoice) { 
            playerHealth = playerHealth - enemyDamage; 

            cout << "\nThe enemy attacks " << playerName << " for " << enemyDamage << " damage!" << endl;
            cout << "Your health: " << playerHealth << endl; 
        }
    }

    if (playerHealth <= 0) { 
        cout << "\nYou lost the battle!" << endl; 
    }

    else { 
        cout << "\nYou defeated the enemy!" << endl; 
    }

    cout << "\nPlay again? (yes/no): ";
    cin >> replay;
    }
    cout << "\nThanks for playing!" << endl;

    return 0; 
}