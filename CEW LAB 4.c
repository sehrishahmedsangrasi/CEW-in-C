#include <stdio.h>
#include <stdlib.h>

////TASK 1: ADDING TWO SORTED LINKED LISTS
//struct Node{
//    int data;
//    struct Node* next;
//};
//struct Node* createnode(int data){
//    struct Node* newnode=(struct Node* )malloc(sizeof(struct Node));
//    if (newnode==NULL){
//        fprintf(stderr,"memory allocation failed\n");
//        exit(1);
//    }
//    newnode->data=data;
//    newnode->next=NULL;
//    return newnode;
//
//}
//struct Node* insertatend(struct Node* head,int data){
//    struct Node* current=head;
//    struct Node* node=createnode(data);
//    if (head==NULL){
//        return node;
//    }
//    while (current->next!=NULL){
//        current=current->next;
//    }
//    current->next=node;
//    return head;
//}
//void printnode(struct Node* head){
//    struct Node* current=head;
//    while (current!=NULL){
//        printf("%d\n",current->data);
//        current=current->next;
//    }
//}
//struct Node* addnode(struct Node* head,struct Node* head1){
//    struct Node* current=head;
//    while (current->next !=NULL){
//        current=current->next;
//    }
//    current->next=head1;
//}
//int main(){
//struct Node* a=createnode(3);
//struct Node* b=insertatend(a,4);
//struct Node* d=createnode(5);
//struct Node* e=insertatend(d,6);
//addnode(a,d);
//printnode(a);
//}


//TASK 2: COVERTING LINKED LIST TO ARRAY

#include <stdio.h>
#include <stdlib.h>
//struct Node{
//int data;
//struct Node* next;
//};
////function to create nodes
//struct Node* create_node(int data_insert){
//struct Node* new_Node=(struct Node*) malloc(sizeof(struct Node));
//if (new_Node == NULL) {
//printf("Memory allocation failed");
//return NULL;
//}
//new_Node->data=data_insert;
//new_Node->next=NULL;
//return new_Node;
//}
////function to create linked list
//int create_link_list(void){
////creation of list
//int count=1;
//printf("CREATING YOUR LIST....PLEASE ENTER 'Y' TO STOP\n");
//char ch;
//int data;
//printf("ENTER WHAT YOU WANT TO INSERT IN NODE:");
//scanf("%d",&data);
//struct Node* head = create_node(data);
//struct Node* current = head;
//printf("DO YOU WANT TO FINISH CREATING LIST?(Enter 'Y' to stop):");
//scanf("  %c",&ch);
//while(ch!='Y'){
//        printf("ENTER WHAT YOU WANT TO INSERT IN NODE:");
//        scanf("%d",&data);
//        current->next = create_node(data);
//        current = current->next;
//        count++;
//        printf("DO YOU WANT TO FINISH CREATING LIST?(Enter 'Y' to stop):");
//        scanf("  %c",&ch);
//    }
////return count;
////printing list
//struct Node* current2 = head;
//for(int i=0;i<count;i++){
//   if(current2==NULL){
//    printf("The list is printed");
//    break;
//   }
//   printf("NODE %d -> %d ",i,current2->data);
//   current2=current2->next;
//}
//return head;
//}
//void cnvrt_to_array(struct Node* head){
//struct Node* current=head;
//int* array=(int*)malloc( 1000 * sizeof(int) );
//int elements=0;
//while(current!=NULL){
//   array[elements]=current->data;
//   current=current->next;
//   elements++;
//}
//printf("\nPRINTING ARRAY...\n");
//int* arr_ptr=array;
// printf("%c",'[');
//for(int i=0;i<elements;i++){
//    if(*arr_ptr==NULL){
//        break;
//    }
//    printf(" %d",*arr_ptr);
//    arr_ptr++;
//
//}
//printf("%c",']');
//free(array);
//}
////calling in main function
//int main(){
//struct Node* head_list=create_link_list();
//cnvrt_to_array(head_list);
//return 0;
//}

// TASK 3: DELETING ODD INDICES OF SINGLY LINKED LIST
//#include <stdio.h>
//#include<stdlib.h>
//
//struct Node{
//    int data;
//    struct Node* next;
//};
//struct Node* createnode(int data){
//    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
//    if (newnode== NULL){
//        fprintf(stderr,"memory allocation failed\n");
//        exit(1);
//    }
//    newnode->data=data;
//    newnode->next=NULL;
//    return newnode;
//
//}
//struct Node* popoddind(struct Node* head){
//    int i=1;
//    if (head==NULL || head->next==NULL){
//        return head;
//    }
//    struct Node* current=head->next;
//    struct Node* temp=head;
//    while(temp!=NULL && current!=NULL){
//        if(i%2!=0){
//            temp->next=current->next;
//            free(current);
//            current=temp->next;
//        }else{
//            temp=current;
//            current=current->next;
//
//        }
//        i++;
//    }
//    return head;
//}
//
//void print(struct Node* head){
//    struct Node*current=head;
//    while(current!=NULL){
//        printf("%d  ",current->data);
//        current=current->next;
//    }
//
//}
//struct Node* insertatend(struct Node* head,int data){
//    struct Node* current=head;
//    struct Node* new=createnode(data);
//    if (head==NULL){
//        return new;
//    }
//    while(current->next!=NULL){
//        current=current->next;
//    }
//    current->next=new;
//    return head;
//
//}
//
//int main(){
//    struct Node* a=createnode(4);
//    struct Node* b=insertatend(a,2);
//    struct Node* c=insertatend(b,1);
//    struct Node* e=insertatend(c,9);
//    struct Node* f=insertatend(e,0);
//    struct Node* sorted_head=popoddind(a);
//    print(sorted_head);
//    printf("\n");
//    free(sorted_head);
//    free(c);
//    free(b);
//    free(a);
//    return 0;
//}

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct phonebook{
    char name[50];
    char email[50];
    char contact[90];
};
int main(){
    struct phonebook* addressbook=NULL;
    int numcontact=0;
    while(1){
        printf("\nAddress Book Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. View Address Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch(choice){
            case 1:
            numcontact++;
            if(numcontact==1){
                addressbook=(struct phonebook*)malloc(sizeof(struct phonebook));
            }
            else{
               addressbook=(struct phonebook*)realloc(addressbook,numcontact*sizeof(struct phonebook));
            }
            if (addressbook==NULL){
                fprintf(stderr,"Memory allocation failed\n");
                exit(1);
            }
            printf("enter contact details\n");
            printf("enter name:");
            scanf("%s",addressbook[numcontact - 1].name);
            printf("enter email:");
            scanf("%s",addressbook[numcontact - 1].email);
            printf("enter contacT:");
            scanf("%s",addressbook[numcontact - 1].contact);
            break;
            case 2:
            if(numcontact>0){
                int indx;
                printf("enter index of contact u want to delete\n");
                scanf("%d",&indx);
                if (indx>0 && indx<numcontact){
                for(int i=indx;i<indx;i++){
                    printf("%d",i+1);
                    addressbook[i]=addressbook[i+1];
                }
                 numcontact--;
                addressbook=(struct phonebook*)realloc(addressbook,numcontact*sizeof(struct phonebook));

                }
                else{
                    printf("invalid index\n");
                }
            }
            else{
                printf("addressbook is empty\n");
            }
            break;
            case 3:
            if(numcontact>0){
            for(int i=0;i<numcontact;i++){
                printf("contact%d:\n",i+1);
                printf("name:%s\n",addressbook[i].name);
                printf("email:%s\n",addressbook[i].email);
                printf("contact:%s\n",addressbook[i].contact);
            }
            }
            else{
                printf("addressbook is empty\n");
            }
            break;
            case 4:
            free(addressbook);
            return 0;
            default:
            printf("invalid choice");
            break;
    }

}
return 0;
}



