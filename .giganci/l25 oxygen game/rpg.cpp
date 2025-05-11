#include <iostream>
#include <vector>
using namespace std;
 
class Entity {
    string name;
    int health;
    int max_health;
    int damage;
public:
    Entity(string entity_name) {
        name = entity_name;
        max_health = 10;
        health = max_health;
        damage = 2;
    }
    // Entity(string entity_name)
    // :name(entity_name), max_health(10), health(max_health), damage(2) {
    // }
    string get_name() const { return name; }
    int get_health() const { return health; }
    int get_max_health() const { return max_health; }
    int get_damage() const { return damage; }
 
    void lower_health(int value) {
        health -= value;
        if(health < 0) 
            health = 0;
    }
    void add_health(int value) {
        health += value;
        if(health > max_health) 
            health = max_health;
    }
};
 
class Player: public Entity {
    int metal;
    int oxygen;
public:
    Player(string player_name): Entity(player_name) {
        metal = 0;
        oxygen = 100;
    }
    // Player(string player_name)
    //     : Entity(player_name), metal(0), oxygen(100) {}
    Player(): Entity("John") {}
 
    int get_metal() { return metal; }
    int get_oxygen() { return oxygen; }
 
    void display_player_info() {
        cout << "Stan gracza\n";
        cout << "-----------------------------\n";
        cout << "Zycie: " << get_health() << "/" << get_max_health() << endl;
        cout << "Atak:  " << get_damage() << endl;
        cout << "Tlen:  " << oxygen << "%\n";
        cout << "Metal: " << metal << "/50\n";
    }
 
    void lower_oxygen(int value) {
        oxygen -= value;
    }
    void add_oxygen(int value) {
        if(oxygen + value > 100)
            oxygen = 100;
        else 
            oxygen += value;
    }
    void add_metal(int value) {
        metal += value;
    }
    void rest() {
        cout << get_name() << " odpoczywa. Zuzycie tlenu: 2%\n\n";
        lower_oxygen(2);
        add_health(5);
        display_player_info();
    }
};

class Game {
    Player player;      //przenisienie playera
    public: 
        Game(string player_name) {
            player = Player(player_name);
            cout << player.get_name() << '\n';
        }
        void print_main_menu() {
            cout << "\nCo chesz zrobić?\n";
            cout << "---------------------------\n";
            cout << "[1] Sprawdz swoj stan\n";
            cout << "[2] Odpocznij\n";
            cout << "[3] Szukaj zasobów\n";
            if (player.get_metal() <= 50) {
                cout << "[4] Zbuduj statek\n";
            }
            cout << "[0] Zakoncz gre\n";
        }
        void start_game() {
            cout << "-------------------------\n";
            cout << "Rozbiles sie na ksiezycu\n";
            cout << "Towim zadaniem juest przetrwanie i zdobycie wstarczajacej ilosci metalu, aby zbudoac";
            "statek do domu.\n";
            cout << "Uwazaj na zapasy tlenu, bez niego nie mozesz grac dalej\n";
            cout << "Powodzenia " << player.get_name() << "!\n\n";

            player.display_player_info();
            bool game_running = true;
            int player_choice;
            while (game_running) {
                print_main_menu();
                cout << "Wybierz opcje: ";
                cin >> player_choice;
                switch (player_choice) {
                    case 1:
                    player.display_player_info();
                    break;
                    case 2:
                    player.rest();
                    break;
                    // case 3:

                }
            }
        }
        void search_resources() {
            int encounter;
//             ● Przypadek 0: Gracz znajduje zbiornik tlenu i zwiększa swój
// zapas o 7%. To odbywa się za pomocą metody
// player.add_oxygen(7).
// ● Przypadek 1: Gracz znajduje złoże metalu i zwiększa swój zapas
// o 5 jednostek. Używamy tu metody player.add_metal(5).
            cout << '\n' << player.get_name() << " wybiera sie na zewnatrz by szukac zasobow";
            switch(encounter) {
                case 0: 
                    player.add_oxygen(7);
                    break;
                case 1:
                    cout << "złoże matalu";
                    player.add_metal(5);
                    break;
                case 2:
                    cout << player.get_name() << " napotkal przeciwnika!\n";
                    start_combat();
                    break;
            }
        }
};
 
int main() {
   Player p("maciek");
   p.display_player_info();
   cout << sizeof(p) << endl;
   //p.name = "123";
   cout << p.get_health() << endl;
   p.lower_health(2);
   cout << p.get_health() << endl;
}