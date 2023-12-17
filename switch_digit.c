#include<stdio.h>

int  main(){

    int day; // 1-monday; 2-tuesday; 3-wednesday: 4-thursday; 5-Friday; 6-saturday; 7-sunday;

    printf("Input the (day's value 1-7) : ");
    scanf("%d",&day);

   switch (day){

    case 1 :printf("Monday");
            break;
    case 2 :printf("Tuesday");
            break;
    case 3 :printf("Wednesday");
            break;     
    case 4 :printf("Thursday");
            break;  
    case 5 :printf("Friday");
            break;
    case 6 :printf("Saturday");
            break;
    case 7 :printf("Sunday");
            break;
        default :printf("The value isn't valid");

   }
return 0;
}