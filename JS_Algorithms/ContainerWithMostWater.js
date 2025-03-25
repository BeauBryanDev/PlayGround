//FIND THE RECTAGLE CONTAINER THAT HOLDS THE MOST WATER AREA ....

export function maxArea(alturas) {
  // Write your code here bellow .....
  
  let p1 = 0 
  let p2 = alturas.length - 1 
  let maxWaterArea = 0 

  while (p1 <= p2) {

    let minHeight = Math.min(alturas[p1], alturas[p2]);

    let waterBase = (p2 - p1);

    let currentArea = minHeight * waterBase;


    if (currentArea > maxWaterArea) {

      maxWaterArea = currentArea; 
      
    }

    if (alturas[p1] > alturas[p2]) {

      p2--; 

    } else {

      p1++;

    }

  }

  return maxWaterArea;

}
