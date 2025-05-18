#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

short pickLevel();
std::pair<int,int> generateNums(short level);
void gameLogic(short & lives, std::pair<int,int>rand_max_pair);
bool ifAgain();

int main() {
    bool again = true;
    cout << "Guessing game" << endl;
    while (again) {
        short level = pickLevel();
        short lives = 7*level;      // static_cast<short>(std::floor(9-((2.0/3) *(double)level))); 
        // always try type casting when using such func, it might return double
        // you can override variables within different funcitons, ::var_name -> global instead of local 
        gameLogic(lives, generateNums(level));
        again = ifAgain();
    }
    cout << "Thanks for playing" << endl;
    cout << "Made by Tymo";
    return 0;
}

short pickLevel() {
    short level;
    while (true) {
        cout << "Pick your level of difficulty" << endl;
        cout << "1 -> Easy, 2-> Normal, 3->Hard: ";
        cin >> level;
        if (level != 1 && level != 2 && level != 3) {       // if not short type
            cout << "This is not an option" << endl;
        }
        else {
            break;
        }
    }
    return level;
}

std::pair<int,int> generateNums(short level) {
    srand(time(NULL));
    int maxrange = (int)(pow(10,(level+1)));
    int rand_num = (rand() % maxrange) + 1;
    return std::make_pair(rand_num, maxrange);        // how to 
}

void gameLogic(short & lives, std::pair<int,int>rand_max_pair) {
    int pc_pick = rand_max_pair.first;
    int maxrange = rand_max_pair.second;
    int picked_num;
    do {
        cout << "Pick a number ranging from 1 to " << maxrange << ": "; 
        cin >> picked_num;
        if (picked_num == pc_pick) {
            break;
        }
        else if (picked_num > pc_pick){
            cout << "Your guess is bigger than the number" << endl;
        }
        else {
            cout << "Your guess is smaller than the number" << endl;
        }
        lives--;
        cout << "You've got " << lives << " guesses " << endl;
    } while (lives > 0);

    if (lives > 0) {
        cout<< "You won in " << lives << "guesses! :)"  << endl;
    }
    else {
        cout << "You lost :(" << endl;
    }
}

bool ifAgain() {
    char again;
    cout << "Wanna try one more time? (Y/N): ";
    cin >> again;
    return (again == 'Y' || again =='y');      // play around to fit many into one return statement
}





// array => static data structure