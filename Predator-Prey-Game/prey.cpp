#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "prey.h"

using namespace std;

prey::prey() {
    pred_row = 4;
    pred_col = 4;
    prey_row = 7;
    prey_col = 6;
}

void prey::set_loc() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            arr[i][j] = '-';
        }
    }
    arr[pred_row][pred_col] = '$';
    arr[prey_row][prey_col] = 'p';

    while (true) {
        display();
        movePredator();
        movePrey();
        Sleep(1500);
        system("CLS");
    }
}

void prey::movePredator() {
    int rd = pred_row - prey_row;
    int cd = pred_col - prey_col;

    struct Move {
        int row;
        int col;
    };

    Move possibleMoves[] = {
        {2, 0},   // Move down
        {0, 2},   // Move right
        {-2, 0},  // Move up
        {0, -2}   // Move left
    };

    for (const Move& move : possibleMoves) {
        int newRow = pred_row + move.row;
        int newCol = pred_col + move.col;

        if (rd == move.row && cd == move.col) {
            pred_row = newRow;
            pred_col = newCol;
            break;
        }
    }
}

void prey::movePrey() {
    // Define the maximum range the prey can move
    const int maxRange = 3;

    // Generate random moves for the prey within the specified range
    int randomRowMove = rand() % (2 * maxRange + 1) - maxRange;
    int randomColMove = rand() % (2 * maxRange + 1) - maxRange;

    // Update the prey's position (prey_row and prey_col)
    int newRow = prey_row + randomRowMove;
    int newCol = prey_col + randomColMove;

    // Ensure that the new position is within the boundaries (0 to 19)
    if (newRow >= 0 && newRow < 20 && newCol >= 0 && newCol < 20) {
        prey_row = newRow;
        prey_col = newCol;
    }
}


void prey::display() {
    for (int k = 0; k < 20; k++) {
        for (int l = 0; l < 20; l++) {
            arr[k][l] = '-';
            arr[pred_row][pred_col] = '$';
            arr[prey_row][prey_col] = 'p';
            cout << " " << arr[k][l];
        }
        cout << endl;
    }
}

int main() {
    prey p;
    p.set_loc();
    return 0;
}
