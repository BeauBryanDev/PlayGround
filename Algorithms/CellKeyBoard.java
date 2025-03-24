import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

public class main {

  private static final  ConcurrentHashMap keyword = new ConcurrentHashMap<Integer, List<String>>();
  
  private static void combinedLetters(int index, String phone, String current, List<String> result) {
  
    if (index>=phone.length()) {
    
     if (!current.equalsIgnoreCase("")) {
     
         result.add(current);
     }
     
     return;
    }
    
    for (String letter :
    
     (List<String>)keyword.get(Integer.parseInt(phone.substring(index, index+1)))) {
      combinedLetters(index+1, phone, current+letter, result);
    }

  }

  public static void main(String []args) throws IOException, InterruptedException {
  
    keyword.put(2, List.of("a", "b", "c"));
    keyword.put(3, List.of("d", "e", "f"));
    keyword.put(4, List.of("g", "h", "i"));
    keyword.put(5, List.of("j", "k", "l"));
    keyword.put(6, List.of("m", "n", "o"));
    keyword.put(7, List.of("p", "q", "r", "s"));
    keyword.put(8, List.of("t", "u", "v"));
    keyword.put(9, List.of("w", "x", "y", "z"));
    
    List<String> result = new ArrayList<>();
    
    combinedLetters(0, "23", "", result);
    
    System.out.println(result);
    
  }

}


