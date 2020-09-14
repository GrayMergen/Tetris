//Pieces Definition
int PiecesArray[7 /* kind */][4 /* rotation */][5 /* row */][5 /* column */] ={

    //Square
    {
        //1st rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0}
        },
        //2nd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0}
        },
        //3rd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0}
        },
        //4th rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0}
        }

    },

    //I
    {
        //1st rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 1, 1},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //2nd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 1, 0, 0}
        },
        //3rd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {1, 1, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //4th rotation
        {
            {0, 0, 1, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}
        }
    },

    //T
    {
        //1st rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 1, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //2nd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //3rd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //4th rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}
        }
    },

    //N 
    {
        //1st rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //2nd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0}
        },
        //3rd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //4th rotation
        {
            {0, 0, 0, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
        }
    },

    // N mirrored
    {
        //1st rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0}
        },
        //2nd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //3rd rotation
        {
            {0, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}
        },
        //4th rotation
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 1, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
        }
   },

    //L
    {
        //1st rotation
        {
            { 0, 0, 1, 0, 0},  //    *
            { 0, 0, 1, 0, 0},  //    *   
            { 0, 0, 2, 1, 0},  //    *  *
            { 0, 0, 0, 0, 0},  //
            { 0, 0, 0, 0, 0}   //

        },
        //2nd rotation
        {
            { 0, 0, 0, 0, 0},  //    
            { 0, 0, 1, 0, 0},  //       *
            { 1, 1, 2, 0, 0},  // *  *  *
            { 0, 0, 0, 0, 0},  //
            { 0, 0, 0, 0, 0}   //
        },
        //3th rotation
        {
            { 0, 0, 0, 0, 0},  //    
            { 0, 0, 0, 0, 0},  //    
            { 0, 0, 2, 1, 1},  //  *  *  *         
            { 0, 0, 1, 0, 0},  //  *
            { 0, 0, 0, 0, 0}   //
        },
        //4th rotation
        {
            { 0, 0, 0, 0, 0},  //    
            { 0, 0, 0, 0, 0},  //    
            { 0, 1, 2, 0, 0},  //    *  *     
            { 0, 0, 1, 0, 0},  //       *
            { 0, 0, 1, 0, 0}   //       *
        }
    },

    //L mirrored
    {
        //1st rotation
        {
            { 0, 0, 0, 0, 0},  //    
            { 0, 0, 1, 0, 0},  //    *
            { 0, 0, 2, 1, 1},  //    *  *  *
            { 0, 0, 0, 0, 0},  //
            { 0, 0, 0, 0, 0}   //

        },
        //2nd ratation
        {
            { 0, 0, 1, 0, 0},  //    *
            { 0, 0, 1, 0, 0},  //    *
            { 0, 1, 2, 0, 0},  // *  *  
            { 0, 0, 0, 0, 0},  //
            { 0, 0, 0, 0, 0}   //
        },
        //3th rotation
        {
            { 0, 0, 0, 0, 0},  //    
            { 0, 0, 0, 0, 0},  //   
            { 0, 0, 2, 1, 0},  //      *  *  
            { 0, 0, 1, 0, 0},  //      *
            { 0, 0, 1, 0, 0}   //      * 
        },
        //4th rotation
        {
            { 0, 0, 0, 0, 0},  //    
            { 0, 0, 0, 0, 0},  //    
            { 1, 1, 2, 0, 0},  //  *  *  *   
            { 0, 0, 1, 0, 0},  //        *
            { 0, 0, 0, 0, 0}   //
        }
    }
};

// Displacement of the piece to the position where it is first drawn in the board when it is created
int mPiecesInitialPosition  [7 /*kind */ ][4 /* r2otation */ ][2 /* position */] = {

    //Square
    {
        {-2, -3},
        {-2, -3},
        {-2, -3},
        {-2, -3}
    },

    //I
    {
        {-2, -1},
        {-1, -4},
        {-1, -2},
        {-1, -4}
    },

    //T
    {
        {-1, -2},
        {-2, -3},
        {-1, -3},
        {-1, -3}
    },

    //L
    {
        {-2, -2},
        {-2, -2},
        {-1, -3},
        {-1, -3}
    },

};