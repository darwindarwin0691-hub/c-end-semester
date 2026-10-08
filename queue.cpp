#include <iostream>
using namespace std;

int main()
{
    string queue[5];
    int front = 0, rear = 0;
    int choice;
    string name;

    while (true)
    {
        cout << "\n1. Add Person";
        cout << "\n2. Allow Person";
        cout << "\n3. Display Queue";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (rear == 5)
                cout << "Queue is full!";
            else
            {
                cout << "Enter name: ";
                cin >> name;
                queue[rear] = name;
                rear++;
                cout << "Person added.";
            }
        }

        else if (choice == 2)
        {
            if (front == rear)
                cout << "Queue is empty!";
            else
            {
                cout << queue[front] << " can enter the ride.";
                front++;
            }
        }

        else if (choice == 3)
        {
            if (front == rear)
                cout << "Queue is empty!";
            else
            {
                cout << "Waiting Queue: ";
                for (int i = front; i < rear; i++)
                    cout << queue[i] << " ";
            }
        }

        else if (choice == 4)
            break;

        else
            cout << "Invalid choice!";
    }

    return 0;
}
