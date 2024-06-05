#include <iostream>
#include <vector>

using namespace std;

class CircularQueue
{
private:
    vector<int> data;
    int front;
    int rear;
    int size;
    int capacity;

public:
    CircularQueue(int capacity)
    {
        this->data.resize(capacity);
        this->front = -1;
        this->rear = -1;
        this->size = 0;
        this->capacity = capacity;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    void enqueue(int element)
    {
        if (isFull())
        {
            cout << "La cola está llena. No se puede encolar más elementos.\n";
            return;
        }

        if (isEmpty())
        {
            front = 0;
        }

        rear = (rear + 1) % capacity;
        data[rear] = element;
        size++;

        cout << "Elemento encolado correctamente.\n";
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "La cola está vacía.\n";
            return;
        }

        cout << "Elemento desencolado: " << data[front] << "\n";

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % capacity;
        }

        size--;
    }

    void displaySize()
    {
        cout << "Tamaño de la cola: " << size << "\n";
    }

    void displayQueue()
    {
        if (isEmpty())
        {
            cout << "La cola está vacía.\n";
            return;
        }

        cout << "Elementos en la cola: ";

        int i = front;
        int count = 0;
        while (count < size)
        {
            cout << data[i] << " ";
            i = (i + 1) % capacity;
            count++;
        }

        cout << "\n";
    }

    void sumElements()
    {
        if (isEmpty())
        {
            cout << "La cola está vacía.\n";
            return;
        }

        int sum = 0;

        int i = front;
        int count = 0;
        while (count < size)
        {
            sum += data[i];
            i = (i + 1) % capacity;
            count++;
        }

        cout << "Suma de los elementos de la cola: " << sum << "\n";
    }
};

int main()
{
    int capacity;
    cout << "Ingrese la capacidad de la cola: ";
    cin >> capacity;

    CircularQueue queue(capacity);
    int option;

    do
    {
        cout << "Seleccione una opción:\n";
        cout << "1. Encolar\n";
        cout << "2. Desencolar\n";
        cout << "3. Tamaño de la cola\n";
        cout << "4. Mostrar cola\n";
        cout << "5. Sumar elementos de la cola\n";
        cout << "6. Salir\n";
        cout << "Opción: ";
        cin >> option;

        switch (option)
        {
        case 1:
            int element;
            cout << "Ingrese el elemento a encolar: ";
            cin >> element;
            queue.enqueue(element);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.displaySize();
            break;
        case 4:
            queue.displayQueue();
            break;
        case 5:
            queue.sumElements();
            break;
        case 6:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción inválida. Por favor, seleccione una opción válida.\n";
            break;
        }
    } while (option != 6);

    return 0;
}