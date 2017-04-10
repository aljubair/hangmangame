#include<stdio.h>
#include<string.h>


///Global V.A
char word[][16]= {"compute",
                  "abolish",
                  "abdomen",
                  "acquire",
                  "acrobat",
                  "acronym",
                  "advisor",
                  "aerator",
                  "agonize",
                  "ailment",
                  "alchemy",
                  "alfredo",
                  "alimony"
                 };



///Title function
void game_name()
{
    printf("\t\t\t\t\t\t\t<< HANGMAN GAME >>");
}



///Description function
int description()
{
    char choose;
    printf("\n\n\n\t\t\tThe Hangman game is a word guessing game.First you have to guess a word.If your guess is right,\n\t\t\t then you have to give the characters one after one.If you guess wrong letter more than two times,\n\t\t\t you'll lose.Otherwise you win.");
    //printf("\n\n\t\t\tand the user guesses characters that may or may not be in the word.");
    printf("\n\n\nPRESS D ,I ,P OR E: ");
    choose=getche();
    //system("cls");

    if(choose=='D'||choose=='d')
    {
        description();
    }
    else if(choose=='I'||choose=='i')
    {
        instruction();
    }
    else if(choose=='P'||choose=='p')
    {
        play();
    }
    else if(choose=='E'||choose=='e')
    {
        system("cls");
        printf("\n\n\n\n\t\t\t\t\t\tPRESS ENTER FOR EXIT...THANK YOU... :) ");
        getch();
        return 0;
    }
    else
    {
        printf("\n\nInvalid Input");
        choice();

    }
}





///Instruction function

int instruction()
{
    char choose;
    printf("\n\n\n\t\t\tAt first,Guess the first letter of a word.If you see in display that you are right,\n\t\t\tthen input the other letters one after one.While giving letters you should notice the\n\t\t\tdisplay where the letter is used.");
    //printf("\n\n\t\t\tand the user guesses characters that may or may not be in the word.");
    printf("\n\n\nPRESS D ,I ,P OR E: ");
    choose=getche();
    //system("cls");

    if(choose=='D'||choose=='d')
    {
        description();
    }
    else if(choose=='I'||choose=='i')
    {
        instruction();
    }
    else if(choose=='P'||choose=='p')
    {
        play();
    }
    else if(choose=='E'||choose=='e')
    {
        system("cls");
        printf("\n\n\n\n\t\t\t\t\t\tPRESS ENTER FOR EXIT...THANK YOU... :) ");
        getch();
        return 0;
    }
    else
    {
        printf("\n\nInvalid Input");
        choice();

    }
}




///Game Loop Function

char loop(char user)
{

    srand(time(NULL));
    int loop, game_count=0,length;
    int fullrand=rand() % 13;
    length=strlen(word[fullrand]);
    int a,b,c,d,e,f,g;
    a=b=c=d=e=f=g=0;
    /// printf("\t\tLength=%d\nWord=%s ",length,word[fullrand]);

    for(loop=0; loop<length-1; loop++)
    {
        if(user==word[fullrand][0])
        {
            a++;
            if(a>=2)
            {
                printf("\n%c is Already in the Word",user);
                game_count++;
                printf("\n(Guess) Enter a letter in word ******* >: ",user);
                user=getche();

            }
            else
            {
                printf("\n(Guess) Enter a letter in word %c****** >: ",user);
                user=getche();

            }
        }
        else if(user==word[fullrand][1])
        {
            b++;
            if(b>=2)
            {
                printf("\n%c is Already in the Word",user);
                game_count++;
                printf("\n(Guess) Enter a letter in word ******* >: ",user);
                user=getche();

            }
            else
            {
                printf("\n(Guess) Enter a letter in word *%c***** >: ",user);
                user=getche();

            }
        }
        else if(user==word[fullrand][2])
        {
            c++;
            if(c>=2)
            {
                printf("\n%c is Already in the Word",user);
                game_count++;
                printf("\n(Guess) Enter a letter in word ******* >: ",user);
                user=getche();

            }
            else
            {
                printf("\n(Guess) Enter a letter in word **%c**** >: ",user);
                user=getche();
            }
        }
        else if(user==word[fullrand][3])
        {
            d++;
            if(d>=2)
            {
                printf("\n%c is Already in the Word",user);
                game_count++;
                printf("\n(Guess) Enter a letter in word ******* >: ",user);
                user=getche();

            }
            else
            {
                printf("\n(Guess) Enter a letter in word ***%c*** >: ",user);
                user=getche();
            }
        }
        else if(user==word[fullrand][4])
        {
            e++;
            if(e>=2)
            {
                printf("\n%c is Already in the Word",user);
                game_count++;
                printf("\n(Guess) Enter a letter in word ******* >: ",user);
                user=getche();

            }
            else
            {
                printf("\n(Guess) Enter a letter in word ****%c** >: ",user);
                user=getche();
            }
        }
        else if(user==word[fullrand][5])
        {
            f++;
            if(f>=2)
            {
                printf("\n%c is Already in the Word",user);
                game_count++;
                printf("\n(Guess) Enter a letter in word ******* >: ",user);
                user=getche();

            }
            else
            {
                printf("\n(Guess) Enter a letter in word *****%c* >: ",user);
                user=getche();
            }

        }
        else if(user==word[fullrand][6])
        {
            g++;
            if(g>=2)
            {
                printf("\n%c is Already in the Word",user);
                game_count++;
                printf("\n(Guess) Enter a letter in word ******* >: ",user);
                user=getche();

            }
            else
            {
                printf("\n(Guess) Enter a letter in word ******%c >: ",user);
                user=getche();
            }
        }
        else
        {
            printf("\n%c is not in the word",user);
            game_count++;
            if(game_count==10)
            {
                printf("You Lose");
            }
            printf("\n(Guess) Enter a letter in word ******* >: ",user);
            user=getche();
        }
    }
    if(game_count<3)
    {
        printf("\n\n\n\t\t\t\tYou Win!!! :)");
    }
    else
    {
        printf("\n\n\n\t\t\t\tYou Lose!!! :(");
    }
    printf("\n\n\nThe Word is %s . You Missed %d Times.",word[fullrand],game_count);


}




///Game Menu function
char Menu()
{
    char menu;
    game_name();
    printf("\n\nDo You Want to go Main Menu...PRESS [M]: ");
    menu=getche();

    system("cls");
    if(menu=='M'||menu=='m')
    {
        choice();
    }
    else
    {
        printf("\nInvalid input");
        system("cls");
        Menu();
    }
}



///Game Again function

char again()
{
    char want;
    char user;
    char menu;

    printf("\n\n\nDo You Want to Play Again Yes='y' OR No='n' : ");
    want=getche();
    system("cls");

    if(want=='y'||want=='Y')
    {
        game_name();
        printf("\n\n\n(Guess) Enter a letter in word ******* >: ");
        user=getche();


        loop(user);


        again();

    }


    else if(want=='n'||want=='N')

    {

        Menu();


    }



    else
    {
        game_name();
        printf("\n\n\n\n\t\t\t\t\t\tInvalid Input");
        again();


    }



}


///Game Play Function

int play()
{
    char user;
    system("cls");
    game_name();
    printf("\n\n\n(Guess) Enter a letter in word ******* >: ");
    user=getche();


    loop(user);
    again();

}







///Menu Choice Function
int choice()
{
    char choose;
    // game_name();
    printf("\n\n\n\n\t\t\tMAIN MENU [M]: ");
    printf("\n\n\n\t\t\t\t[D] DESCRIPTION  ");
    printf("\n\n\t\t\t\t[I] INSTRUCTION ");
    printf("\n\n\t\t\t\t[P] PLAY NOW ");
    printf("\n\n\t\t\t\t[E] EXIT ");
    printf("\n\n\nPRESS D ,I ,P OR E: ");
    choose=getche();


    if(choose=='D'||choose=='d')
    {
        description();
    }
    else if(choose=='I'||choose=='i')
    {
        instruction();
    }
    else if(choose=='P'||choose=='p')
    {
        system("cls");
        play();
    }
    else if(choose=='E'||choose=='e')
    {
        system("cls");
        printf("\n\n\n\n\t\t\t\t\t\tPRESS ENTER FOR EXIT...THANK YOU... :) ");
        printf("\n\n\n\n\t\t\t\t\t\t\tCODING WORLD,2015\n ");
        getch();

        return 0;
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t\t\tINVALID INPUT");

        choice();


    }



}


void Name()
{

    char ch;
    printf("\n\n\n\n\t\t\t\tPRESS 'c' FOR Continue: ");
    ch=getche();
    system("cls");
    if(ch=='c'||ch=='C')
    {
     game_name();


     choice();

    }
    else {
        printf("\n\n\t\t\t\tINVALID CHARACTER ");
        Name();
    }

}



///Main Function
int main()
{

    system("Color 17");

    char name[50];
    printf("\t\t\t\t\t\t*******WELCOME TO OUR GAME******* ");
    printf("\n\n\t\t\t\tPLEASE ENTER YOUR NAME: ");
    gets(name);
    printf("\n\n\n\t\t\t\tHello %s  , ENJOY THE GAME... :)",name);

    Name();


    return 0;

}



