//Search in Rotated Arrays num[ objetivo ] if not return -1; ....

export function searchInRotatedArray(nums, objetivo) {
  // Tu código aquí....
  
  let left = 0; 
  let right = nums.length -1 ;
  
  while ( left <= right ) {
    
    let mid =  Math.floor(  left + right) /2 ) ;
    
    if (  nums[ mid ]  == objetivo )  {
    
      return mid ; 
    
    }
      
    if (  nums[ left ] <= nums[ mid ] ) {
    
       if ( nums[ left ] <= objetivo && objetivo < nums[ mid ]  ) {
       
         right =  mid -1 ; 
         
       } else {
       
         left = left + 1 ; 
        
       }  else { 
         
         if ( nums [ mid ]  < objetivo && objetivo <= nums[ right] ) {
         
           left = mid + 1 ; 
         
         } else {
         
           right = mid -1 ; 
           
           
           }
       
       }
    
  }
  
  return -1 ; 
  
  
}




