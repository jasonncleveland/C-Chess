#include "piece.hh"

Piece::Piece()
{
    
}

Piece::Piece(Colour c, char n, int v)
{
    colour = c;
    name = n;
    value = v;
}

int Rook::checkMove(int src_x, int src_y, int dst_x, int dst_y)
{
    /**
     * Like most pieces, the rook cannot jump over other pieces. 
     * However, it can land on a square occupied by an opponent’s piece, 
     * removing that piece from the board. 
     * This is known as capturing a piece. All pieces are capable of capturing in this manner.
     * 
     * In the diagram above, the rook can move to any of the squares marked with a dot. 
     * It can also capture the black bishop on g4 by moving to that square. 
     * It may not move onto or through the squares occupied by the white pawns. 
     * 
     * Rooks participate in the King's special ability known as ​castling.
     */

    /**
     * A few rules in chess allow pieces to go beyond their basic movements.
     * 
     * The most common of these rules is castling, a move that is normally used to improve the king's safety. 
     * Castling is the only move that allows two pieces -- the king and a rook -- to move at the same time.
     * 
     * You can only castle if all of the following conditions are present:
     * 
     * Neither the king nor the rook being used has been moved yet during the game. 
     * If either piece has been moved, then castling is not allowed, even if the piece is moved back to its original square.
     * 
     * All of the squares between the king and the rook must be empty.
     * The king must not be in check, nor can castling move the king through a square where it would be in check.
     * If all of these conditions are met, you can castle by moving the king two squares toward the rook, 
     * while the rook hops over the king, landing on the square next to the king.
     * 
     * This may sound confusing, but in practice it is simple. 
     * In the diagram above, the white king and rooks are positioned where they should be before castling. 
     * The black kings and rooks are positioned properly after castling.
     * 
     * Castling kingside is more common and leaves the king on the g-file while the rook moves to the f-file. 
     * Castling queenside leaves the king on the c-file, while the rook moves to the d-file. 
     * Files, in chess, are columns designated by a letter, as displayed in the diagram.
     */
    return 0;
}

int Bishop::checkMove(int src_x, int src_y, int dst_x, int dst_y)
{
    /**
     * The bishop moves any number of squares diagonally in a straight line.
     * 
     * Notice that the bishop will always remain on squares of one color during a game. 
     * For example, the bishop in the diagram above will always stay on dark squares. 
     * At the beginning of a game, each player has both a light-squared bishop and a dark-squared bishop.
     */
    return 0;
}

int Queen::checkMove(int src_x, int src_y, int dst_x, int dst_y)
{
    /**
     * The queen combines the abilities of the rook and bishop. 
     * A queen moves any number of squares in a straight line, in any direction. 
     * This mobility makes the queen the most powerful piece in chess. Queens and rooks are known as major pieces.
     */
    return 0;
}

int King::checkMove(int src_x, int src_y, int dst_x, int dst_y)
{
    /**
     * The king moves one square in any direction.
     * 
     * The king is the most important piece in chess. 
     * When a king is attacked by another piece, it is said to be in check. 
     * If the king is in check, it must avoid capture immediately. 
     * If the capture cannot be avoided, the game is over (the king is not actually captured in chess). 
     * This is known as checkmate.
     * 
     * The king also has the ability to perform a special move known as castling.
     */
    return 0;
}

int Knight::checkMove(int src_x, int src_y, int dst_x, int dst_y)
{
    /**
     * The knight can be easily identified; in most chess sets, it looks like a horse’s head. 
     * The pattern the knight uses to move can be described in several ways. 
     * In a technical sense, the knight moves one square diagonally in any direction​ 
     * and then moves one square vertically or horizontally further away from where it started its move. 
     * This is often described as an “L-shaped” move: 
     * the knight moves two squares horizontally or vertically, and then turns at a right angle to move one more square.
     * 
     * The knight is the only piece that can jump over other pieces. 
     * However, the knight can only capture a piece if it lands on the same square as that piece – jumping over a piece doesn’t result in capture.
     */
    return 0;
}

int Pawn::checkMove(int src_x, int src_y, int dst_x, int dst_y)
{
    /**
     * The pawn is the least valuable piece in chess. 
     * It may only move forward, never backward or sideways. 
     * Pawns also have the most complicated rules for movement.
     * 
     * Pawns move one square directly forward. 
     * However, they cannot capture this way; pawns can only capture one square forward diagonally. 
     * In addition, a pawn that is still on its starting square has the option to move two squares directly forward. 
     * In the diagram above, the pawns may move to the squares marked with black dots and may capture pieces on squares marked with an X.
     * 
     * Pawns have two special abilities – promotion and en passant.
     */

    /**
     * Pawns are the weakest pieces on the board, but they have the potential to become much stronger. 
     * Should a pawn manage to make it all the way to the other end of the board, 
     * that pawn must promote to any piece its player chooses other than a king. 
     * Generally, you would promote a pawn to a queen; however, you can also promote it to a rook, knight or bishop. 
     * Promoting to something other than a queen is known as underpromotion.
     */

    /**
     * En passant -- French for "in passing" -- is probably the most confusing move for novice chess players. 
     * Players may not even know the move exists, making it the source of many arguments.
     * 
     * Before the 15th century, most people played by rules that didn't allow pawns to move two squares on their first move. 
     * When the two-square-pawn move was added to speed up the opening phase of the game, 
     * players noticed that the pawn could now sneak by an enemy pawn on an adjacent file -- 
     * something that was never possible when pawns plodded along at one square per move.
     * 
     * The solution was en passant, a move that allows a pawn that has moved two squares to be captured as though it had only moved one.
     * 
     * The diagram above illustrates how en passant works. The following conditions must all be present for an en passant capture to be legal:
     * 
     * The capturing pawn must be on its fifth rank.
     * The opponent must move a pawn two squares, 
     * landing the pawn directly alongside the capturing pawn on the fifth rank.
     * 
     * You must make the capture immediately; you only get one chance to capture en passant.
     * If all those conditions are met, an en passant capture is possible.
     * 
     * In the diagram above, Black's pawn has just moved from c7 to c5, landing it directly next to White's pawn on d5. 
     * If White wishes, he may capture Black's pawn by moving his pawn to c6, 
     * capturing the pawn as though it had only moved one square. 
     * However, if he chooses not to capture immediately, White loses this option.
     * 
     * The above diagram also shows a second example from Black's perspective.
     *  White has just moved a pawn from f2 to f4. 
     * Black's pawn on g4 may capture White's pawn by moving to f3 on the next turn. 
     * If Black chooses not to make this capture, he loses the ability to capture en passant.
     */
    return 0;
}