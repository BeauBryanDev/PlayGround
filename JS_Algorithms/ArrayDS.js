/*Buildup  an Array from Scratch by myOwn within classes */

class MyArray 
{
    constructor() {

    this.length = 0; 
    this.data   = { };

    }

    get(index ) {
        
        return this.data[index];
    }

    push( item )  {
        
        this.data[this.length] = item;
        this.length ++ ;

        return this.data;
    
    } 

    pop () { 
        
        const lastElement = this.data[this.length -1] ;
        delete this.data[ this.length -1 ] ;
        this.length -- ;

        return this.lastElement;
    }

    
    shiftIndex ( index )  {
        
        for ( let i=index ; i < this.length - 1; i ++ ) {
            
            this.data[i] = this.data[ i + 1 ] ;

        } 

        delete this.data[ this.length - 1] ; 

        this.length -- ; 

    } 
    
    deleteElement ( idenx ) { 
        
        const myItem = this.data[ index ] ; 
        this.shiftIndex[ index ] ; 

        return myItem;

    }
    unshift(item) {

    if (!item) {

      return this.length;

    }

    if (this.length !== 0) {

      const lastIndex = this.length;

      for (let i = lastIndex; i > 0; i--) {

        this.data[i + 1] = this.data[i];

      }

    }

    this.data[0] = item;
    this.length++;

    return this.length;

  }
  shift() {

    if (this.length == 0) {

      return undefined;

    }

    const firstElement = this.data[0];

    for (let i = 0; i < this.length; i++) {

      this.data[i] = this.data[i + 1];

    }
    delete this.data[this.length - 1];

    this.length--;

    return firstElement; 

  }
  
}


const firstArray = new MyArray() ;




