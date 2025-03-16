#include <iostream>
using namespace std;

class PizzaQueue
 {
private:
    int front, rear, maxSize;
    int *queue;

public:
    // Constructor to initialize the queue
    PizzaQueue(int size) 
	{
        maxSize = size;
        queue = new int[maxSize];
        front = -1;
        rear = -1;
    }

    // Function to add an order to the queue
    void placeOrder(int order)
 {
        if (rear == maxSize - 1) 
{
            cout << "The queue is full. Cannot accept more orders." << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            queue[rear] = order;
            cout << "Order " << order << " placed successfully!" << endl;
        }
    }
    void serveOrder()
	 {
        if (front == -1 || front > rear) 
		{
            cout << "No orders to serve!" << endl;
        } 
	else 
		{
            cout << "Serving Order " << queue[front] << endl;
            front++;
        }
    }

    void displayOrders() {
        if (front == -1 || front > rear) 
		{
            cout << "No orders in the queue." << endl;
        } 
		else 
		{
            cout << "Current Orders in Queue: ";
            for (int i = front; i <= rear; i++)
			 {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() 
{
    int maxsize;
    cout << "Enter the maximum number of orders the parlor can handle: ";
    cin >> maxsize;

    PizzaQueue pizzaParlor(maxsize);

    int choice, order;

    while (true) 
	{
        cout << "\n1. Place Order\n2. Serve Order\n3. Display Orders\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
        case 1:
            cout << "Enter Order Number: ";
            cin >> order;
            pizzaParlor.placeOrder(order);
            break;

        case 2:
            pizzaParlor.serveOrder();
            break;

        case 3:
            pizzaParlor.displayOrders();
            break;

        case 4:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
	

