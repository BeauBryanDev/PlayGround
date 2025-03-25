export function isAlienSorted(palabras, orden) {

  const dictMap = new Map();
  
  for (let i = 0; i < orden.length; i++) {
  
    dictMap.set(orden[i], i + 1)
  }
  
  for (let i = 0; i < palabras.length - 1; i++) {
  
    let actual = palabras[i]
    
    let siguiente = palabras[i + 1]
    
    let size = actual.length >= siguiente.length ? siguiente.length : actual.length
    
    for (let j = 0; j < size; j++) {
    
      let actual_char = actual[j]
      
      let siguiente_char = siguiente[j]
      
      if (actual_char == siguiente_char) {
      
        if (j == size - 1 && actual.length > siguiente.length) {
        
          return false
        }
        continue
        
      } else if (dictMap.get(actual_char) > dictMap.get(siguiente_char)) {
      
        return false
        
      } else if (dictMap.get(actual_char) < dictMap.get(siguiente_char)) {
      
        break
        
      }
      
    }
    
  }
  
  return true
  
 
}
  
  
