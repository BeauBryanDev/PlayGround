/*Word Search in a letters_Board */

var isWord = function( board, word ) {
    
    let exists = false ; 

    const DFS = ( board, x,y, index ) => {

        const n1 = board.length ;
        const n2 = board[0].length;

        if ( x < 0 || y < 0 || x >= n1 || y >= n2 || word[ index ] != board[x][y] )
            
            return ; 

        } else {

            board[x][y] ="#";

        }

        if ( index+1 === n1 || index+1 === n2 ) {

            exists = true ;
            
            return ; 

        }

        DFS( board, x+1, y, index+1 ) ; 
        DFS( board, x-1, y, index+1 ) ; 
        DFS( board, x, y+1, index+1 ) ;
        DFS( board, x, y-1 ,index+1 ) ;

        board[x][y] = word[ index ] ;

    }
    
    for ( let i =0; i < board.length ; i ++ )  {
                
        for ( let j = 0 ; j < boar[i].length ;  j ++ )  {

            
            if ( word[0] === board[i][j] ) {

                
                DFS( board, i,j,0 ) ; 

                if ( exists ) return true ; 
            }
        }
    }
    
    return exists;

}
