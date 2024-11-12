//
//  main.cpp
//  Chess Bitboard move gen
//
//  Created by Jayden W on 2024-11-09.
//

#include <bits/stdc++.h>
using namespace std;

const auto start = std::chrono::high_resolution_clock::now();
long long get_time(){ return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - start).count(); }

typedef uint64_t u64;
#define currTime cout << "Time taken: " << get_time() << " -- ns\n";
#define ifc if constexpr
#define debug(x) cout << x << "\n";

#define clz(x) __builtin_clzll(x)
#define cz(x) __builtin_popcountll(x)
#define ctz(x) __builtin_ctzll(x)

// TODO
// multi-threading
// #pragma GCC optimize("O3")


// get the least significant bit, the last bit
// returns 0101011
//               ^
constexpr u64 get_LSB(u64 x){
    return (x & 1);
}
// get the least significant active bit, returns undefined if there are none
// returns the position in the bitboard, from the back
constexpr u64 LSB_pos(u64 x){
    return (ctz(x));
}
// clear bit at desired location
// index starts from the back (right)
constexpr u64 clear_bit(u64 u, int i){
    return (u & ~(1ULL << i));
}

constexpr u64 set_bit(u64 u, int i){
    return (u | (1ULL << i));
}

constexpr u64 pop_LSB(u64 board){
    return board ^= (1ULL << ctz(board));
}

// print an individual bitboard
void printBoard(u64 bitboard){
    char onBit = 'O';
    char offBit = '.';
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cout << (((bitboard >> (i * 8 + j)) & 1) ? onBit : offBit);
        }
        cout << "\n";
    }
}

struct Board {
    
    Board (string fen){
        if (~fen.empty()){
            parseFen(fen);
        }
    }
    
    bool whiteMove = true;
    
    // 0b means create a binary number
    // ULL means unsigned long long
    const static u64 empty = 0b0ULL;
    
    /*
     printBoard(Chess.CA << 1);
     printBoard(Chess.CH >> 2);
     printBoard(Chess.R1 << 16);
     printBoard(Chess.R8 >> 8);
     */
    const static u64 CA = 0x0101010101010101;
    const static u64 CH = 0x8080808080808080;
    const static u64 R1 = 0x00000000000000FF;
    const static u64 R8 = 0xFF00000000000000;
    
    u64 wP = 0b11111111ULL << 8;
    u64 wR = 0b10000001ULL;
    u64 wQ = 0b00010000ULL;
    u64 wK = 0b00001000ULL;
    u64 wB = 0b00100100ULL;
    u64 wN = 0b01000010ULL;
    
    u64 bP = 0b11111111ULL << 48;
    u64 bR = 0b10000001ULL << 56;
    u64 bQ = 0b00010000ULL << 56;
    u64 bK = 0b00001000ULL << 56;
    u64 bB = 0b00100100ULL << 56;
    u64 bN = 0b01000010ULL << 56;
    // u64 all = wP | wN | wB | wR | wQ | wK | bP | bN | bB | bR | bQ | bK;
    
    u64 b() { return bP | bN | bB | bR | bQ | bK; }
    u64 w() { return wP | wN | wB | wR | wQ | wK; }
    
    // clear the entire board
    void clear(){wP=wN=wB=wR=wQ=wK=bP=bN=bB=bR=bQ=bK=empty;}
    
    // Parse the FEN
    void parseFen(string Fen) {
        clear();
        int counter = 0;
        for (char &checker : Fen) {
            if (isdigit(checker)) {
                counter += (checker - '0') - 1;
            } else {
                if (checker == '/') counter--;
                else if (checker == 'P') wP |= (1ULL << counter);
                else if (checker == 'Q') wQ |= (1ULL << counter);
                else if (checker == 'K') wK |= (1ULL << counter);
                else if (checker == 'R') wR |= (1ULL << counter);
                else if (checker == 'N') wN |= (1ULL << counter);
                else if (checker == 'B') wB |= (1ULL << counter);
                else if (checker == 'p') bP |= (1ULL << counter);
                else if (checker == 'q') bQ |= (1ULL << counter);
                else if (checker == 'k') bK |= (1ULL << counter);
                else if (checker == 'r') bR |= (1ULL << counter);
                else if (checker == 'n') bN |= (1ULL << counter);
                else if (checker == 'b') bB |= (1ULL << counter);
            }
            counter++;
        }
    }

    void printBoard(){
        vector<char> notation = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        const string emptyChar = "•";
        for (int i = 0; i < 8; i++){
            cout << i + 1 << " |";
            for (int j = 0; j < 8; j++){
                if ((wP >> (i * 8 + j)) & 1){cout << "P ";}
                else if (wN >> (i * 8 + j) & 1){cout << "N ";}
                else if (wB >> (i * 8 + j) & 1){cout << "B ";}
                else if (wR >> (i * 8 + j) & 1){cout << "R ";}
                else if (wQ >> (i * 8 + j) & 1){cout << "Q ";}
                else if (wK >> (i * 8 + j) & 1){cout << "K ";}
                else if (bP >> (i * 8 + j) & 1){cout << "p ";}
                else if (bN >> (i * 8 + j) & 1){cout << "n ";}
                else if (bB >> (i * 8 + j) & 1){cout << "b ";}
                else if (bR >> (i * 8 + j) & 1){cout << "r ";}
                else if (bQ >> (i * 8 + j) & 1){cout << "q ";}
                else if (bK >> (i * 8 + j) & 1){cout << "k ";}
                else {cout << emptyChar << " ";}
            }
            cout << endl;
        }
        cout << "  +---------------" << endl << "   ";
        for (int i = 0; i < 8; i++) cout << notation[i] << " ";
        cout << "\n";
    }
};

constexpr u64 availableSqs(Board &board){
    if (board.whiteMove)
        return ~board.w();
    return ~board.b();
}

// generates the pseudolegal moves
// returns a bitboard representing the pseudolegal moves
constexpr u64 rayPieces(int pieceType, int index){
    // index <x, y>
    //   ––> x
    // | y
    // v
    vector<vector<int>> directions = {
    //    0  1  2   3   4  5   6  7
        {-8, 8, -1, 1, -7, 7, -9, 9},
        {-8, 8, -1, 1,  0, 0,  0, 0},
        { 0, 0,  0, 0 ,-7, 7, -9, 9}
    };

    u64 pseudoLegal = 0ULL;
    int curRow, curCol;
    int newIndex;
    // for each direction
    for (int i = 0; i < (directions[pieceType]).size(); i++) {
        for (int j = 0; j < 8; j++) {
            newIndex = index + directions[pieceType][i] * j;
            curCol = newIndex % 8;
            curRow = newIndex / 8;
            if (curCol < 0 || curCol >= 8 || curRow < 0 || curRow >= 8)
                break;
            pseudoLegal |= (1ULL << newIndex);
            if ((curCol == 0 and (i == 2 || i == 6 || i == 5)) or
                (curCol == 7 and (i == 3 || i == 4 || i == 7)) or
                (curRow == 0 and (i == 0 || i == 4 || i == 6)) or
                (curRow == 7 and (i == 1 || i == 5 || i == 7)))
                break;
        }
    }
    return pseudoLegal ^ (1ULL << index);
}

// wrapper for rayPieces, creates every scenario of
// blocker boards, and stores the resulting pseudo legal move
// bitboard into
void generateBlockerBoards(){
    // find all the possible moves (on a blank board) where the raying piece
    // can move to. Then we calculate all the possible ways blockers can be arranged
    // in those squares. 1 0 1 1 0 0 0 0 1
    // so we ctz, then map a blocker to that value. then we can poplsb
    // then we brute force some magoc numbers
    for (int i = 0; i < 64; i++){
        u64 rays = rayPieces(0, i);
        for (int j = 0; j < cz(rays); j++){
            string binary = itob();
        }
    }
}

// returns the binary representation of an integer
string itob(u64 n){
    string answer = "";
    while (n) { answer = ((n % 2 == 1) ? '1' : '0') + answer; n /= 2;}
    return answer;
}

u64 pl_rook(Board board){
    u64 pseudoLegal = 0ULL;
    if (board.whiteMove){
        // white's move
        for (int i = 0; i < 64; i++){
            if ((board.wR >> i) & 1ULL){
                // if there is a rook at square i
                u64 pseudoLegalSquares = availableSqs(board);
                u64 rookLines = board.CA << (i % 8) | board.R1 << (i / 8) * 8;
                pseudoLegal |= (rookLines & pseudoLegalSquares);
            }
        }
    }
    return pseudoLegal;
}

int main() {
    string FEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";
    // full fen = rnbqkbnr/pppppppp/8/8/PPPPPPPP/8/8/RNBQKBNR w KQkq - 0 1
    FEN = "7R/6R1/5R2/4R3/3R4/2R5/1R6/R7";
    Board Chess(FEN);
     /*
    indicies
    H                    A
    0  1  2  3  4  5  6  7
    8  9  10 11 12 13 14 15
    16 17 18 19 20 21 22 23
    24 25 26 27 28 29 30 31
    32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47
    48 49 50 51 52 53 54 55
    56 57 58 59 60 61 62 63
    printBoard(Chess.CA << 1);
    printBoard(Chess.CH >> 2);
    printBoard(Chess.R1 << 16);
    printBoard(Chess.R8 >> 8);
     */
    for (int i = 0; i < 64; i++){
        printBoard(rayPieces(0, i)); cout << endl;
    }
    Chess.printBoard();
    return 0;
}
