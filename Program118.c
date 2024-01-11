// To print String
#include<stdio.h>
#include<conio.h>

int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    //scanf("%s",Arr); // only print (india)

            //OR we can write

    scanf("%[^'\n']s",Arr);

            // OR we Can Write

    //gets(Arr); // print all (india is my)

    printf("Entered string is : %s \n",Arr);

    return 0;
}
