#include <stdio.h>
#include <ctype.h>

int main()
{
    char question[][100]={"Whose century did Hardik Pandya steal by scoring a 6?", "Whose half-century did Hardik Pandya steal by scoring a 6?", "Who is Hardik Pandya?"};

    char answer[][100]={"A. Shubhman Gill", "B. KL Rahul", "C. Virat Kohli", "D. Rohit Sharma", "A. Tilak Varma", "B. Ruturaj Gaikwad", "C. Jasprit Bumrah", "D. Rinku Singh", "A. Yrat Kohli", "B. Good question", "C. Babar", "D. IshowSpeed's Indian version"};

    char answers[]={'B','A','B'};

    int numberofq=sizeof(question)/sizeof(question[0]);
    char guess;
    int score=0;
    printf("WELCOME TO HARDIK PANDYA QUIZ\n");

    for (int i=0;i<numberofq;i++)
    { 
        printf("%s\n", question[i]);
        for (int j=(i*4);j<(i*4)+4;j++)
        {
            printf("%s\n", answer[j]);
        }
        printf("Enter your answer: ");
        scanf(" %c", &guess);
        guess = toupper(guess);
        if(guess==answers[i])
        {
            printf("CORRECT!!!\n");
            score++;
        }
        else
        {
            printf("WRONG!!!\n");
        }
    }
    printf("FINAL SCORE: %d/%d\n", score, numberofq);
    if(score==2||score==3)
    {
        printf("OOF HARDIK's FANBOY IS HERE\n");
    }
    else
    {
        printf("GG\n");
    }
}