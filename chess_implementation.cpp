#include <iostream>
#include <string>

#include "chess.h"

using namespace std;

const int BOARD_SIZE = 8;

// constructor/deconstructor
Chess::Chess() {

}
Chess::~Chess() {

}


void Chess::play() {

  // init and fill board and sidebars
  string board[BOARD_SIZE][BOARD_SIZE] =
  {{"[BR] ", "[BN] ", "[BB] ", "[BQ] ", "[BK] ", "[BB] ", "[BN] ", "[BR] "},
   {"[BP] ", "[BP] ", "[BP] ", "[BP] ", "[BP] ", "[BP] ", "[BP] ", "[BP] "},
   {"  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  "},
   {"  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  "},
   {"  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  "},
   {"  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  ", "  .  "},
   {"[WP] ", "[WP] ", "[WP] ", "[WP] ", "[WP] ", "[WP] ", "[WP] ", "[WP] "},
   {"[WR] ", "[WN] ", "[WB] ", "[WQ] ", "[WK] ", "[WB] ", "[WN] ", "[WR] "}};

  string bottom_bar[BOARD_SIZE + 1] =
  {"/", " a ", " b ", " c ", " d ", " e ", " f ", " g ", " h "};

  string side_bar[BOARD_SIZE][1] =
  {{"8"},
   {"7"},
   {"6"},
   {"5"},
   {"4"},
   {"3"},
   {"2"},
   {"1"}};

  print_board(board[BOARD_SIZE][BOARD_SIZE], bottom_bar, side_bar);

}

void Chess::print_board(string board[BOARD_SIZE][BOARD_SIZE], string bottom_bar, string side_bar) {

  for (int column = 0; column < BOARD_SIZE; column++) {

    for (int row = 0; row < BOARD_SIZE; row++) {

    }

  }

}
