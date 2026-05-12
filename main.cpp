#include <iostream>
#include <string>

using namespace std;

// Structure to store family member details
struct FamilyMember {
    string name;
    int age;
};

int main() {
    // --- TASK 1: LINEAR SEARCH ALGORITHM ---
    cout << "================ TASK 1: LINEAR SEARCH ================" << endl;
    
    // Using a fixed number of 4 members as requested
    const int numMembers = 4;
    FamilyMember family[numMembers];

    // Input data for family members
    for (int i = 0; i < numMembers; i++) {
        cout << "Enter name for family member " << i + 1 << ": ";
        cin >> family[i].name;
        cout << "Enter age for " << family[i].name << ": ";
        cin >> family[i].age;
    }

    // Asking for the key name to search
    string searchKey;
    cout << "\nEnter a key name to be searched: ";
    cin >> searchKey;

    bool found = false;
    for (int i = 0; i < numMembers; i++) {
        if (family[i].name == searchKey) {
            cout << "Result: " << searchKey << " was found and is aged " << family[i].age << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Result: Not found" << endl;
    }

    cout << "\n================ TASK 2: BUBBLE SORT (NAMES) ================" << endl;
    
    // Names provided in the assignment image
    string names[] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};
    int nNames = 7;

    // Bubble Sort Algorithm for Strings
    for (int i = 0; i < nNames - 1; i++) {
        for (int j = 0; j < nNames - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                // Swap the names
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Names in ascending order: ";
    for (int i = 0; i < nNames; i++) {
        cout << names[i] << (i < nNames - 1 ? ", " : "");
    }
    cout << endl;

    cout << "\n================ TASK 3: BUBBLE SORT (NUMBERS) ================" << endl;

    // Numbers provided in the assignment image
    int nums[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int nNums = 8;

    // Bubble Sort Algorithm for Integers
    for (int i = 0; i < nNums - 1; i++) {
        for (int j = 0; j < nNums - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                // Swap the numbers
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    cout << "Numbers in ascending order: ";
    for (int i = 0; i < nNums; i++) {
        cout << nums[i] << (i < nNums - 1 ? ", " : "");
    }
    cout << "\n========================================================" << endl;

    return 0;
}