#include <stdio.h>
void areaOfCircle(int radius);
void areaOfRectangle(int length, int width);
void areaOfTriangle(int base, int height);
void areaOfSquare(int side);

int main() {
    int choice;
    int radius, length, width, base, height, side;

    while (1) {  
        printf("\n------------- Menu -------------\n");
        printf("1: Area of Circle\n");
        printf("2: Area of Triangle\n");
        printf("3: Area of Rectangle\n");
        printf("4: Area of Square\n");
        printf("5: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%d", &radius);
                areaOfCircle(radius);
                break;

            case 2:
                printf("Enter the base and height of the triangle: ");
                scanf("%d%d", &base, &height);
                areaOfTriangle(base, height);
                break;

            case 3:
                printf("Enter the length and width of the rectangle: ");
                scanf("%d%d", &length, &width);
                areaOfRectangle(length, width);
                break;

            case 4:
                printf("Enter the side of the square: ");
                scanf("%d", &side);
                areaOfSquare(side);
                break;

            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please choose a valid option.\n");
                break;
        }
    }
}

void areaOfCircle(int radius) {
    float area = 3.14 * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
}

void areaOfRectangle(int length, int width) {
    int area = length * width;
    printf("The area of the rectangle is: %d\n", area);
}

void areaOfTriangle(int base, int height) {
    float area = 0.5 * base * height;
    printf("The area of the triangle is: %.2f\n", area);
}

void areaOfSquare(int side) {
    int area = side * side;
    printf("The area of the square is: %d\n", area);
}
