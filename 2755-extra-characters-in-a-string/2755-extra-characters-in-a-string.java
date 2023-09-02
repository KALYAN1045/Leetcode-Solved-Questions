class Solution {
    public int minExtraChar(String s, String[] dicti) {
        
         Set<String> dicton = new HashSet<>();
        
        for (String word : dicti)
        {
            dicton.add(word);
        }

        int n = s.length();
        
        int[] dypo = new int[n + 1]; 
        for (int i = 1; i <= n; i++) 
        {
            dypo[i] = dypo[i - 1] + 1; 

            for (int j = i; j >= 1; j--)
            {
                String sub = s.substring(j - 1, i);

                if (dicton.contains(sub)) 
                {
                    dypo[i] = Math.min(dypo[i], dypo[j - 1]); 
                }
            }
        }

        return dypo[n];
    
    }
}