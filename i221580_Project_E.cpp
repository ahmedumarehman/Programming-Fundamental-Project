
/*Ahmed Umar Rehman
22i-1580 PF Lab Section E
BS-CYS*/


#include<iostream>
using namespace std;


void display_board(char board[][8])  // function of diplaying board
{
    cout << "  1 2 3 4 5 6 7 8" << endl;
    for(int i=0; i<8; i++)
    {
        cout << i+1 << " ";
        for(int j=0; j<8; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void menu_board()
{

char dash='-';
char board[8][8]={                           
    
    {'-','-','-','-','K','-','-','-',},
    {'-','-','-','-','-','-','-','-',},
    {'-','-','-','-','-','-','-','-',},
    {'-','-','-','-','-','-','-','-',},
    {'-','-','-','-','-','-','-','-',},
    {'-','-','-','-','-','-','-','-',},
    {'-','-','-','-','-','-','-','-',},
    {'R','G','B','Q','Q','B','G','R',},
    
    
    
    
    
    
};


cout<<"  1 2 3 4 5 6 7 8\n";

for(int i=0;i<8;i++)
{   
    cout<<i+1<<" ";
    for(int j=0;j<8;j++)
    {
        
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
}



}

void queen(int a, int b) // a=5 b=3                 //function of queen
{
    const int row = 8;
    const int col = 8;

    char QUEEN = 'Q';
    char arr[row][col];

/*For Displaying board using for loop*/

cout<<" ";
    for(int i=0;i<col;i++)
    {
        
        cout<<i+1<<" ";
    }


cout<<"\n";


    for(int i=0; i<row; i++)
    {   
        cout<<i+1<<" ";
        for(int j=0; j<col; j++)
        {
            if(i==a-1 && j==b-1) {
                arr[i][j] = QUEEN;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    cout<<"\n\n";
}
void possible_moves_of_queen(int a,int b)           //function of possible moves of queen

{


    const int row = 8;
    const int col = 8;

    char QUEEN = 'Q';
    char arr[row][col];



cout<<"The Possible Moves of Queen Are : \n";

      for(int i=1;i<=8;i++)
     {
         cout<<" "<<i;
     }
     
     cout<<"\n";
            for(int i=0; i<row; i++)
    {   
        cout<<i+1<<" ";
        for(int j=0; j<col; j++)
        {
            if(                             //checking possibilities of movements
               i==a-4 && j==b-1 ||
               i==a-3 && j==b-1 ||
               i==a-2 && j==b-1 ||
               i==a+0 && j==b-1 ||
               i==a+1 && j==b-1 ||
               i==a+2 && j==b-1 ||
               i==a+3 && j==b-1 ||
               i==a-1 && j==b-2 ||
               i==a-1 && j==b-3 ||//arr[4][4]
               i==a-1 && j==b-2 ||
               i==a-1 && j==b+0 ||
               i==a-1 && j==b+1 ||
               i==a-1 && j==b+2 ||
               i==a-1 && j==b+3 ||
               i==a-4 && j==b-4 ||
               i==a-3 && j==b-3 ||
               i==a-2 && j==b-2 ||
               i==a+0 && j==b+0 ||
               i==a+1 && j==b+1 ||
               i==a+2 && j==b+2 ||
               i==a+3 && j==b+3 ||
               i==a-2 && j==b+2 ||
               i==a-3 && j==b+1 ||
               i==a-2 && j==b+0 ||
               i==a+0 && j==b-2 ||
               i==a+1 && j==b-3 ||
               i==a+2 && j==b-4   
                
               
               
               
                 ) 
               
               {
                
                //cout<<"*";
                arr[i][j] = QUEEN;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    
}



void bishop(int a, int b) // a=5 b=3            //function of bishop
{
    const int row = 8;
    const int col = 8;

    char BISHOP = 'B';
    char board[row][col];

    cout<<"  1 2 3 4 5 6 7 8"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            board[i][j]='-';
        }
        board[a-1][b-1]='B';
        display_board(board);
    }


    /*for(int i=0; i<row; i++)
    {

        cout<<i+1<<" ";

        for(int j=0; j<col; j++)        // Displaying pieces of bishop
        {
            if(i==a-1 && j==b-1) {
                board[i][j] = BISHOP;
            }
            else {
                board[i][j] = '-';
            }
            cout << board[i][j] << " ";
        }
        cout << endl;
    }*/

}
void possible_moves_of_bishop(int a,int b)      //function of possible moves of bishop
{


    const int row = 8;
    const int col = 8;

    char BISHOP = 'B';
    char arr[row][col];





cout<<"The Possible Moves Of Bishop Are : \n\n";

 for(int i=1;i<=8;i++)
     {
         cout<<" "<<i;
     }
     
     cout<<"\n";
            for(int i=0; i<row; i++)
    {   
        cout<<i+1<<" ";
        for(int j=0; j<col; j++)
        {
            if(i==a-4 && j==b-4 ||      //checking possibilities of movements
               i==a-3 && j==b-3 ||
               i==a-2 && j==b-2 ||
               i==a-1 && j==b-1 ||
               i==a+0 && j==b+0 ||
               i==a+1 && j==b+1 ||
               i==a+2 && j==b+2 ||
               i==a+3 && j==b+3 ||
               i==a-4 && j==b+2 ||
               i==a-3 && j==b+1 ||
               i==a-2 && j==b+0 ||
               i==a+0 && j==b-2 ||
               i==a+1 && j==b-3 ||
               i==a+2 && j==b-4 ) 
               
               {
                
                //cout<<"*";
                arr[i][j] = BISHOP;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }




}



void rock(int a, int b) // a=5 b=3              //function of rock
{
    const int row = 8;
    const int col = 8;

    char ROCK = 'R';
    char arr[row][col];


cout<<" ";
    for(int i=0;i<col;i++)
    {
        
        cout<<i+1<<" ";
    }



    for(int i=0; i<row; i++)
    {

        cout<<i+1<<" ";

        for(int j=0; j<col; j++)
        {
            if(i==a-1 && j==b-1) {
                arr[i][j] = ROCK;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

cout<<"\n\n";
}
void possible_moves_of_rock (int a,int b)       //function of possible moves of rock
{

    const int row = 8;
    const int col = 8;

    char ROCK = 'R';
    char arr[row][col];




cout<<"Possible Moves Of Rock are "<<endl<<endl;

     for(int i=1;i<=8;i++)
     {
         cout<<" "<<i;
     }
     
     cout<<"\n";
            for(int i=0; i<row; i++)
    {   
        cout<<i+1<<" ";
        for(int j=0; j<col; j++)
        {
            if(
                
               i==a-4 && j==b-1 ||      //checking possibilities of movements
               i==a-3 && j==b-1 ||
               i==a-2 && j==b-1 ||
               i==a-1 && j==b-1 ||
               i==a+0 && j==b-1 ||
               i==a+1 && j==b-1 ||
               i==a+2 && j==b-1 ||
               i==a+3 && j==b-1 ||  //arr[4][4]
               i==a-1 && j==b-4 ||
               i==a-1 && j==b-3 ||
               i==a-1 && j==b-2 ||
               i==a-1 && j==b-1 ||
               i==a-1 && j==b+0 ||
               i==a-1 && j==b+1 ||
               i==a-1 && j==b+2 ||
               i==a-1 && j==b+3  
                 ) 
               
               {
                
                //cout<<"*";
                arr[i][j] = ROCK;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


 




}



void knight(int a, int b) // a=5 b=3            //function of knight
{
    const int row = 8;
    const int col = 8;

    char KNIGHT = 'G';
    char arr[row][col];

cout<<" ";
    for(int i=0;i<col;i++)
    {
        
        cout<<i+1<<" ";
    }




    for(int i=0; i<row; i++)
    {   

        cout<<i+1<<" ";

        for(int j=0; j<col; j++)
        {
            if(i==a-1 && j==b-1) {
                arr[i][j] = KNIGHT;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
void possible_moves_of_knight(int a,int b)      //function of possible moves of knight

{


    const int row = 8;
    const int col = 8;

    char KNIGHT = 'G';
    char arr[row][col];



cout<<"The Possible Moves Of Knight Are : \n\n";

 for(int i=1;i<=8;i++)
     {
         cout<<" "<<i;
     }
     
     cout<<"\n";
            for(int i=0; i<row; i++)
    {   
        cout<<i+1<<" ";
        for(int j=0; j<col; j++)
        {
            if(
                
               i==a-3 && j==b-2 ||
               i==a-3 && j==b+0 ||
               i==a-2 && j==b-3 ||
               i==a-2 && j==b+1 ||
               i==a+0 && j==b-3 ||
               i==a+0 && j==b+1 ||
               i==a+1 && j==b-2 ||
               i==a+1 && j==b+0   //arr[4][4]
               
               
               
               
                 ) 
               
               {
                
                //cout<<"*";
                arr[i][j] = KNIGHT;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }





}



void king(int a,int b) // a=5 b=3               //function of king
{
    cout<<"YOUR TURN\n\n";

    
    const int row = 8;
    const int col = 8;

    char KING = 'K';
    char board[row][col];

    cout<<"  1 2 3 4 5 6 7 8"<<endl;


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            board[i][j]='-';
        }
        board[a-1][b-1]=KING;
        display_board(board);
    }



cout<<"\n";

//void bishop(int a, int b);

/*cout<<"\n\n";
    for(int i=0; i<row; i++)
    {   
        cout<<i+1<<" ";
        for(int j=0; j<col; j++)
        {
            if(i==a-1 && j==b-1) {
                arr[i][j] = KING;
            }
            else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/
}
void possible_moves_of_king(int a,int b)        //function of possible moves of king
{


    const int row = 8;
    const int col = 8;

    char KING = 'K';
    char arr[row][col];



cout<<"\n\n";

cout<<"The Possible Moves Of King Are : \n\n";


for(int i=1;i<=8;i++)
{
    cout<<" "<<i;
}

cout<<"\n";

for(int i=0;i<row;i++)
{
    cout<<i+1<<" ";
    for(int j=0;j<col;j++)
    {
        if  (  i==a-2 && j==b-2 ||  //king[3][3];
               i==a-2 && j==b-1 ||
               i==a-2 && j==b+0 ||
               i==a-1 && j==b-2 ||
               i==a-1 && j==b+0 ||
               i==a+0 && j==b-2 ||
               i==a+0 && j==b-1 ||
               i==a+0 && j==b+0 
               
               ) 
            {
             arr[i][j] = KING; 
            }

       else {
                arr[i][j] = '-';
            }
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}









int main()


{

char board[8][8];       //array of board







cout<<"\t\t\tWELCOME TO CHESS BOARD GAME\n\n";

string name1;


cout<<"Enter First Name : ";
cin>>name1;


string name2;

cout<<"Enter Second Name : ";
cin>>name2;

cout<<endl<<endl;

cout<<"Player 1 Name : "<<name1<<endl;
cout<<"Player 2 Name : "<<name2<<endl;

int option;

    
    cout<<"\t\t______________RULES OF GAME______________\n\n";



menu_board();


    cout<<"1) "<<name1<<" Will Choose Only 4 Pieces ;\n";
    cout<<"1.Queen\n2.Bishop\n3.Rock\n4.Knight\n\n";
    
    cout<<"2) "<<name2<<"'s Job Is To Save The King From Opponent's Moves \n\n";
    
    cout<<"3) The Game Will Continue until "<<name1<<" Enters EXIT Button\n\n";

    do //while loop start
    {   
        
        cout<<name1<<"'s Turn : \n\n";
        
        cout<<"Choose Any Of Pieces[1-5]\n";
        cout<<"[1]. Queen\n[2]. Bishop\n[3]. Rock\n[4]. Knight\n[5]. Exit\n";
        cin>>option;

        while(option<0||option>5)
        {
            cout<<"Enter Between (1-5) : ";
            cin>>option;
        }

       
int KING_ROW;
int KING_COL;
 
        
    
switch (option)
{

/*==============================================================================================================================================================*/

 
 
    case 1: //for queen

    int QUEEN_ROW;
    int QUEEN_COL;


    
    cout<<"You Have Selected Queen\nIt will be presented as Q\n\n";


    cout<<"Row Of Queen : ";
    cin>>QUEEN_ROW;


/*Validations*/

while(QUEEN_ROW<0||QUEEN_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>QUEEN_ROW;
}



    cout<<"Col Of Queeb : ";
    cin>>QUEEN_COL;

/*Validations*/
while(QUEEN_COL<0 || QUEEN_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>QUEEN_COL;
}



cout<<name2<<"'s Turn : \n\n";

    cout<<"Row of King : ";
    cin>>KING_ROW;


/*Validations*/
while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}



    cout<<"Col of King : ";
    cin>>KING_COL;

/*Validations*/
while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}

/*Validations*/
while(QUEEN_ROW && QUEEN_COL == KING_ROW && KING_COL)
{
    
    
    cout<<"I am Sorry, You Have to Enter Other Than "<<QUEEN_ROW<<" Row "<<" & "<<QUEEN_COL<<" Column"<<endl;
    cout<<"\nEnter Again : \n\n";

    
    
    
    cout<<"Row of King : ";
    cin>>KING_ROW;


while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}
    
    
    cout<<"Col of King : ";
    cin>>KING_COL;



while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}

}



    char board[8][8];

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            board[i][j]='-';
        }

    }

    board[QUEEN_ROW-1][QUEEN_COL-1]='B';  /*Displaying queen on board, subtracting one number from input number e.g row=3 col=3 then board[3-1][3-1]*/
    
    board[KING_ROW-1][KING_COL-1]='K';

    display_board(board);

cout<<endl<<endl;

possible_moves_of_queen(KING_ROW,KING_COL);

cout<<"\n";

possible_moves_of_king(KING_ROW,KING_COL);

break;



/*==============================================================================================================================================================*/



/*==============================================================================================================================================================*/

    case 2:                 //bishop
    
    int BISHOP_ROW;
    int BISHOP_COL;


   
    cout<<"You Have Selected Bishop\nIt will be presented as B\n\n";


    cout<<"Row of bishop : ";
    cin>>BISHOP_ROW;


while(BISHOP_ROW<0 || BISHOP_ROW>8)
{
    cout<<"WRNOG INPUT || Enter Between (1-8) : ";
    cin>>BISHOP_ROW;
}


    cout<<"Col of bishop : ";
    cin>>BISHOP_COL;

while(BISHOP_COL<0 || BISHOP_COL>8)
{
    cout<<"WRNOG INPUT || Enter Between (1-8) : ";
    cin>>BISHOP_COL;
}


    cout<<name2<<"'s Turn : \n\n";

    cout<<"Row of King : ";
    cin>>KING_ROW;

while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}
    
    
    cout<<"Col of King : ";
    cin>>KING_COL;



while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}


while(BISHOP_ROW && BISHOP_COL == KING_ROW && KING_COL)
{
    
    
    cout<<"I am Sorry, You Have to Enter Other Than "<<BISHOP_ROW<<" Row "<<" & "<<BISHOP_COL<<" Column"<<endl;
    cout<<"\nEnter Again : \n\n";

    
    
    
    cout<<"Row of King : ";
    cin>>KING_ROW;


while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}
    
    
    cout<<"Col of King : ";
    cin>>KING_COL;



while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}

}

    //char board[8][8];

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            board[i][j]='-';
        }

    }

    board[BISHOP_ROW-1][BISHOP_COL-1]='B';
    board[KING_ROW-1][KING_COL-1]='K';

    display_board(board);

cout<<endl<<endl;

possible_moves_of_bishop(BISHOP_ROW,BISHOP_COL);/*Displaying bishop on board, subtracting one number from input number e.g row=3 col=3 then board[3-1][3-1]*/

cout<<"\n";

possible_moves_of_king(KING_ROW,KING_COL);

    break;


/*==============================================================================================================================================================*/



/*==============================================================================================================================================================*/


    case 3:         //rock

    int ROCK_ROW;
    int ROCK_COL;


    
    cout<<"You Have Selected Rock\nIt will be presented as R\n\n";


    cout<<"Row of rock : ";
    cin>>ROCK_ROW;


while(ROCK_ROW<0 || ROCK_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>ROCK_ROW;
}

    cout<<"Col of rock : ";
    cin>>ROCK_COL;


while(ROCK_COL<0 || ROCK_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>ROCK_COL;
}


cout<<name2<<"'s Turn : \n\n";

    cout<<"Row of King : ";
    cin>>KING_ROW;



while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}





    cout<<"Col of King : ";
    cin>>KING_COL;



while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}


while(ROCK_ROW && ROCK_COL == KING_ROW && KING_COL)
{
    
    
    cout<<"I am Sorry, You Have to Enter Other Than "<<ROCK_ROW<<" Row "<<" & "<<ROCK_COL<<" Column"<<endl;
    cout<<"\nEnter Again : \n\n";

    
    
    
    cout<<"Row of King : ";
    cin>>KING_ROW;


while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}
    
    
    cout<<"Col of King : ";
    cin>>KING_COL;



while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}

}



    

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            board[i][j]='-';
        }

    }

    board[ROCK_ROW-1][ROCK_COL-1]='R';/*Displaying rock on board, subtracting one number from input number e.g row=3 col=3 then board[3-1][3-1]*/
    board[KING_ROW-1][KING_COL-1]='K';

    display_board(board);

cout<<endl<<endl;

possible_moves_of_rock(ROCK_ROW,ROCK_COL);

cout<<"\n";

possible_moves_of_king(KING_ROW,KING_COL);


break;


/*==============================================================================================================================================================*/



/*==============================================================================================================================================================*/

 
 
 
        case 4:     //for knight




    int KNIGHT_ROW;
    int KNIGHT_COL;


    
    cout<<"You Have Selected Knight\nIt will be presented as K\n\n";


    cout<<"Row of rock : ";
    cin>>KNIGHT_ROW;


while(KNIGHT_ROW<0 || KNIGHT_ROW>8)

{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KNIGHT_ROW;
}

    cout<<"Col of rock : ";
    cin>>KNIGHT_COL;


while(KNIGHT_COL<0 || KNIGHT_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KNIGHT_COL;
}


cout<<name2<<"'s Turn : \n\n";

    cout<<"Row of King : ";
    cin>>KING_ROW;


   
while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}



    cout<<"Col of King : ";
    cin>>KING_COL;

   
while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}


while(KNIGHT_ROW && KNIGHT_COL == KING_ROW && KING_COL)
{
    
    
    cout<<"I am Sorry, You Have to Enter Other Than "<<KNIGHT_ROW<<" Row "<<" & "<<KNIGHT_COL<<" Column"<<endl;
    cout<<"\nEnter Again : \n\n";

    
    
    
    cout<<"Row of King : ";
    cin>>KING_ROW;


while(KING_ROW<0 || KING_ROW>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_ROW;
}
    
    
    cout<<"Col of King : ";
    cin>>KING_COL;



while(KING_COL<0 || KING_COL>8)
{
    cout<<"WRONG INPUT || Enter Between (1-8) : ";
    cin>>KING_COL;
}

}


    

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            board[i][j]='-';
        }

    }

    board[KNIGHT_ROW-1][KNIGHT_COL-1]='G';  /*Displaying knight on board, subtracting one number from input number e.g row=3 col=3 then board[3-1][3-1]*/
    
    board[KING_ROW-1][KING_COL-1]='K';

    display_board(board);

cout<<endl<<endl;

possible_moves_of_knight(ROCK_ROW,ROCK_COL);

cout<<"\n";

possible_moves_of_king(KING_ROW,KING_COL);


        break;



/*==============================================================================================================================================================*/
}

}

    


    
while(option!=5); //while loop end 

}//end of program

