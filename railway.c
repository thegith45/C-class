/**
 * @brief This program calculates the area and volume of a room.
 */

#include <stdio.h>

/**
 * @class Room
 * Represents a room with length, width, and height.
 */
typedef struct {
    double length; /**< Length of the room */
    double width;  /**< Width of the room */
    double height; /**< Height of the room */
} Room;

/**
 * @brief Calculate the area of the room.
 * @param room The room object.
 * @return The area of the room.
 */
double calculateArea(const Room* room) {
    return 2 * (room->length * room->width + room->length * room->height + room->width * room->height);
}

/**
 * @brief Calculate the volume of the room.
 * @param room The room object.
 * @return The volume of the room.
 */
double calculateVolume(const Room* room) {
    return room->length * room->width * room->height;
}

int main() {
    Room myRoom;
    
    printf("Enter the length of the room: ");
    scanf("%lf", &myRoom.length);
    
    printf("Enter the width of the room: ");
    scanf("%lf", &myRoom.width);
    
    printf("Enter the height of the room: ");
    scanf("%lf", &myRoom.height);
    
    double area = calculateArea(&myRoom);
    double volume = calculateVolume(&myRoom);
    
    printf("Area of the room: %.2lf sq units\n", area);
    printf("Volume of the room: %.2lf cubic units\n", volume);
    
    return 0;
}

