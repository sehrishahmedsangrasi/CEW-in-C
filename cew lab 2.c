#include <stdio.h>
# include <string.h>
#include <stdlib.h>

//Task : 1    SERIES OF ODD NUMBERS BY FOR LOOP
/*int main(){
    int n;
    int sum=0;
    printf("How many terms of series do u want to print: ");
    scanf("%d",&n);
    printf("First n odd numbers are:");
    for (int i=0;i<=n-1;i++){
        printf("%d ",2*i+1);
        sum+=2*i+1;
    }
    printf("\nTotal sum is:%d",sum);
    return 0;
}*/
//      SEIRES OF ODD NUMBERS BY WHILE LOOP

/*int main(){
    int n;
    int sum=0;
    printf("How many terms of series do u want to print: ");
    scanf("%d",&n);
    printf("First n odd numbers are:");
    int i=0;
    while (i<=n-1){
        printf("%d ",2*i+1);
        sum+=2*i+1;
        i++;
    }
    printf("\nTotal sum is:%d",sum);
    return 0;

}*/

//   SERIES BY ODD NUMBERS BY DO WHILE

/*int main(){
    int n;
    int sum=0;
    printf("How many terms of series do u want to print: ");
    scanf("%d",&n);
    printf("First n odd numbers are:");
    int i=0;
    do{
        printf("%d ",2*i+1);
        sum+=2*i+1;
        i++;
    }while(i<=n-1);
    printf("\nTotal sum is:%d",sum);
    return 0;
}*/

///TASK : 2          ASTERISK  PATTERN
/*int main(){
    int n;
    printf("How many lines of pattern do u want to print:");
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        for( int i=n-1;i>=k;i--){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("* ");
            }
        printf("\n");
    }
    return 0;

}*/

//TASK : 3  COMPARING TWO STRINGS

/*int counts(char* a){
    int leng=0;
    while(a[leng]!='\0'){
            leng++;
    }
    return leng;
}
int main(){
    char st1[50];
    char st2[50];
    printf("Enter a string:");
    scanf("%s",st1);
    printf("Enter a string:");
    scanf("%s",st2);
    int c1=counts(st1);
    int c2=counts(st2);
    if (c1>c2){
        printf("string 1 is greater");
    }
    else if(c1<c2){
        printf("string 2 is greater");

    }
    else if(c1==c2){
        printf("both strings are equal");
    }
    return 0;

}*/

//TASK 4   COVERTING UPPERCASE TO LOWERCASE AND LOWERCASE TO UPPERCASE
/*int main(){
    char st1[50];
    printf("Enter a string:");
    scanf("%s",st1);
    for(int i=0;i<=strlen(st1);i++){
        if(islower(st1[i])!=0){
           st1[i]=toupper(st1[i]);
        }
        else if(isupper(st1[i])!=0){
            st1[i]=tolower(st1[i]);
        }

    }
    printf("%s",st1);
    return 0;

}*/

// TASK ;  5      PRINTING UNIQUE ELEMENTS IN A ARRAY

/*int main(){
    char st1[50];
    printf("Enter a string:");
    scanf("%s",st1);
    int counts[50]={0};
    int size=strlen(st1);
    for (int i=0;i<strlen(st1);i++){
            for (int j=0;j<strlen(st1);j++){
                if(i!=j&&st1[i]==st1[j]){
                    counts[i]+=1;
                }
            }

    }
    for (int k=0;k<size;k++){
        if(counts[k]==0){
            printf("%c",st1[k]);
        }
    }
    return 0;
}*/
//TASK : 6  ADDING TWO DISTANCES IN INCH-FEET SYSTEM BY STRUCTURES
#include<math.h>
   struct Dist{
        float inch;
        float feet;
    };
    void addDis(float a,float b,float c,float d){
        if (b+d>12.00){
            float e=12.00;
            float h=(b+d)/12.00;
            float f=fmod(b+d,e);
            printf("Total distance is: %.2f feets %.2f inches ",(a+c)+h,f);
        }
        else{
            printf("Total distance is: %.2f feets %.2f inches ",a+c,b+d);
        }
        return 0;


    }
    int main(){
    struct Dist dis1,dis2;
    printf("Enter distance of first obj as feet inch:");
    scanf("%f %f",&dis1.feet,&dis1.inch);
    printf("Enter distance of second obj as feet inch:");
    scanf("%f %f",&dis2.feet,&dis2.inch);
    addDis(dis1.feet,dis1.inch,dis2.feet,dis2.inch);
    return 0;

}
