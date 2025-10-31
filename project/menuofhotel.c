#include <stdio.h>

void showMenu() {
    printf("\n================= ANJUM’S HOTEL MENU =================\n");

    printf("\n----- VEG ITEMS -----\n");
    printf("1. Veg Biryani .............. ₹150\n");
    printf("2. Paneer Butter Masala ..... ₹180\n");
    printf("3. Veg Fried Rice ........... ₹140\n");
    printf("4. Dal Tadka ................ ₹120\n");

    printf("\n----- NON-VEG ITEMS -----\n");
    printf("5. Chicken Biryani .......... ₹200\n");
    printf("6. Mutton Curry ............. ₹250\n");
    printf("7. Fish Fry ................. ₹220\n");
    printf("8. Egg Curry ................ ₹130\n");

    printf("\n----- SNACKS -----\n");
    printf("9. Samosa ................... ₹20\n");
    printf("10. Veg Puff ................ ₹25\n");
    printf("11. Chicken Roll ............ ₹60\n");
    printf("12. French Fries ............ ₹80\n");

    printf("\n----- TEA & DRINKS -----\n");
    printf("13. Tea ..................... ₹15\n");
    printf("14. Coffee .................. ₹20\n");
    printf("15. Juice ................... ₹40\n");
    printf("16. Milkshake ............... ₹60\n");

    printf("\n----- DESSERTS -----\n");
    printf("17. Ice Cream ............... ₹70\n");
    printf("18. Gulab Jamun ............. ₹50\n");
    printf("19. Cake Slice .............. ₹90\n");

    printf("\n20. EXIT\n");
    printf("=======================================================\n");
}

int main() {
    int choice;
    int total = 0;

    while (1) {
        showMenu();
        printf("Enter your choice (1–20): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: total += 150; printf("Added Veg Biryani (₹150)\n"); break;
            case 2: total += 180; printf("Added Paneer Butter Masala (₹180)\n"); break;
            case 3: total += 140; printf("Added Veg Fried Rice (₹140)\n"); break;
            case 4: total += 120; printf("Added Dal Tadka (₹120)\n"); break;

            case 5: total += 200; printf("Added Chicken Biryani (₹200)\n"); break;
            case 6: total += 250; printf("Added Mutton Curry (₹250)\n"); break;
            case 7: total += 220; printf("Added Fish Fry (₹220)\n"); break;
            case 8: total += 130; printf("Added Egg Curry (₹130)\n"); break;

            case 9: total += 20; printf("Added Samosa (₹20)\n"); break;
            case 10: total += 25; printf("Added Veg Puff (₹25)\n"); break;
            case 11: total += 60; printf("Added Chicken Roll (₹60)\n"); break;
            case 12: total += 80; printf("Added French Fries (₹80)\n"); break;

            case 13: total += 15; printf("Added Tea (₹15)\n"); break;
            case 14: total += 20; printf("Added Coffee (₹20)\n"); break;
            case 15: total += 40; printf("Added Juice (₹40)\n"); break;
            case 16: total += 60; printf("Added Milkshake (₹60)\n"); break;

            case 17: total += 70; printf("Added Ice Cream (₹70)\n"); break;
            case 18: total += 50; printf("Added Gulab Jamun (₹50)\n"); break;
            case 19: total += 90; printf("Added Cake Slice (₹90)\n"); break;

            case 20:
                printf("\nYour total bill = ₹%d\n", total);
                printf("Thank you for visiting Anjum’s Hotel! 🙏\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
