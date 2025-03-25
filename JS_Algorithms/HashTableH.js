/*Self-Hash-Table Own Implementation */

class HashTable 
{
    constructor(size) {
        
        this.data = new Array(size);

    }

    hashMaker ( key ) {
        
        let myHash = 0; 

        for ( let i = 0 ;  i < key.length ; i ++ ) {

            myHash = ( myHash + key.charCodeAt( i ) * i ) % (this.data.length);

        }

        return myHash;

    }

    set( key, value ) {
        
        const addresss = this.hashMaker( key ) ; 

        if ( !this.data[addresss] ) {
            
            this.data[addresss] = [ ] ; 

        }

        this.data[addresss].push( [ key, value] ) ; 

    }
    get( key  )  {  
        
        const adr3sss = this.hashMaker( key ) ;
        const currentBucket =  this.data[ addr3sss ];

        if ( currentBucket ) {  
            
            for ( let i = 0;  i < currentBucket.length ; i ++ ) { 
                
                if ( currentBucket[i][0] === key ) {  
                    
                    return currentBucket[i][1] ;
                }
            }
        } 

        return undefined;
    }
    
    getAllKeys() {
    
        const inArray = this.data;

    let keys = [];

    inArray.forEach((elmt) => {

      elmt.forEach((k) => {

        keys.push(k[0]);

      })
    });


    return keys;

  }
    
 /*
 getAllKeys(){
    return this.data
      .flat()
      .map(([name]) => name)
  }

 */
  
  getKeys() {
  
    return this.data.reduce((instance, value) => 
    
      const keys = value.map(([key]) => key);
      return instance.concat(keys)
      
    }, []);
  }
  
  remove(key) {
  
    const address = this.hashMaker(key);
    
    const currentBucket = this.data[address];
    
    if (currentBucket) {
    
      for (let i = 0; i < currentBucket.length; i++) {
      
        if (currentBucket[i][0] === key) {
        
          const deletedValue = this.data[address][i];
          
          this.data[address].splice(i, 1);
          
          /*const element2Delete = currentBucket[i];
                    delete currentBucket[i];
                    return element2Delete;
          */
          
          return deletedValue;
          
        }
      }
    }
    
    return undefined;
  }
  
  
  
  
}

const ownHashTable = new HashTable( 50 ) ; 












