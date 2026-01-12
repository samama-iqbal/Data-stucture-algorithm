#include <iostream>
#include <string>
using namespace std;

#define MAX 100   // Maximum size of stack

class BookStack {
private:
    string books[MAX]; // Array to store book names
    int top;           // Index of top element

public:
    // Constructor to initialize stack
    BookStack() {
        top = -1; // Stack is empty
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Check if stack is full
    bool isFull() {
        return (top == MAX - 1);
    }

    // Push a book onto the stack
    void push(string bookName) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot add more books.\n";
            return;
        }
        top++;
        books[top] = bookName;
        cout << "Book added successfully: " << bookName << endl;
    }

    // Pop a book from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! No books to remove.\n";
            return;
        }
        cout << "Removed book: " << books[top] << endl;
        top--;
    }

    // Peek the top book
    void peek() {
        if (isEmpty()) {
            cout << "No books in the stack.\n";
            return;
        }
        cout << "Top book: " << books[top] << endl;
    }

    // Display all books from top to bottom
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty. No books to display.\n";
            return;
        }
        cout << "\nBooks in stack (Top to Bottom):\n";
        for (int i = top; i >= 0; i--) {
            cout << "- " << books[i] << endl;
        }
    }
};

int main() {
    BookStack stack;
    int choice;
    string bookName;

    do {
        cout << "\n===== Book Management System =====\n";
        cout << "1. Add Book (Push)\n";
        cout << "2. Remove Book (Pop)\n";
        cout << "3. View Top Book (Peek)\n";
        cout << "4. Display All Books\n";
        cout << "5. Check if Stack is Empty\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch (choice) {
        case 1:
            cout << "Enter book name: ";
            getline(cin, bookName);
            stack.push(bookName);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            stack.peek();
            break;

        case 4:
            stack.display();
            break;

        case 5:
            if (stack.isEmpty())
                cout << "Stack is empty.\n";
            else
                cout << "Stack is NOT empty.\n";
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}