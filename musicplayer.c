#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    char *title;
    struct node *next, *prev;
}node;

node *create_node(char *title)
{
    node *tmp = (node *)malloc(sizeof(node));
    tmp->prev = tmp->next = NULL;
    tmp->title = strdup(title);
    return tmp;
}

void append(node **head, char *title)
{
    node *tmp = create_node(title);
    if(*head == NULL)
    {
        tmp->next = tmp;
        tmp->prev = tmp;
        *head = tmp;
        return;
    }
    tmp->prev = (*head)->prev;
    tmp->next = (*head);
    (*head)->prev->next = tmp;
    (*head)->prev = tmp;
}
void traverse(node *head)
{
    if(head == NULL)
        return;
    node *temp = head;
    do
    {
        printf("%s\n", temp->title);
        temp = temp->next;
    }while(temp != head);
}
void addtracktofile(char* track)
{
    FILE* fptr = fopen("music.txt","a");
    fprintf(fptr,"\n%s",track);
    fclose(fptr);
}
void menu()
{   printf("****#### USE THESE INSTRUCTION FOR MAKING CHANGES ####****\n");
    printf("Press 'S' for start the player\n");
    printf("Press 'J' for jump to a specific track\n");
    printf("Press 'N' for next track\n");
    printf("Press 'P' for previous track\n");
    printf("Press 'F' for first track\n");
    printf("Press 'L' for last track\n");
    printf("Press 'A' for add a track after an exisiting track\n");
    printf("Press 'B' for add a track before an exisiting track\n");
    printf("Press 'R' for remove a specific track from the list\n");
    printf("Press 'O' for sort tracks in alphabetical order\n");
    printf("Press 'T' for stop the player\n");
    printf("Press 'C' for change the track position\n");
    printf("Press 'D' for display all track\n");
    printf("*****#########*****\n");
}
void addtrack_after(node** head,node* cur,char* track)
{
    node* temp = create_node(track);
    node* ptr = *head;
    if(cur == *head)
    {
        temp -> next = (*head) -> next;
        (*head) -> next -> prev = temp;
        temp -> prev = (*head);
        (*head) -> next = temp;
        return;
    }
    else
    {
        temp -> next = cur -> next;
        cur -> next -> prev = temp;
        temp -> prev = cur;
        cur -> next = temp;
    }
}
void addtrack_before(node** head,node* cur,char* track)
{
    node* temp = create_node(track);
    node* ptr = *head;
    if(cur == *head)
    {
        temp -> next = (*head);
        temp -> prev = (*head) -> prev;
        (*head) -> prev -> next = temp;
        (*head) -> prev = temp;
        (*head) = temp;
        return;
    }
    else
    {
        temp -> next = cur;
        temp -> prev = cur -> prev;
        cur -> prev -> next = temp;
        cur -> prev = temp;
        (*head) = temp;
    }
}
void delete(node** head,node* cur)
{
    node* temp;
    if(cur == *head)
    {
        temp = *head;
        (*head) = (*head) -> next;
        free(temp);
    }
    else
    {
        temp = cur;
        cur -> prev -> next = cur -> next;
        cur -> next -> prev = cur -> prev;
        free(temp);
    }
}
void swap(node *head1,node* head2)
{
    char* temp = head1 -> title;
    head1 -> title = head2 -> title;
    head2 -> title = temp;
}
void sort(node** head)
{
    node* temp = NULL;
    if(*head ==NULL)
    return;
    else
    {
        do
        {
            if((*head) -> title > (*head) -> next -> title)
            {    
                swap((*head),(*head) -> next);
                (*head) = (*head) -> next;
            }
            else if((*head) -> title <= (*head) -> next -> title)
            {
                *head = (*head) -> next;
            }
        }while((*head) -> next != *head);
    }
}
void show(node* head)
{
    if(head == NULL)
        return;
    node *temp = head;
    node* cur = temp -> next;
    do
    {
        if(temp == cur)
        {
            printf("*%s",temp -> title);
            temp = temp -> next;
        }
        else
        {
            printf("%s\n", temp->title);
            temp = temp->next;
        }
    }while(temp != head);
}
void display(node *head)
{
    
    char track[50];
    node* cur = head;
    char a;
    printf("Press key  for making changes:");
    scanf("%c",&a);
    switch (a)
    {
        case 'S':
            printf("%s",cur -> title);
            break;
        case 'N':
            printf("%s",cur -> next -> title);
            break;
        case 'P':
            printf("%s",cur -> prev -> title);
            break;
        case 'F':
            printf("%s",head -> title);
            break;
        case 'L':
            printf("%s",head -> prev -> title);
            break;
        case 'A':
        {
            printf("Enter the Name of track You wanted to add After :");
            scanf("%s",track);
            addtrack_after(&head,cur,track);
            traverse(head);
            addtracktofile(track);
            break;
        }
        case 'B':
        {
            printf("Enter the Name of track You wanted to add Before:");
            scanf("%s",track);
            addtrack_before(&head,cur,track);
            traverse(head);
            addtracktofile(track);
            break;
        }
        case 'R':
        {
            delete(&head,cur);
            traverse(head);
            break;
        }
        case 'O':
        {
            
            sort(&head);
            traverse(head);
            break;
        }
        case 'T':
        {
            printf("Player Stoped");
            break;
        }
        case 'C':
        {
            printf("Track position:");
            printf("%s",head -> title);
            printf("Changed Track position:");
            printf("%s",head -> next -> title);
            break;
        }
        case 'D':
        {
            show(head);
            
        }
    }
}

int main()
{
    menu();
    FILE *fp;
    char str[50];
    node *cur =(node*)malloc(sizeof(node));
    cur = NULL;
    node *head = NULL;
    cur = head;
    fp = fopen("Music.txt", "r");
    while(fgets(str, sizeof(str), fp))
    {
        append(&head, str);
    }
    fclose(fp);
    display(head);
    // printf("%s",head -> title);
    // traverse(head);
}