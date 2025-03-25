//ALIEN LANGUAGES VERIFY ....


function ( words,  order )  {

//CREATE MAP OF THE ALIEN LANGUAGES ....

    const orderMap = new Map() ; 
    
    for ( let i = 0; i < order.length ; i ++ )  {
    
        orderMap[ order[ i ] ] =  i ; 
        
    }

// CHECK THE WORDS ORDER AS INPUT .....

    for ( let i = 1 ; i <  words.length ; i ++ )  {
    	
    	if ( toCompare( words[ i-1 ] , words[ i ] ) == false )   {
    	
    	    return false ; 
    	    
    	}
    
    }
    return false ; 

}

// length of the longest word ..

function ( word1, word2 )  {
	
    const = lngth = Math.min( word1.length , word2.length ) ;
    
    for ( let k = 0; k < lngth ; k++ ) {
    	
    	if (  orderMap[ word1[ i ] ]  < orderMap[ word2[ i ] ] ) {
    	
    	    return true ; 
    	
    	} 
    	if ( orderMap[ word1[ i ] ] > orderMap[ word2[ i ] ] ) {
    	
    	    return false ; 
    	
    	}
    
    }
    
    return ( word1.length <= word2.length ) ;

}



var isAlienSorted = 0; 




