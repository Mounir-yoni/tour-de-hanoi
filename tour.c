#include<stdio.h>
#include<stdlib.h>


void tour(int numb,char D, char A, char I);


int main(){
    int numberoftour=3;
    tour(numberoftour,'A','B','C');
    system("pause");
}



void tour(int numb,char first, char last, char between){

    if (numb==1)
    {
        printf("Disque 1 de %c a %c \n",first,last);
    }
    else{
        tour(numb-1,first,between,last);
        printf("Disque %d de %c a %c \n",numb,first,last);
        tour(numb - 1, between, last, first);
    }
    

}