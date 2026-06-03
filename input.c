#include <stdio.h>

void main(){
int int_choice;
    char char_choice;

    printf("Do You Want To Proceed with These Value \nif Yes Press- 1,Y\nif NO Press- 2,N\n");

    // প্রথমে int নেওয়ার চেষ্টা করি
    if (scanf("%d", &int_choice) == 1) {
        // যদি সফলভাবে int ইনপুট নেয় (অর্থাৎ ইউজার 1 বা 2 চেপেছে)
        if (int_choice == 1) {
            printf("Proceeding...\n");
        } 
        else if (int_choice == 2) {
            printf("Exiting...\n");
        } 
        else {
            printf("Invalid Number!\n");
        }
    } 
    else {
        // যদি int না হয়ে অক্ষর (char) হয়, তবে বাফার থেকে সেটি char হিসেবে পড়ব
        scanf(" %c", &char_choice);
        
        if (char_choice == 'Y' || char_choice == 'y') {
            printf("Proceeding...\n");
        } 
        else if (char_choice == 'N' || char_choice == 'n') {
            printf("Exiting...\n");
        } 
        else {
            printf("Invalid Character!\n");
        }
    }
}