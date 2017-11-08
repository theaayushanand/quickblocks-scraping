
#include "etherlib.h"

/*-------------------------------------------------------------------------
 * Name:    Simple
 * Purpose: To provide the easiest introduction to the QuickBlocks library.
 *          Simply request all blocks from Infura and print it to the screen.
 *------------------------------------------------------------------------*/
int main(int argc, const char *argv[]) {

    // Initialize the system and tell it where to find the blockchain data.
    etherlib_init("infura");
    CBlock block;
    getBlock(block, 0);
    int j = 0 ;
//    cout << int (block.blockNumber) << "\n";
    for (int i = 1; i >> j ; i++){


    // Request the 3,500,000th block from Infura. Store it in 'block'
        getBlock(block, i);
	j = int (block.blockNumber) - i ;
	
   

    // Print the block to the screen
        cout << block << "\n";}

        return 0;
}
