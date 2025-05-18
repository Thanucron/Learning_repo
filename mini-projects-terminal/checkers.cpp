#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <array>
#include <stdio.h>
using std::cout, std::cin, std::endl, std::string;

std::array<std::array<int, 8>, 8> generateGrid();
void displayBoard(const std::array<std::array<int, 8>, 8> & board);


int main() {
    int white_num = 4*3;
    int black_num = 4*3;
    bool whites_move = true;
    auto board = generateGrid();
    displayBoard(board);
    
    return 0;
}



std::array<std::array<int, 8>, 8> generateGrid() { // 0 -> not available, 1 -> not occupied, 2 -> white, 3 -> black
    const int length = 8;
    int valid_tile;
    std::array<std::array<int,8>,8> grid = {};
    for (int i=0;i<length;i++) {
        for (int j=0;j<length;j++) {
            if (i<3) {
                if ((i%2)==0) {
                    valid_tile = (j%2 == 0) ? 0 : 2;
                }
                else {
                    valid_tile = (j%2 == 0) ? 2 : 0;
                }
                grid[i][j] = valid_tile;
            }
            else if (i > 4) {
                if ((i%2)==0) {
                    valid_tile = (j%2 == 0) ? 0 : 3;
                }
                else {
                    valid_tile = (j%2 == 0) ? 3 : 0;
                }
                grid[i][j] = valid_tile;
            }
            else {
                if ((i%2)==0) {
                    valid_tile = (j%2 == 0) ? 0 : 1;
                }
                else {
                    valid_tile = (j%2 == 0) ? 1 : 0;
                }
                grid[i][j] = valid_tile;
            }
        }
    }
    return grid;
}

void displayBoard(const std::array<std::array<int, 8>, 8> & board) {
    printf("\033[30;1m");
    cout << " A B C D E F G H" << endl;
    short row_num = 1;
    for (const auto & row : board) {
        printf("\033[30;1m");
        cout << row_num;
        for (const auto & tile : row) {
            printf("\033[0;37m");
            if (tile == 0) {
                printf("\033[0;37m");
                cout << (char)177 << (char)177;
            }
            else if (tile == 1) {
                printf("\033[0;37m");
                cout << char(32) << char(32);
            }
            else if (tile == 2) {
                // printf("\033[37m");
                printf("\033[33;2m");
                cout << "()";
            }
            else {
                // printf("\033[31m");
                printf("\033[31;5m");
                printf("\033[31;2m");
                cout << "()";
            }
            
        }
        cout << endl;
        row_num++;
    }
}