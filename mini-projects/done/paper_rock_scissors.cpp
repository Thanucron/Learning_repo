#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int pcPick();
string gameLoop(string & try_again);

int main()
{
    string try_again = "not yet";
    while (try_again != "q") {
        gameLoop(try_again);
    }
    cout << "bye!";   
    return 0;
}


int pcPick() {
    srand(time(NULL));
    int pick = (rand() % 3)+1;
    return pick;
}

string gameLoop(string & try_again) {
    enum Options {rock = 1, paper, scissors};
    int rounds;
    int pc_won = 0;
    int user_won = 0;
    cout.flush();
    cout << "How many rounds?: ";
    cin >> rounds;
    
    for (int i = 0;i<rounds;i++) {
        int user_pick, pc_pick;
        cout << "Round " << (user_won+pc_won)+1 << "! ";
        if (user_won > 0) {
            cout << "(won: " << user_won << ")" << endl;
        }
        else {
            cout << endl;
        }
        cout << "\"1\" -> rock; \"2\" -> paper; \"3\" -> scissors: ";
        cin >> user_pick;
        user_pick = static_cast<Options>(user_pick);
        pc_pick = static_cast<Options>(pcPick());
        cout << "Computer picked " << pc_pick << endl;
        if (pc_pick == user_pick) {
            cout << "Draw" << endl;
            rounds++;
            continue;
        }

        switch(pc_pick) {
            case rock:
                if (user_pick == paper) {
                    cout << "You win" << endl;
                    ++user_won;
                } 
                else {
                    cout << "You lose"<< endl;
                    ++pc_won;
                }
                break;
            case paper:
                if (user_pick == scissors) {
                    cout << "You win"<< endl;
                    ++user_won;
                } 
                else {
                    cout << "You lose"<< endl;
                    ++pc_won;
                }
                break;
            case scissors:
                if (user_pick == rock) {
                    cout << "You won"<< endl;
                    ++user_won;
                } 
                else {
                    cout << "You lose"<< endl;
                    ++pc_won;
                }
                break;
            rounds--;
        }
    }
    cout << "Overall Score: ";
    cout << user_won << ":" << pc_won << endl;
    cout << "'q' -> quit/'everything else' -> play again: ";
    cin >> try_again;
    return try_again;
}  






