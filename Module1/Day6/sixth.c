#include <stdio.h>
#include <math.h>

// Structure to store Cartesian coordinate point
struct Point {
    float x;
    float y;
};

// Function to calculate the distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    float distance;
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int main() {
    // Create two instances of the Point structure
    struct Point point1, point2;

    // Read the coordinates of the first point from the user
    printf("Enter coordinates for Point 1:\n");
    printf("x: ");
    scanf("%f", &point1.x);
    printf("y: ");
    scanf("%f", &point1.y);

    // Read the coordinates of the second point from the user
    printf("\nEnter coordinates for Point 2:\n");
    printf("x: ");
    scanf("%f", &point2.x);
    printf("y: ");
    scanf("%f", &point2.y);

    // Calculate the distance using the calculateDistance() function
    float distance = calculateDistance(point1, point2);

    // Display the distance between the two points
    printf("\nThe distance between the two points is: %.2f\n", distance);

    return 0;
}
