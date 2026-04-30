#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insertAtfirst()
{
  int value;
  struct node *newNode;
  newNode = (struct node *)malloc(sizeof(struct node));
  if (newNode == NULL)
  {
    printf("memory is full.\n");
    return;
  }
  printf("Enter the data: ");
  scanf("%d", &value);
  newNode->data = value;
  newNode->next = NULL;
  if (head == NULL)
  {
    head = tail = newNode;

  }
  else
  {
    newNode->next = head;
    head = newNode;
  }
  printf("%d is inserted at first\n", value);
}

void insertAtlast()
{
  int value;
  struct node *newNode;
  struct node *temp;
  temp = head;
  newNode = (struct node *)malloc(sizeof(struct node));
  if (newNode == NULL)
  {
    printf("memory is full\n");
    return;
  }
  printf("Enter the data: ");
  scanf("%d", &value);
  newNode->data = value;
  newNode->next = NULL;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
  }
  else {
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
  }
  printf("%d is inserted at last\n", value);
}

void insertPos()
{
  int i, value, pos;
  struct node *temp;
  struct node *newNode;
  newNode = (struct node *)malloc(sizeof(struct node));
  if (newNode == NULL)
  {
    printf("insufficient memory in RAM\n");
    return;
  }
  printf("Enter the value: ");
  scanf("%d", &value);

  newNode->data = value;
  newNode->next = NULL;

  printf("Enter the position: ");
  scanf("%d", &pos);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    temp = head;
    for (i = 2; i < pos; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

void deleteFirst()
{
  struct node *temp;
  if (head == NULL) {
    printf("list is empty");
    return;
  }
  temp = head;
  head = head -> next;
  free(temp);
}

void deletePos()
{
  struct node *temp,*temp2;
  if (head == NULL)  {
    printf("list is empty");
    return;
  }
  temp = head;
  int i, pos;
  printf("Enter the position: ");
  scanf("%d", &pos);
  for (i = 2; i < pos; i++)
  {
    temp = temp->next;
  }
  temp2 = temp->next;
  temp->next = temp2->next;
  free(temp2);
}

void display()
{
  struct node *temp;
  if (head == NULL) {
    printf("list is empty");
    return;
  }
  temp = head;
  while (temp->next != NULL)
  {
    printf("%d  ", temp->data);
    temp = temp->next;
  }
  printf("%d\n",temp->data);
}

int main()
{
  int ch;
  printf("Linked List Menu\n");
  printf("1. InsertAtFirst\n");
  printf("2. InsertAtLast\n");
  printf("3. InsertAtSpecifiedPosition\n");
  printf("4. Delete\n");
  printf("5. DeleteAtSpecifiedPositon\n");
  printf("6. Display\n");
  printf("7. Exit\n");
  while (1)
  {
    printf("Enter your choice (1/2/3/4/5/6/7): ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insertAtfirst();
      break;
    case 2:
      insertAtlast();
      break;
    case 3:
      insertPos();
      break;
    case 4:
      deleteFirst();
      break;
    case 5:
      deletePos();
      break;
    case 6:
      display();
      break;
    case 7:
      return 0;
    default:
      printf("your entered wrong choice\n");
    }
  }
  return 0;
}