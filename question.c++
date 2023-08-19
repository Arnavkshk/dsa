#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;
};

bool isDangerousTurn(char prevDir, char currentDir) {
    // A turn is dangerous if it's not a 90-degree turn.
    return (prevDir == 'N' && currentDir == 'W') ||
           (prevDir == 'W' && currentDir == 'S') ||
           (prevDir == 'S' && currentDir == 'E') ||
           (prevDir == 'E' && currentDir == 'N');
}

int countDangerousTurns(vector<Point>& coordinates) {
    int dangerousTurns = 0;
    char prevDir = 'N'; // Aditi starts in the North direction.

    for (int i = 1; i < coordinates.size(); ++i) {
        int x1 = coordinates[i - 1].x;
        int y1 = coordinates[i - 1].y;
        int x2 = coordinates[i].x;
        int y2 = coordinates[i].y;

        char currentDir;
        if (x1 == x2) { // Vertical section
            if (y1 > y2) {
                currentDir = 'S'; // Going South
            } else {
                currentDir = 'N'; // Going North
            }
        } else { // Horizontal section
            if (x1 > x2) {
                currentDir = 'W'; // Going West
            } else {
                currentDir = 'E'; // Going East
            }
        }

        if (isDangerousTurn(prevDir, currentDir)) {
            dangerousTurns++;
        }

        prevDir = currentDir;
    }

    return dangerousTurns;
}

int main() {
    int n;
    cin >> n;

    vector<Point> coordinates(n + 1);

    for (int i = 0; i <= n; ++i) {
        cin >> coordinates[i].x >> coordinates[i].y;
    }

    // Count dangerous turns
    int dangerousTurns = countDangerousTurns(coordinates);

    // Output the result
    cout << dangerousTurns << endl;
return 0;
}