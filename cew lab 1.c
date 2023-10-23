#include <stdio.h>
#include <stdlib.h>

TASK 1;
//int main()
//{
    //int id;
    //float hrs;
    //float salary;
    //printf("Enter Employee ID:");
    //scanf("%d",&id);
    //printf("Enter total worked hours in a month:");
    //scanf("%f",&hrs);
    //printf("Enter salary per hour:");
    //scanf("%f",&salary);
    //printf("your id is: %d\n",id);
    //printf("your salary is: %.2f\n",hrs*salary);
    //return 0;
//}


TASK  2:

//int main(){
     //float h;
    //float w;
    //printf("enter height:");
    //scanf("%f",&h);
    //printf("enter width:");
    //scanf("%f",&w);
    //printf("perimeter:%f\n",2*(h+w));
    //printf("Area:%f",h*w);
    //return 0;
//}

TASK 3:

//int main()
//{

    //float h;
    //printf("Enter height in cm:");
    //scanf("%f",&h);
    //if (h<150)
    ///{
       // printf("dwarf");
    //}
    //else if(h==150)
    //{
        //printf("Average");
    //}
    //else if(h>=165)
    //{
      //  printf("Tall");
    //}



   // return 0;

//}

TASK 4:    DECIMAL TO BINARY CONVERTER

/*void cnvrt(int x){
    if(x>=1){
        cnvrt(x/2);
        printf("%d",x%2);


    }

}
int main()
{
    int num;
    printf("enter a num to be converted:");
    scanf("%d",&num);
    cnvrt(num);
    return 0;

}*/


TASK 5:      FIBONACCI SERIES
void calc(int num){
    int x=1;
    int y=1;
    int z=0;
    printf("%d\n",x);
    printf("%d\n",y);
    for(int i=0;i<num;i++){
        z=x+y;
        x=y;
        y=z;
        printf("%d\n",z);

    }
}
int main()
{
    int num;
    printf("How many terms of fibonacci series do u want to print?:");
    scanf("%d",&num);
    calc(num);
    return 0;
}

