#include <stdio.h>

struct Coord {
	int x;
	int y;
};

int canGet(struct Coord start, struct Coord finish) {
    if (finish.x == start.x || finish.y == start.y) {
        return 1;
    }
    return 0;
}

int main() {
    struct Coord start = {3,5};
    struct Coord finish = {8,5};
    if (canGet(start, finish)) {
        printf ("%d\n", 1);
    } else {
        printf ("%d\n", 0);
    }
}