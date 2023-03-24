#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int ch;

void arrowHere(int realPosition, int arrowPosition){
    if(realPosition == arrowPosition){
        printf("==> ");
    }else{
        printf("    ");
    }}


int main(){
     fflush(stdin);
system("COLOR 70");

int key=0;
int p=1;
while(key!=13){
      system("cls");
      fflush(stdin);


    printf("    ===========================\n");
    printf("     Tugas Quiz Stack and Queue\n");
    printf("    ===========================\n");
    arrowHere(1,p); printf("       1. Stack String\n");
    arrowHere(2,p); printf("       2. Queue Int\n");
    arrowHere(3,p); printf("       3. EXIT\n");

     printf("    ===========================\n");
 key=getch();
  if (key==80 && p !=3){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
     stacks();
    }

else if(key==13 && p==2){
     queues();
 }
 else if(key==13 && p==3){
        system("cls");
        printf("BYE");
        exit(1);
 }

}



   struct Tumpukan{
            char data[5][50];
            int top;
        }tumpuk;

        int isEmpty(){
            if(tumpuk.top == -1)
            {
                return 1;
            }else{
                return 0;
            }
        }


        int isFull(){
            if(tumpuk.top == MAX-1)
            {
                return 1;
            }
            else{
                return 0;
            }
        }

        void inisialisasi(){
            //decalare bahwa tumpukan masih kosong
            tumpuk.top = -1;
        }

        void push(){
            system("cls");
            char temp[30];
            if(isFull() != 1)
            {
                tumpuk.top++;
                printf("Masukkan data:");
                scanf(" %[^\n]s",&temp);
                strcpy(tumpuk.data[tumpuk.top],temp);
                system("cls");
                printf("Data %s berhasil di input\n\n\n",tumpuk.data[tumpuk.top]);

            }else{
                system("cls");
                printf("Data sudah penuh");
            }
        }

        void pop(){
            if(isEmpty() != 1)
            {
                system("cls");
                printf("Data %s telah dibuang\n\n\n",tumpuk.data[tumpuk.top]);
                tumpuk.top--;

            }else{
                system("cls");
                printf("Data masih kosong\n\n\n");
            }
        }

        void printData(){
              system("cls");

            if(isEmpty() !=1){
                    printf("Hasil:\n");
                   for(int i=tumpuk.top;i>=0;i--){
                    printf("- %s\n",tumpuk.data[i]);
            }

    }
            else{

                printf("Data masih kosong\n");
            }
        printf("\n\n-----------------\n");}

    int stacks(){
        int ch;
        fflush(stdin);
        system("cls");
        inisialisasi();
        int choice;
        do{
            printf("1.Push Stack\n");
            printf("2.Pop Stack\n");
            printf("3.Print Stack\n");
            printf("4.Clear Stack\n");
            printf("5.Exit\n");
            printf("Input pilihan:");
            scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    printData();
                    break;
                case 4:
                    if(isEmpty())
                    {
                        printf("Data masih kosong!,tidak bisa reset\n");
                        while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                stacks(); }}}
                    }
                    else{
                          inisialisasi();
                    printf("Data telah di reset!\n");
                    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                stacks(); }}}

                    }
                case 5:
                    main();
                    break;
                default:
                    printf("tidak ada dalam pilihan\n");
                    printf(" enter kembali menu");
                    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                main(); }}}

                    break;
                }

        }while(choice >0 && choice < 6);
return 0;
    }


struct Antrian{
        int head;
        int tail;
        int data[MAX];
    }antrian;

    int isEmptyy()
    {
        if(antrian.tail == -1)
        {
            return 1;
        }else{
            return 0;
        }
    }

    int isFulll()
    {
        if(antrian.tail == MAX -1)
        {
            return 1;
        }else{
            return 0;
        }
    }

    void inisialisasii()
    {
        antrian.head=antrian.tail = -1;
    }

    void enqueue(int data)
    {
        system("cls");
        if(isEmptyy()==1)
        {
            antrian.head=antrian.tail = 0;
            antrian.data[antrian.tail] = data;
            printf("Data %d berhasil diinput!\n\n\n\n",antrian.data[antrian.tail]);
        }
        else{


        if(isFulll() == 0)
        {
            antrian.tail++;
            antrian.data[antrian.tail] = data;
            printf("data %d berhasil di input\n\n\n\n",antrian.data[antrian.tail]);
        }
        }
    }

    int dequeue()
    {
        system("cls");
        if(isEmptyy() == 1)
        {
            printf("Data masih kosong!\n");
        }
        else{
            int i;
            int e = antrian.data[antrian.head];
            printf("data %d telah dikeluarkan dari antiran\n",antrian.data[antrian.head]);
            for(i=antrian.head;i<=antrian.tail-1;i++)
            {
                antrian.data[i] = antrian.data[i+1];
            }
            antrian.tail--;
                 return e;

        }

    }

    void clear()
    {

        antrian.head = antrian.tail = -1;
        printf("Data telah di reset!\n\n\n\n");
    }

    void print()
    {
        system("cls");
        if(isEmptyy() == 0)
        {
            for(int i=antrian.head;i<=antrian.tail;i++)
            {
                printf("- %d ",antrian.data[i]);

            }
        }else{
            printf("Data masih kosongg!\n\n\n");
        }
    printf("\n\n-----------------\n");}

    int queues(){
        system("cls");
        int dt;
        inisialisasii();
     int choice;
        do{
            printf("1.Enqueue\n");
            printf("2.Dequeue\n");
            printf("3.Print Queue\n");
            printf("4.Clear Queue\n");
            printf("5.Exit\n");
            printf("Input pilihan:");
            scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                    if(isFulll() !=1)
                    {
                        system("cls");
                        printf("Masukkan data:");
                        scanf("%d",&dt);
                        enqueue(dt);
                    }else{
                        printf("data sudah penuh!\n\n\n");
                    }
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                   print();
                    printf("\n");
                    break;
                case 4:
                   clear();

                    break;
                case 5:
                    main();
                    break;
                default:
                    printf("tidak ada dalam pilihan\n");
                      printf(" enter kembali menu");
                    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                main(); }}}
                    break;
                }

        }while(choice>0 && choice <6);
        return 0;}


