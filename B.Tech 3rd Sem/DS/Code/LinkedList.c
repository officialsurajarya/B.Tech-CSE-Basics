#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = 0; // global declaration

struct node *createNode()
{
    struct node *h1;
    h1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data: ");
    scanf("%d", &h1->data);
    h1->next = 0;
    return h1;
}

void insertStart()
{
    struct node *k1;
    k1 = createNode();
    if (start == 0)
    {
        start = k1;
    }
    else
    {
        k1->next = start;
        start = k1;
    }
}

void insertEnd()
{
    struct node *h1;
    h1 = createNode();
    if (start == 0)
    {
        start = h1;
    }
    else
    {
        struct node *m1;
        m1 = start;
        while (m1->next != 0)
        {
            m1 = m1->next;
        }
        m1->next = h1;
    }
}

void insertMiddle()
{
    struct node *m1 = createNode();
    if (start == 0)
    {
        start = m1;
    }
    else
    {
        int d;
        printf("Enter a data where you want to insert: ");
        scanf("%d", &d);
        struct node *f = start;
        while (f->next->data != d)
        {
            f = f->next;
        }
        struct node *j = f->next;
        f->next = m1;
        m1->next = j;
    }
}

void deleteStart()
{
    if (start == 0)
    {
        printf("There is no any element to delete");
    }
    else
    {
        struct node *x1;
        x1 = start;
        start = start->next;
        x1->next = 0;
        printf("%d deleted Successfully.\n", x1->data);
        free(x1);
    }
}

void deleteEnd()
{
    if (start == 0)
    {
        printf("There is no any element to delete");
    }
    else if (start->next == 0)
    {
        free(start);
        start = 0;
    }
    else
    {
        struct node *m1 = start;
        while (m1->next->next != 0)
        {
            m1 = m1->next;
        }
        struct node *j1 = m1->next;
        m1->next = 0;
        free(j1);
    }
}

void deleteMiddle()
{
    if (start == 0)
    {
        printf("List is empty.\n");
    }
    else
    {
        int d;
        printf("Enter data to delete: ");
        scanf("%d", &d);

        if (start->data == d)
        {
            struct node *temp = start;
            start = start->next;
            free(temp);
            return;
        }

        struct node *g1 = start;

        while (g1->next != 0 && g1->next->data != d)
        {
            g1 = g1->next;
        }

        if (g1->next == 0)
        {
            printf("Data not found.\n");
        }
        else
        {
            struct node *h1 = g1->next;
            g1->next = h1->next;
            free(h1);
        }
    }
}

void display()
{
    struct node *j1;
    j1 = start;

    while (j1 != 0)
    {
        printf("%d ", j1->data);
        j1 = j1->next;
    }
}

void main()
{
    int ch;

    printf("\n1. Insertation from start");
    printf("\n2. Insertation from end");
    printf("\n3. Insertation from middle");
    printf("\n4. Deletion from start");
    printf("\n5. Deletion from end");
    printf("\n6. Deletion from middle");
    printf("\n7. Display");
    printf("\n8. Exit");

    while (1)
    {
        printf("\nEnter your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            insertStart();
            break;
        }

        case 2:
        {
            insertEnd();
            break;
        }

        case 3:
        {
            insertMiddle();
            break;
        }

        case 4:
        {
            deleteStart();
            break;
        }

        case 5:
        {
            deleteEnd();
            break;
        }

        case 6:
        {
            deleteMiddle();
            break;
        }

        case 7:
        {
            display();
            break;
        }

        case 8:
        {
            exit(0);
        }

        default:
            printf("\nInvalid Input");
            break;
        }
    }
}