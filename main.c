#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\t\t\t\t\t.......WELCOME TO KAUN BANEGA CROREPATI.......\n");
    printf("\nTHE GAME RULES ARE AS FOLLOWS\n");
    printf("#Set of ten questions.There are three levels.Crossing each level will gurantee a minimum amount of money you will win \n");
    printf("\n\n\t\tLETS GET STARTED!!\n");
    int i;
    for(i=1;i<=10;i++)
    {   int ch=0;
        switch(i)
        {
        case 1:
            {
                printf("QUESTION 1:\n Who is the prime minister of India?\n 1.Rahul Gandhi \t 2.Narendra Modi \t \n 3.Yogi AdityaNath\t 4.Manmohan Singh\n");
                scanf("%d",&ch);
                if(ch==2)
                {
                   printf("\n Correct Answer !! You won thousand rupees!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    i=16;
                    exit(0);
                }
            }
        case 2:
            {
                printf("\nQUESTION 2:\n Who is the founder of Facebook ?\n 1. Mark Zuckerberg \t 2.Jeff Bezos \n 3.Bill Gates \t 4.Amitabh Bachchan\n");
                scanf("\n%d",&ch);
                if(ch==1)
                 {
                   printf("\n Correct Answer !! You won two thousand rupees!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    i=16;
                    exit(0);
                }
            }
        case 3:
            {
                printf("\nQUESTION 3:\n What does WHO stands for?\n 1. World Horse Organisation \t 2. World Health Organisation \n 3.White House Organisation \t 4.World House Orientations\n");
                scanf("%d",&ch);
                if(ch==2)
                 {
                   printf("\n Correct Answer !! You won five thousand rupees!!");
                   printf("\n CONGRATULATIONS!! You cleared LEVEL 1 ! Minimum Prize-- Rs. 5000");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    i=16;
                    exit(0);
                }

            }
        case 4:
            {
                printf("\nQUESTION 4:\nWhat is the capital of India?\n 1.Mumbai \t 2.Hyderabad\n  3.New Delhi \t4.Kolkata\n");
                scanf("%d",&ch);
                if(ch==3)
                 {
                   printf("\n Correct Answer !! You won twenty thousand rupees!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    printf("\n GAME OVER!! YOU WON 5000 !");
                    i=16;
                    exit(0);
                }

            }
        case 5:
            {
                printf("\nQUESTION 5:\nWho is captain of Indian Cricket Team?\n 1.Virat Kohli \t 2.MS Dhoni\n  3.Rohit Sharma \t4.Hardik Pandya\n");
                scanf("%d",&ch);
                if(ch==1)
                 {
                   printf("\n Correct Answer !! You won fifty thousand rupees!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    printf("\n GAME OVER!! YOU WON 5000 !");
                    i=16;
                    exit(0);
                }
            }
        case 6:
            {
                printf("\nQUESTION 6:\nWhat is the capital of England?\n 1.Mumbai \t 2.London\n  3.New York \t4.Tokyo\n");
                scanf("%d",&ch);
                if(ch==2)
                 {
                   printf("\n Correct Answer !! You won one lakh rupees!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    printf("\n GAME OVER!! YOU WON 5000 !");
                    i=16;
                    exit(0);
                }
            }
        case 7:
            {
                printf("\nQUESTION 7:\nHow many union territories India have ?\n 1.Nine \t 2.Seven\n 3.Five \t4.Eleven\n");
                scanf("%d",&ch);
                if(ch==2)
                 {
                   printf("\n Correct Answer !! You won ten lacs rupees!!");
                   printf("\n CONGRATULATIONS !!! LEVEL 2 CLEARED !\n MINIMUM PRIZE - Rs. 10 Lakhs");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    printf("\n GAME OVER!! YOU WON 5000 !");
                    i=16;
                    exit(0);
                }
            }
        case 8:
            {
                printf("\nQUESTION 8:\nWhat is the full form of CPU?\n 1.Core Parliament Union\t 2.Central Printing Unit\n  3.Central Processing Unit \t4.NOTA\n");
                scanf("%d",&ch);
                if(ch==3)
                 {
                   printf("\n Correct Answer !! You won twenty five lakhs rupees!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    printf("\n GAME OVER!! YOU WON TEN LAKHS!");
                    i=16;
                    exit(0);
                }
            }
        case 9:
            {
                printf("\nQUESTION 9:\nWhat is the first five alphabet of keyboard?\n 1.ASDFG \t 2.ZXCVB\n  3.ABCDE \t4.QWERT\n");
                scanf("%d",&ch);
                if(ch==4)
                 {
                   printf("\n Correct Answer !! You won fifty lakhs rupees!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    printf("\n GAME OVER!! YOU WON TEN LAKHS !");
                    i=16;
                    exit(0);
                }
            }
        case 10:
            {
                printf("\nQUESTION 10:\nWhat is the number of question you answered today?\n 1.10 \t 2.9\n 3.11 \t4.NOTA\n");
                scanf("%d",&ch);
                if(ch==1)
                 {
                   printf("\n Correct Answer !! You won ONE CRORE rupees!!\nYOU ARE NOW A MILLIONARE !!!");
                   break;
                }
                else
                {
                    printf("\nWrong Answer !! Better Luck , Next Time !");
                    printf("\n GAME OVER!! YOU WON TEN LAKHS !");
                    i=16;
                    exit(0);
                }
            }
        }

    }

}
