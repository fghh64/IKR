#include <stdio.h>

struct University {
    char* name;
    int numberOfStudents;
		int rating;
};

struct University* biggestUniversity(struct University data[], int n) {
    struct University* max = &data[0];
    for (int i=0; i<n; i++) {
        if (data[i].numberOfStudents > max->numberOfStudents) {
        max=&data[i];
        }
    }
    return max;
}

int main() {
    int max;
    struct University universities[3] = {
        {"A", 30, 4},
        {"B", 100, 5},
        {"C", 200, 0}
    };
    struct University* Max = biggestUniversity(universities, 3);
    printf("%s\n", Max->name);
    return 0;
}