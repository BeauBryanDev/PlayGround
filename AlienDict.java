
public boolean isAlienSorted(String[] words, String order) {

        Map<Character, Integer> dict = new HashMap<Character, Integer>();
        
        for(int index = 0; index < 26; index++)
        {
        
            dict.put(order.charAt(index), index + 1);
        }

        for(int index = 0; index + 1 < words.length; index++)
        {
        
            if(words[index].equals(words[index + 1]))
            
            {
                continue;
        	
        	}

            int wordLength = words[index].length() > words[index + 1].length() ? words[index].length() : words[index + 1].length();
            
            for(int wordIndex = 0; wordIndex < wordLength; wordIndex++)
            {
                int val1 = words[index].length() > wordIndex ? dict.get(words[index].charAt(wordIndex)) : 0;
                
                int val2 = words[index + 1].length() > wordIndex ? dict.get(words[index + 1].charAt(wordIndex)) : 0;
                

                if(val1 > val2){
                
                    return false;
                    
                } else if (val1 < val2)  {
                
                    break;
                }
            }
        }
        return true;
    }
    
}
    
    
