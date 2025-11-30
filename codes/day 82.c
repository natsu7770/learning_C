#include <stdio.h>
#include <string.h>

// Enumeration for traffic lights
enum TrafficLight {
    RED = 0,
    YELLOW = 1,
    GREEN = 2
};

int main() {
    char light_input[20];
    enum TrafficLight light;
    
    // Take traffic light color from user
    printf("Enter traffic light color (RED, YELLOW, or GREEN): ");
    scanf("%s", light_input);
    
    // Convert input to uppercase for comparison
    for (int i = 0; light_input[i]; i++) {
        if (light_input[i] >= 'a' && light_input[i] <= 'z') {
            light_input[i] = light_input[i] - 32;
        }
    }
    
    // Determine the light based on input
    if (strcmp(light_input, "RED") == 0) {
        light = RED;
    } else if (strcmp(light_input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(light_input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid traffic light color!\n");
        return 1;
    }
    
    // Print action based on traffic light
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid light\n");
    }
    
    return 0;
}