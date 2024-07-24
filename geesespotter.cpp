#include "geesespotter_lib.h"
#include <iostream>

char *create_board(std::size_t x_dim, std::size_t y_dim)
{
    char* onedimention_board = new char[x_dim * y_dim]; //1D heap, 2D row major array to 1D

    for(std::size_t i = 0; i < x_dim; i++)   //2D
    {
        for(std::size_t j = 0; j < y_dim; j++)
        {
            //convert 2D to 1D --- e.g. y_dim=3 [1,0]=3=1*3 i=1, y_dim =3 [2,1]=7=2*3+1 --> i=2,y_dim=3+j
            std::size_t onedimention_index = i * x_dim + j;
            //onedimention_board[onedimention_index] = 0; //return array index 
        }
    }
    return onedimention_board;
}

void clean_board(char *board)
{

    delete[] board; //delete given board(array)
}

void print_board(char *board, std::size_t x_dim, std::size_t y_dim)
{
    for(char i = 0; i < x_dim;i++)
    {
        for(char j = 0; j < y_dim;j++)
        {
            std::size_t board_index = i * x_dim + j; //1d array, 0123456...
            char board_value = board[board_index]; //value in the char array（8 bits）

            //each field is represented with a single character 
            //print 'M' --> field is marked
            //print '*' --> fieled is hidden this function
            //field value --> display 0-9
            //field of geese is played at the end of game(won/lost)
            if(board_value & marked_mask()) // find the specific bit 
            {
                std::cout << "M";
            }
            else if(board_value & hidden_mask())
            {
                std::cout << "*";
            }
            std::cout << board_value; //display 0-9 9:1001
        }
        std::cout << "\n";
    }
}

void hide_board(char *board, std::size_t x_dim, std::size_t y_dim) //use OR operator 11=0;00=0
{
    for(std::size_t i = 0; i < x_dim * y_dim; i++)
    {
        board[i] = board[i] | hidden_mask();
    }
}

int mark(char *board, std::size_t x_dim, std::size_t y_dim, std::size_t x_loc, std::size_t y_loc)
{
    char board_field = y_loc * x_dim + x_loc; //each value
    

}

void compute_neighbours(char *board, std::size_t x_dim, std::size_t y_dim)
{
    return;
}

bool is_game_won(char *board, std::size_t x_dim, std::size_t y_dim)
{
    return false;
}

int reveal(char *board, std::size_t x_dim, std::size_t y_dim, std::size_t x_loc, std::size_t y_loc)
{
    return 0;
}
