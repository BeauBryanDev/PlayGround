/* GREEDY ALGORITHM 4 COINS COUNTER */ 

// Implementation of Minimum Coin Exchange Problem ...

function findMinCoins(coins, size, value) {

  var ans = [];
  var count = 0;

  for (var i = 0; i < size; i++) 
  {
  
    while (value >= coins[i]) 
    
    {
    
      value -= coins[i];
      
      ans.push(coins[i]);
      
      count++;
    }
    
    if (value === 0) 
    
      break;
  }

  return count;
  
}

var n = 4;
var arr = [25, 20, 10, 5];
var value = 105;

document.write("Minimum coins required to make the given value : ");

document.write(findMinCoins(arr, n, value));

document.write(<br>);





