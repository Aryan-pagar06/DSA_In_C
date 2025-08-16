#include <stdio.h>

int front = -1, rear = -1;      
int cfront = 0, crear = 0;     
int size;

int isfull() {
    if (rear == size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isempty() {
    if (rear == front) {
        return 1;
    } else {
        return 0;
    }
}

int enqueue(int queue[], int element) {
    if (isfull()) {
        printf("Queue Full\n");
        return -1;
    } else {
        rear = rear + 1;
        queue[rear] = element;
        return 0;
    }
}

int dequeue(int queue[]) {
    if (isempty()) {
        printf("Queue Empty\n");
        return -1;
    } else {
        front = front + 1;
        int element = queue[front];
        return element;
    }
}

void display_linear(int queue[]) {
    if (isempty()) {
        printf("Empty Queue\n");
        return;
    }
    printf("Linear Queue: ");
    for (int i = front + 1; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int cisfull(int queueSize) {
    if ((crear + 1) % queueSize == cfront) {
        return 1;
    } else {
        return 0;
    }
}

int cisempty() {
    if (crear == cfront) {
        return 1;
    } else {
        return 0;
    }
}

int cenqueue(int queue[], int element, int queueSize) {
    if (cisfull(queueSize)) {
        printf("Queue Full\n");
        return -1;
    }
    else
        crear = crear + 1;
    queue[crear] = element;
    return 0;
}

int cdequeue(int queue[], int queueSize) {
    if (cisempty()) {
        printf("Empty Queue\n");
        return -1;
    }
    else
        cfront = cfront + 1;
    int element = queue[cfront];
    return element;
}

void display_circular(int queue[], int queueSize) {
    if (cisempty()) {
        printf("Empty Queue\n");
        return;
    }
    printf("Circular Queue: ");
    int i = (cfront == queueSize - 1) ? 0 : (cfront + 1);
    while (1) {
        printf("%d ", queue[i]);
        if (i == crear) break;
        if (i == queueSize - 1) i = 0; else i = i + 1;
    }
    printf("\n");
}

int main() {
    printf("Enter queue size (max 100): ");
    scanf("%d", &size);
    int queue[100];

    while (1) {
        int queueTypeChoice;
        printf("\n1. Linear Queue\n2. Circular Queue\n");
        printf("Enter choice: ");
        scanf("%d", &queueTypeChoice);

        if (queueTypeChoice == 1) {
            while (1) {
                int operationChoice, elementValue, deletedElement;
                printf("\n--- Linear Queue ---\n");
                printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
                printf("Enter: ");
                scanf("%d", &operationChoice);
                switch (operationChoice) {
                    case 1:
                        printf("Enter element to enqueue: ");
                        scanf("%d", &elementValue);
                        enqueue(queue, elementValue);
                        break;
                    case 2:
                        deletedElement = dequeue(queue);
                        if (deletedElement != -1)
                            printf("Deleted: %d\n", deletedElement);
                        break;
                    case 3:
                        display_linear(queue);
                        break;
                    case 4:
                        return 0;    
                    default:
                        printf("Invalid option\n");
                }
            }
        } else if (queueTypeChoice == 2) {
            while (1) {
            int operationChoice, elementValue, deletedElement;
                printf("\n--- Circular Queue ---\n");
                printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
                printf("Enter: ");
                scanf("%d", &operationChoice);
                switch (operationChoice) {
                    case 1:
                        printf("Enter element to enqueue: ");
                        scanf("%d", &elementValue);
                        cenqueue(queue, elementValue, size);
                        break;
                    case 2:
                        deletedElement = cdequeue(queue, size);
                        if (deletedElement != -1)
                            printf("Deleted: %d\n", deletedElement);
                        break;
                    case 3:
                        display_circular(queue, size);
                        break;
                    case 4:
                        return 0;   
                    default:
                        printf("Invalid option\n");
                }
            }
        } else {
            printf("Invalid choice\n");
        }
    }
}
