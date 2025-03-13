#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime> // For time-based offers
using namespace std;

// Structure to store ordered items
struct OrderItem {
    string itemName;
    float itemPrice;
    int quantity;
};

// Structure to store inventory
struct InventoryItem {
    string itemName;
    int stock;
};

// Loyalty points array 
const int MAX_CUSTOMERS = 100;
string customerNames[MAX_CUSTOMERS];
int loyaltyPoints[MAX_CUSTOMERS];
int customerCount = 0;

// Inventory array 
const int MAX_ITEMS = 15;
InventoryItem inventory[MAX_ITEMS] = {
    {"Paratha", 10}, {"Halwa Puri", 8}, {"Chai", 20}, {"Omelette", 15}, {"Pancakes", 12},
    {"Biryani", 10}, {"Karahi", 7}, {"Daal Chawal", 15}, {"Pizza", 10}, {"Pasta", 8},
    {"Nihari", 5}, {"Seekh Kabab", 6}, {"Butter Chicken", 7}, {"Lasagna", 9}, {"Risotto", 10}
};

// Function to display the restaurant name
void displayRestaurantName() {
    cout << "*********************************************" << endl;
    cout << "**        <<< TASTE OF PARADISE >>>        **" << endl;
    cout << "*********************************************" << endl;
}

// Function to display the menu
void displayMenu() {
    cout << "=============================================" << endl;
    cout << "1. Breakfast" << endl;
    cout << "2. Lunch" << endl;
    cout << "3. Dinner" << endl;
    cout << "4. View Order Summary" << endl;
    cout << "5. Remove Item" << endl;
    cout << "6. Check Loyalty Points" << endl;
    cout << "7. Exit" << endl;
    cout << "=============================================" << endl;
}

// Function to display submenu items
void displaySubMenu(const string items[], const float rates[], int size) {
    cout << "---------------------------------------------" << endl;
    cout << setw(5) << left << "No." 
         << setw(20) << left << "Item Name" 
         << setw(10) << right << "Price (Rs)" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << setw(5) << left << i + 1 
             << setw(20) << left << items[i] 
             << setw(10) << right << fixed << setprecision(2) << rates[i] << endl;
    }
    cout << "---------------------------------------------" << endl;
}

// Function to display the order summary with proper formatting
void displayOrderSummary(const vector<OrderItem>& order) {
    if (order.empty()) {
        cout << "Your order is empty." << endl;
        return;
    }

    cout << "---------------------------------------------" << endl;
    cout << setw(20) << left << "Item Name" 
         << setw(10) << right << "Quantity" 
         << setw(15) << right << "Price (Rs)" << endl;
    cout << "---------------------------------------------" << endl;
    for (const auto& item : order) {
        cout << setw(20) << left << item.itemName 
             << setw(10) << right << item.quantity 
             << setw(15) << right << fixed << setprecision(2) << item.itemPrice * item.quantity << endl;
    }
    cout << "---------------------------------------------" << endl;
}

// Function to check and update inventory
bool updateInventory(const string& itemName, int quantity) {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (inventory[i].itemName == itemName) {
            if (inventory[i].stock < quantity) {
                cout << "Insufficient stock for " << itemName << "!" << endl;
                return false;
            }
            inventory[i].stock -= quantity;

            // Notify admin if inventory is low
            if (inventory[i].stock <= 5) {
                cout << "Notification: Low stock for " << itemName << "! Current stock: " << inventory[i].stock << endl;
            }
            return true;
        }
    }
    cout << "Item not found in inventory!" << endl;
    return false;
}

// Function to check if it's happy hour (2 PM to 5 PM)
bool isHappyHour() {
    time_t now = time(0);
    tm* localTime = localtime(&now);
    int hour = localTime->tm_hour;
    return (hour >= 14 && hour < 17); // Happy hour between 2 PM and 5 PM
}

// Function to send real-time notifications
void sendNotification(const string& message) {
    cout << "Notification: " << message << endl;
}

// Function to find or add a customer and return their loyalty points index
int getCustomerIndex(const string& name) {
    for (int i = 0; i < customerCount; i++) {
        if (customerNames[i] == name) {
            return i; // Return existing customer index
        }
    }
    // Add new customer
    if (customerCount < MAX_CUSTOMERS) {
        customerNames[customerCount] = name;
        loyaltyPoints[customerCount] = 0;
        customerCount++;
        return customerCount - 1;
    }
    cout << "Maximum number of customers reached!" << endl;
    return -1;
}

int main() {
    // Constant menu items and their rates in Rupees
    const string breakfastItems[5] = {"Paratha", "Halwa Puri", "Chai", "Omelette", "Pancakes"};
    const float breakfastRates[5] = {50.00, 120.00, 30.00, 90.50, 100.00};

    const string lunchItems[5] = {"Biryani", "Karahi", "Daal Chawal", "Pizza", "Pasta"};
    const float lunchRates[5] = {250.00, 300.00, 150.00, 400.00, 350.00};

    const string dinnerItems[5] = {"Nihari", "Seekh Kabab", "Butter Chicken", "Lasagna", "Risotto"};
    const float dinnerRates[5] = {350.00, 280.00, 320.00, 450.00, 400.00};

    vector<OrderItem> order; // Stores the ordered items
    int choice, subChoice, quantity;
    float totalBill = 0.0;
    char addMore;
    string customerName;

    cout << "Enter your name: ";
    cin >> customerName;

    int customerIndex = getCustomerIndex(customerName);
    if (customerIndex == -1) {
        return 1; // Exit if customer cannot be added
    }

    do {
        displayRestaurantName();
        displayMenu();
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1: // Breakfast
            case 2: // Lunch
            case 3: { // Dinner
                const string* items = nullptr;
                const float* rates = nullptr;
                string menuName;

                if (choice == 1) {
                    items = breakfastItems;
                    rates = breakfastRates;
                    menuName = "Breakfast";
                } else if (choice == 2) {
                    items = lunchItems;
                    rates = lunchRates;
                    menuName = "Lunch";
                } else if (choice == 3) {
                    items = dinnerItems;
                    rates = dinnerRates;
                    menuName = "Dinner";
                }

                cout << "\n" << menuName << " Menu:" << endl;
                displaySubMenu(items, rates, 5);

                do {
                    cout << "Enter item number (1-5): ";
                    cin >> subChoice;

                    if (subChoice < 1 || subChoice > 5) {
                        cout << "Invalid item number! Please try again." << endl;
                        continue;
                    }

                    cout << "Enter quantity: ";
                    cin >> quantity;

                    if (quantity <= 0) {
                        cout << "Invalid quantity! Please try again." << endl;
                        continue;
                    }

                    // Check and update inventory
                    if (!updateInventory(items[subChoice - 1], quantity)) {
                        continue; // Skip if inventory is insufficient
                    }

                    // Add item to order
                    order.push_back({items[subChoice - 1], rates[subChoice - 1], quantity});
                    totalBill += rates[subChoice - 1] * quantity;
                    cout << "Added " << items[subChoice - 1] << " (x" << quantity << ") to your order." << endl;

                    cout << "Do you want to add more items from the " << menuName << " menu? (y/n): ";
                    cin >> addMore;
                } while (addMore == 'y' || addMore == 'Y');

                break;
            }

            case 4: // View Order Summary
                cout << "\nOrder Summary:" << endl;
                displayOrderSummary(order);
                cout << "Total Bill: Rs " << fixed << setprecision(2) << totalBill << endl;
                break;

            case 5: { // Remove Item
                if (order.empty()) {
                    cout << "Your order is empty. Nothing to remove." << endl;
                    break;
                }

                cout << "\nOrder Summary:" << endl;
                displayOrderSummary(order);

                int itemNo;
                cout << "Enter the item number to remove: ";
                cin >> itemNo;

                if (itemNo < 1 || itemNo > order.size()) {
                    cout << "Invalid item number!" << endl;
                } else {
                    totalBill -= order[itemNo - 1].itemPrice * order[itemNo - 1].quantity;
                    // Restore inventory
                    for (int i = 0; i < MAX_ITEMS; i++) {
                        if (inventory[i].itemName == order[itemNo - 1].itemName) {
                            inventory[i].stock += order[itemNo - 1].quantity;
                            break;
                        }
                    }
                    cout << "Removed " << order[itemNo - 1].itemName << " from your order." << endl;
                    order.erase(order.begin() + itemNo - 1);
                }
                break;
            }

            case 6: // Check Loyalty Points
                cout << "\nLoyalty Points for " << customerName << ": " << loyaltyPoints[customerIndex] << endl;
                break;

            case 7: // Exit
                cout << "\n=============================================" << endl;
                cout << "   Thank you for using the Restaurant Management System!" << endl;

                // Apply 10% discount for orders above Rs 500
                if (totalBill > 500) {
                    float discount = totalBill * 0.10;
                    cout << "   Discount (10%): Rs " << discount << endl;
                    totalBill -= discount;
                }

                cout << "   Your final total bill is: Rs " << fixed << setprecision(2) << totalBill << endl;

                // Update loyalty points (1 point for every Rs 100 spent)
                loyaltyPoints[customerIndex] += static_cast<int>(totalBill / 100);
                cout << "   You earned " << static_cast<int>(totalBill / 100) << " loyalty points!" << endl;
                cout << "=============================================" << endl;

                // Send order confirmation notification
                sendNotification("Your order has been confirmed. Thank you for dining with us!");
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}