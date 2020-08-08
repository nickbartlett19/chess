#ifndef CHESS_H
#define CHESS_H

#include <string>

class Chess {

  public:

    Chess();
    ~Chess();
    void play();

  private:

    // board functions
    void print_board(std::string[][] board, std::string bottom_bar, std::string top_bar);

};

#endif
