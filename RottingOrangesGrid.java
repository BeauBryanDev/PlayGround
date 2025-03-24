import java.util.Queue;
import java.uitl.LinkedList;

class RottingOranges {

    public int RottenOranges( int[][] Grid ) {
    
        if ( Grid == null || Grid.length == 0 ) 

            return 0 ; 

        int FreshOranges = 0 ; 

        Queue<int []> qu3u3 = new LinkedList<>() ;

        int i, j = 0;

        for ( i = 0; i < Grid.length ; i++ ) {
            
            for ( j = 0; j < Grid[i].length ; j++ ) { 
                
                if ( Grid[i][j] == 2 ) {

                    qu3u3.offer( new int[]{i,j} ) ;

                } else if ( Grid[i][j] == 1 ) {
                    
                    FreshOranges ++;
                }

            }

        }
        if ( FreshOranges == 0 ) return 0;

        int days = 0; 

	int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
	
	 while (  !qu3u3.isEmpty() ) {
	 
	 	
	 	++days ;
	 	
	 	for ( i = 0; i < qu3u3.size() ; i ++ )  {
	 	
	 		
	 		int currentPlace = qu3u3.poll() ;
	 		
	 		for ( int direction[] : directions ) {
	 		
	 			
	 			int x = currentPlace[0] + direction[0];
	 			int y = currentPlace[1] + direction[1];
	 			
	 			if ( 0 <= x < Grid.length && <= 0 y < Grid[0].length  ) {
	 			
	 				if ( Grid[x][y] != 2 ) {
	 					
	 					Grid[x][[y] = 2 ; 
	 					
	 					qu3u3.offer( new int[]{x,y} ) ;
	 					
	 					FreshOranges -- ; 
	 					
	 					
	 				
	 				}
	 				
	 			}
	 		}
	 		
	 	}
	 }
	 
	 return ( FreshOranges == 0 ? days -1 :  -1 ;

    }
    
    public static void main ( String[] , args )   {
    
    int p = 0; 
    
    }

}



