#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void gap()
{
    printf("\n");
}
void dash(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("-");
    }
}
void create(int A[], int size)
{
    struct Node *t, *p;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[0];
    t->next = NULL;
    first = t;
    p = first;
    for (int i = 1; i < size; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        p->next = t;
        p = t;
    }
}

void display(struct Node *p)
{
    printf("List : [");
    while (p)
    {
        printf(" %d ", p->data);
        p = p->next;
        if (p)
        {
            printf(",");
        }
    }
    printf("]");
}

void insert()
{
    struct Node *p = first;
    int pos;
    printf("\n Position for Insertion : ");
    scanf("%d", &pos);
    pos--;
    int k = 0;
    if (pos == 0)
    {
        struct Node *t;
        t = (struct Node *)malloc(sizeof(struct Node));
        printf("\n Enter Data : ");
        scanf("%d", &t->data);
        t->next = first;
        first = t;
    }
    else
    {
        while (p && k != pos)
        { 
            k++;
            p = p->next;
            if (k == pos && p)
            {
                struct Node *t;
                t = (struct Node *)malloc(sizeof(struct Node));
                printf("\n Enter Data : ");
                scanf("%d", &t->data);
                t->next = p->next;
                p->next = t;
            }
            if (!p)
            {
                printf("\n Position out of range");
            }
        }
    }
}

void deleteNode()
{
    int pos;
    if (first == NULL)
    {
        printf("\n List is empty");
    }
    else
    {
        int x = -1;
        struct Node *f;
        printf("\n Enter position to delete : ");
        scanf("%d", &pos);
        pos--;
        if (pos == 0)
        {
            x = first->data;
            f = first;
            first = first->next;
            printf("\n Deleted data : %d", x);
            free(f);
        }
        else
        {
            int k = 0;
            struct Node *p, *q;
            p = first;
            q = NULL;
            while (k != pos && p)
            {
                k++;
                q = p;
                p = p->next;
            }
            if (k == pos && p)
            {
                x = p->data;
                q->next = p->next;
                printf("\n Deleted data : %d", x);
                free(p);
            }
            if (k != pos)
            {
                printf("\n Incorrect Position !!");
            }
        }
    }
}

int length()
{
    struct Node *p = first;
    int k = 0;
    while (p)
    {
        k++;
        p = p->next;
    }
    printf("\n Length : %d ", k);
    return k;
}

void checkLoop()
{
    struct Node *p = first;
    struct Node *q = first;
    do
    {
        if (p)
            p = p->next;
        if (q && q->next)
            q = q->next->next;
    } while (p && q && p != q);

    if (p == q && p)
    {
        printf("\n Loop Existed !!");
    }
    else
    {
        printf("\nNo Loop Exists !");
    }
}
int search()
{
    struct Node *p = first;
    int x = 0;
    int key;
    printf("\n Enter Element for Search : ");
    scanf("%d", &key);
    while (p)
    {
        if (key == p->data)
        {
            printf("\n Element Found !!");
            return 1;
        }

        p = p->next;
    }
    printf("\n Element Not FOund !!");
    return 0;
}

int checkSorted()
{
    struct Node *p = first;
    int data = first->data;
    while (p)
    {
        if (data > p->data)
        {
            printf("\n Not Sorted !! ");
            return 0;
        }
        data = p->data;
        p = p->next;
    }
    printf("\n Sorted !! ");
    return 1;
}
void RDisplay(struct Node *p)
{
    if (p == first)
    {
        printf("\n Reverse  Display : [");
    }
    if (p)
    {
        RDisplay(p->next);
        printf(" %d ,", p->data);
    }
    if (p == first)
    {
        printf(" ]");
    }
}

void reverselist()
{
    printf("Reversing a List : ");
    
}
int maximum()
{
    struct Node *p = first;
    if (p)
    {
        int max = p->data;
        while (p)
        {
            if (p->data > max)
            {
                max = p->data;
            }
            p = p->next;
        }
        printf("\n Max Element : %d ", max);
        return max;
    }
    printf("\n No List Here !!");
    return 0;
}

int main()
{
    printf("---------------------------------------Welcome-----------------------------------------");
    gap();
    int a[] = {23, 45, 22, 11, 67, 11};
    int size = sizeof(a) / sizeof(a[0]);
    create(a, size);

    int choice = 0;
    do
    {
        gap();
        gap();
        dash(20);
        gap();
        printf(" 1.Insert \n 2.Delete \n 3.Display \n 4.Search \n 5.Check For Loop \n 6.Check Is List Sorted ? ");
        printf("\n 7.Reverse List  \n 8.Length\n 9.Max \n 10.Reverse Display  \n 11.Exit \n");
        printf("\n Enter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            deleteNode();
            break;

        case 3:
            display(first);
            break;
        case 4:
            search();
            break;
        case 5:
            checkLoop();
            break;
        case 6:
            checkSorted();
            break;
        case 7:
            reverselist();
            break;

        case 8:
            length();
            break;
        case 9:
            maximum();
            break;
        case 10:
            RDisplay(first);
            break;
        case 11:
            printf("\n GOOD BYE :)");
            break;
        default:
            printf("\n Enter Valid Key !! ");
            break;
        }
    } while (choice != 11);
    gap();
    gap();
    dash(50);
    printf("Exiting ");
    dash(50);
    gap();
    return 0;
}