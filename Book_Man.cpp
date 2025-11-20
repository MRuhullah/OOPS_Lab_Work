#include <iostream>
#include <string>
#include <limits> // Used for simple input clearing

using namespace std;

// --- GLOBAL DATA STRUCTURES (Simple Parallel Arrays) ---
// This is a basic way to store data in C/C++ without using classes or vectors.
// We use four separate arrays to store the data for up to 100 books.
const int MAX_BOOKS = 100;

string titles[MAX_BOOKS];
string authors[MAX_BOOKS];
string isbns[MAX_BOOKS];
int years[MAX_BOOKS];

// Tracks the current number of books stored.
int bookCount = 0;


// Function to handle reading integer input with basic validation
int safeReadInt(const string& prompt) {
    int value;
    cout << prompt;
    // Loop until valid integer input is received
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter a valid number: ";
        cin.clear(); // Clear the error flags
        // Ignore the rest of the line up to the maximum stream size
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}


// 1. Function to add a new book
void addBook() {
    // Check if the library is full
    if (bookCount >= MAX_BOOKS) {
        cout << "\nError: The library is full (Max " << MAX_BOOKS << " books).\n";
        return;
    }

    // Clear the input buffer before reading strings
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n--- Add New Book ---\n";
    cout << "Enter Title: ";
    getline(cin, titles[bookCount]);

    cout << "Enter Author: ";
    getline(cin, authors[bookCount]);

    cout << "Enter ISBN: ";
    getline(cin, isbns[bookCount]);

    years[bookCount] = safeReadInt("Enter Publication Year: ");

     
    bookCount++;
    cout << "\nBook successfully added to the library at index " << bookCount - 1 << "!\n";
}

 
void displayBook(int index) {
    cout << "------------------------------" << endl;
    cout << "Index: " << index << endl;
    cout << "Title: " << titles[index] << endl;
    cout << "Author: " << authors[index] << endl;
    cout << "ISBN: " << isbns[index] << endl;
    cout << "Year: " << years[index] << endl;
    cout << "------------------------------" << endl;
}

// 2. Function to display all books
void displayAllBooks() {
    if (bookCount == 0) {
        cout << "\nYour library is currently empty.\n";
        return;
    }

    cout << "\n--- Current Library Collection (" << bookCount << " Books) ---\n";
    // Loop through all currently stored books
    for (int i = 0; i < bookCount; ++i) {
        displayBook(i); 
    }
}

// 3. Function to search for a book
void searchBook() {
    if (bookCount == 0) {
        cout << "\nThe library is empty, nothing to search.\n";
        return;
    }

    // Clear the input buffer before reading strings
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n--- Search Book ---\n";
    cout << "Enter title or author (case-sensitive search): ";
    string query;
    getline(cin, query);

    int resultsFound = 0;

    // Loop through all books to check for matches
    for (int i = 0; i < bookCount; ++i) {
        // Find is a basic string function that checks if 'query' is inside the string
        if (titles[i].find(query) != string::npos || 
            authors[i].find(query) != string::npos) {
            
            displayBook(i);
            resultsFound++;
        }
    }

    cout << "\nSearch completed. " << resultsFound << " result(s) found.\n";
}

// 4. Function to delete a book
void deleteBook() {
    if (bookCount == 0) {
        cout << "\nThe library is empty. Nothing to delete.\n";
        return;
    }

    // Display all books so the user knows the indices
    displayAllBooks();
    
    int indexToDelete = safeReadInt("\n--- Delete Book ---\nEnter the Index of the book to delete: ");

    // Check if the entered index is valid
    if (indexToDelete >= 0 && indexToDelete < bookCount) {
        cout << "\nBook to delete:\n";
        displayBook(indexToDelete);

        char confirm;
        cout << "Are you sure you want to delete this book? (Y/N): ";
        cin >> confirm;
        
        if (tolower(confirm) == 'y') {
             
            for (int i = indexToDelete; i < bookCount - 1; ++i) {
                titles[i] = titles[i + 1];
                authors[i] = authors[i + 1];
                isbns[i] = isbns[i + 1];
                years[i] = years[i + 1];
            }
            
            // Decrease the counter to reflect the removed book
            bookCount--;
            cout << "\nBook successfully deleted and collection rearranged.\n";
        } else {
            cout << "\nDeletion cancelled.\n";
        }
    } else {
        cout << "\nError: Invalid index entered. No book was deleted.\n";
    }
}

// 5. Function to edit an existing book
void editBook() {
    if (bookCount == 0) {
        cout << "\nThe library is empty. Nothing to edit.\n";
        return;
    }

    
    displayAllBooks();

    int indexToEdit = safeReadInt("\n--- Edit Book ---\nEnter the Index of the book to edit: ");

    
    if (indexToEdit >= 0 && indexToEdit < bookCount) {
        cout << "\nEditing Book at Index " << indexToEdit << ":\n";
        displayBook(indexToEdit);
        
        int editChoice = safeReadInt("\nWhat would you like to edit?\n1. Title\n2. Author\n3. ISBN\n4. Publication Year\nEnter your choice: ");
        
        // Clear cin buffer after reading the integer choice
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string newStr;
        
        switch (editChoice) {
            case 1:
                cout << "Enter new Title: ";
                getline(cin, titles[indexToEdit]);
                cout << "\nTitle updated successfully.\n";
                break;
            case 2:
                cout << "Enter new Author: ";
                getline(cin, authors[indexToEdit]);
                cout << "\nAuthor updated successfully.\n";
                break;
            case 3:
                cout << "Enter new ISBN: ";
                getline(cin, isbns[indexToEdit]);
                cout << "\nISBN updated successfully.\n";
                break;
            case 4:
                
                years[indexToEdit] = safeReadInt("Enter new Publication Year: ");
                cout << "\nPublication Year updated successfully.\n";
                break;
            default:
                cout << "\nInvalid choice. No changes were made.\n";
                break;
        }
        
        cout << "\nUpdated Book Details:\n";
        displayBook(indexToEdit);

    } else {
        cout << "\nError: Invalid index entered. No book was edited.\n";
    }
}


 
int main() {
    int choice;

    cout << "Welcome to the Basic C++ Library Management System!\n";
    cout << "Using simple arrays (Max " << MAX_BOOKS << " books).\n";

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Add New Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search for a Book (by Title or Author)\n";
        cout << "4. Delete a Book\n";
        cout << "5. Edit a Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        
        if (!(cin >> choice)) {
            cout << "\nInvalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayAllBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                editBook();
                break;
            case 6:
                cout << "\nThank you for using the system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice. Please select a number between 1 and 6.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}
