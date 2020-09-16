//=========ROLL NUMBER:19L134========
//=========SIVA SURYA.S===============

#include<stdio.h>
main(){
//variables required
int i ,j ,temp ,elementAdded ,addingPosition ,removingPosition ,n ,a[100],x;
char ch;

//entering the number of elements in the array
printf("Enter the total number of elements in the array\n");
scanf("%d",&n);

//getting the elements from the user
for (i = 0; i < n; ++i){
        printf("Enter the element of position %d \n",i+1);
    scanf("%d",&a[i]);
}

//entering into do while loop
do{
        printf("Enter 1: for adding elements \nEnter 2 : for deleting the elements\n");
        scanf("%d",&x);

    switch(x){
case 1:
    //getting the input and position from the user
    printf("Enter the element to be inserted:       ");
    scanf("%d",&elementAdded);
    printf("Enter the position in which the element is to be inserted:         ");
    scanf("%d",&addingPosition);

    //checking if the index is in bound
    if (addingPosition <= n){
    printf("The Modified Array \n");


    //performing shift
    for (i = (n-1);i >= addingPosition-1;--i ){
        temp = a[i];
        a[i+1] = temp;
    }

    //adding the element in the index
    a[addingPosition - 1] = elementAdded;
    n+=1;

    //printing the array
    for (i=0;i<n;++i){
        printf("%d",a[i]);
        printf("\n");
    }
    }

    else{
        printf("Index out of range\n");
    }
    break;
case 2:
    //getting the position in which the element is deleted
    printf("Enter the position in which the element is to be deleted:         ");
    scanf("%d",&removingPosition);

    //checking if the index is in bound
    if (removingPosition <= n){
    printf("The Modified Array \n");

    //performing shift
    for (i = (removingPosition-1);i<n;i++){
        temp = a[i+1];
        a[i]=a[i+1];
    }

    //printing the array
    for (i=0;i<n-1;++i){
        printf("%d",a[i]);
        printf("\n");
    }
    }
    else{
        printf("Index out of range\n");
    }
    break;
default:
    printf("Enter the correct option");
    break;
    }

    printf("press y to continue and other keys to abort\n");
    fflush(stdin);
    scanf("%c",&ch);

}
while(ch== 'y' || ch == 'Y');

}
