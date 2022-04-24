//HW #8 CSC126 
//I pledge that my work is my own: Lyubomira Stefanova
/*A treasure is hidden someplace – the treasures coordinates are (x1, y1)! The coordinates
(x1, y1) are determined randomly, using the code that is listed at the end of this
exercise. The purpose of the game is for the Explorer to find the Treasure!
The explorer is allowed to go North, South, West or East by one step each time. The
Explorer is first positioned at location (15,15). If the explorer goes North by one step,
the Explorer’s y coordinate is increased by 1. If the explorer goes South by one step, the
y coordinate is decreased by 1. In the same fashion the x coordinate is increased by 1 if
the explorer goes East by one step and the x coordinate is decreased by 1 if the explorer
goes West by one step.
Each time the Explorer ‘moves’, the distance between the Explorer and the treasure is
computed. When the Explorer’s position is the same as the Treasure’s position, the Explorer found
the Treasure!*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

int main() {

	int x = 15, y = 15;
	int x1, y1;
	int moves = 0;
	char direction;
	double distance = - 1;
	bool treasure = false;

	srand(time(0));
	x1 = rand() % 30 + 1;
	y1 = rand() % 30 + 1;

	while (distance != 0) {
		cout << "Please enter direction (n, s, e, w):" << endl;
		cin >> direction;

		if (direction == 'n') {
			y = y + 1;
		}

		if (direction == 's') {
			y = y - 1;
		}

		if (direction == 'e') {
			x = x + 1;
		}

		if (direction == 'w') {
			x = x - 1;
		}

		distance = sqrt(static_cast<double>((x - x1) * (x - x1) + (y - y1)
			* (y - y1)));

		cout << "Distance from treasure: " << distance << endl;
		moves = moves + 1;
		cout << "Your coordinates are: (" << x << ", " << y << ")" << endl;
	}
	cout << "You found the treasure at: (" << x1 << ", " << y1 << ")"  << endl;
	cout << "Moves to reach treasure: " << moves << endl;

	return 0;
}