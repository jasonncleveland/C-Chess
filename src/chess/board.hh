#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include <cstdio>
#include <iostream>
#include "square.hh"
#include "player.hh"

#define BOARD_SIZE 8

#define SUCCESS 0
#define INVALID_SOURCE_ERROR 1  // Source square outside valid range
#define INVALID_DESTINATION_ERROR 2  // Destination square outside valid range
#define INVALID_COLOUR_ERROR 3 // Opponents piece selected
#define INVALID_MOVE_ERROR 4  // Target piece cannot move to selected square

#define INVALID_SOURCE_PIECE_ERROR 10  // No valid piece on source square
#define OCCUPIED_DESTINATION_ERROR 11  // Target square occupied
#define BLOCKED_PATH_ERROR 12  // A piece is blocking path to destination
#define KING_ENTER_CHECK_ERROR 13 // King is attempting to move into check

#define PLAYER_IN_CHECK 20 // Player is in check but can get out of it
#define PLAYER_IN_CHECKMATE 21 // Player is in checkmate

class Board
{
    private:
        Square ***board;
        int checkCheck(Player *player, int kingX, int kingY);
        int checkPath(Piece *piece, int src_x, int src_y, int dst_x, int dst_y);
        Square *findKing(char colour);
    public:
        Board();
        void initializePieces();
        void movePiece(Player *player, char *move, int *status);
        void checkCheckMate(Player *player, int *status);
        void print();
};

#endif // CHESS_BOARD_H
