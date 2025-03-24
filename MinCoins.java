/* Greedy Algorithms  */
/*Minimum Number of Coins */ 

import java.util.Vector;

class MinCoinExchange {

    static int findMinCoins(int coins[], int size, int value) 
    {
        Vector<Integer> ans = new Vector<>();
        
        int i, count = 0;
        
        for(i = 0; i < size; i++)
        {
        
            while(value >= coins[i])
            
            {
                value -= coins[i];
                ans.add(coins[i]);
                count++;
                
            }
            if(value == 0)
            
                break;
        }
        
        return count;
    }
 
    public static void main(String[] args) {
    
        int n = 4;
        
        int[] arr = new int[] {25, 20, 10, 5};
        int value = 195;
        
        System.out.println("Minimum coins required to make the given value : ");
        System.out.println(findMinCoins(arr, n, value));
    }
}



