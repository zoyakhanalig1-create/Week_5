/*Week-5 Task #5
Write a c Program to find the area and perimeter of the different Shapes.*/

#include<stdio.h>
#include<math.h>

main() {
        float area, perimeter;
        /*i) Rectangle*/{
                float length, width;
                printf("Enter the length and width of the rectangle: \n");
                scanf("%f %f", &length, &width);
                area = length * width;
                perimeter = 2 * (length+width);
                printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
        }

        /*ii) Circle*/{
                #define pi 3.14159
                float r;
                printf("\nEnter the radius of the circle: \n");
                scanf("%f", &r);
                area = pi * pow(r,2);
                perimeter = 2 * pi * r;
                printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
        }

        /*iii) Triangle*/{
                float base, height, side_a, side_b;
                printf("\nEnter the base and height of the triangle: \n");
                scanf("%f %f", &base, &height);
                area = (base*height) / 2;
                printf("\nEnter the length of sides a and b of the triangle: \n");
                scanf("%f %f", &side_a, &side_b);
                perimeter = base + side_a + side_b;
                printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
        }

        /*iv) Cube*/{
                float side;
                printf("\nEnter the length of side of the cube: \n");
                scanf("%f", &side);
                area = 6 * pow(side,2);
                perimeter = 12 * side;
                printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
        }
}
